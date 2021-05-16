using System;
using System.Collections;
using System.Collections.Generic;
using System.Net.Sockets;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.IO;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.UI;
using UnityEngine;
using UnityEngine.UI;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

public class ConnectionManager : MonoBehaviour
{
    private string ipAddress = "192.168.0.100";
    private int port = 9051;

    [SerializeField]
    private InputField ipInputField;

    [SerializeField]
    private InputField portInputField;

    [SerializeField]
    private GameObject sendToServerButton;

    private static TcpClient tcpClient;
    private Thread receiveThread;

    private static ObjectManager objectManager;

    public static void SetObjectManager(ObjectManager ObjectManager)
    {
        objectManager = ObjectManager;
    }

    public void SetIPAddressInput()
    {
        ipAddress = ipInputField.text;
    }

    public void SetPortInput()
    {
        port = Int32.Parse(portInputField.text);
    }

    public void SendToServer()
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

         jsonObject.Add(new JProperty("type", "default"));
         jsonObject.Add(new JProperty("device", "hololens"));
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

                        Vector3 position = new Vector3((float)jPosition["x"], (float)jPosition["y"], (float)jPosition["z"]);
                        Quaternion rotation = new Quaternion((float)jRotation["x"], (float)jRotation["y"], (float)jRotation["z"], (float)jRotation["w"]);
                        objectManager.SpawnObject(position, rotation, type);
                    }
                }
            }
        }
    }

    public void ConnectToServer()
    {
        tcpClient = new TcpClient(ipAddress, port);

        if (tcpClient is null)
        {
            return;
        }
        sendToServerButton.GetComponent<Interactable>().enabled = true;
        sendToServerButton.GetComponent<PressableButtonHoloLens2>().enabled = true;

        this.receiveThread = new Thread(new ThreadStart(this.ReceiveData));
        this.receiveThread.IsBackground = true;
        this.receiveThread.Start();
    }
}
