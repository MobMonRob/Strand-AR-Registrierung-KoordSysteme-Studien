using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Text;
using System.Net.Sockets;
using System;
using System.Threading;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

public class ConnectionManager : MonoBehaviour
{
    [SerializeField]
    private InputField ipAddressInput;
    
    [SerializeField]
    private InputField portInput;

    [SerializeField]
    private Button connectButton;

    [SerializeField]
    private Button sendButton;

    private static TcpClient tcpClient;
    private Thread receiveThread;

    private static ARObjectManager objectManager;

    public static void SetARObjectManager(ARObjectManager ARObjectManager)
    {
        objectManager = ARObjectManager;
    }
    

    public void Send()
    {
        List<GameObject> placedObjects = objectManager.GetPlacedObjects();
        JObject jsonObject = new JObject();
        JArray jsonArray = new JArray();

        foreach (GameObject go in placedObjects)
        {
            Vector3 position = go.transform.position;
            JObject jPosition = new JObject();
            jPosition.Add("x", position.x);
            jPosition.Add("y", position.y);
            jPosition.Add("z", position.z);

            Quaternion rotation = go.transform.rotation;
            JObject jRotation = new JObject();
            jRotation.Add("x", rotation.x);
            jRotation.Add("y", rotation.y);
            jRotation.Add("z", rotation.z);
            jRotation.Add("w", rotation.w);

            JObject jCoordinate = new JObject();
            jCoordinate.Add(new JProperty("position", jPosition));
            jCoordinate.Add(new JProperty("rotation", jRotation));

            jsonArray.Add(jCoordinate);
        }

        jsonObject.Add(new JProperty("device", "phone"));
        jsonObject.Add(new JProperty("type", "default"));
        jsonObject.Add("coordinates", jsonArray);

        string stringToSend = jsonObject.ToString(Formatting.None);
        
        NetworkStream stream = tcpClient.GetStream();
        byte[] dataToSend = Encoding.UTF8.GetBytes(stringToSend);
        stream.Write(dataToSend, 0, dataToSend.Length);

        objectManager.PlacedToGlobal();
    }


    private void ReceiveData()
    {
        Byte[] receivedData = new Byte[1024];
        while (true)
        {
            using (NetworkStream stream = tcpClient.GetStream())
            {
                int length;
                while ((length = stream.Read(receivedData, 0, receivedData.Length)) != 0)	
                {
                    var incomingData = new byte[length];
                    Array.Copy(receivedData, 0, incomingData, 0, length);
                    string message = Encoding.UTF8.GetString(incomingData);

                    JObject jo = JObject.Parse(message);
                    string type = jo["type"].ToString();
                    JArray ja = jo["coordinates"] as JArray;

                    foreach (JObject o in ja)
                    {
                        JObject jPosition = o["position"] as JObject;
                        JObject jRotation = o["rotation"] as JObject;

                        Vector3 position = new Vector3((float) jPosition["x"], (float) jPosition["y"], (float) jPosition["z"]);
                        Quaternion rotation = new Quaternion((float) jRotation["x"], (float) jRotation["y"], (float) jRotation["z"], (float) jRotation["w"]);
                        objectManager.SpawnObject(position, rotation, type);
                    }
                }
            }
        }
    }


    public void ConnectToServer() 
    {
        string ipAddress = ipAddressInput.text;
        int port = Int16.Parse(portInput.text);

        tcpClient = new TcpClient(ipAddress, port);

        this.receiveThread = new Thread(new ThreadStart(this.ReceiveData));
        this.receiveThread.IsBackground = true;
        this.receiveThread.Start();

        connectButton.interactable = false;
        ipAddressInput.interactable = false;
        portInput.interactable = false;

        if (objectManager.GetPlacedObjects().Count > 0)
        {
            sendButton.interactable = true;
        }
    }


    public static Boolean GetConnectionStatus()
    {
        if (tcpClient is null)
        {
            return false;
        }
        return true;
    }
}
