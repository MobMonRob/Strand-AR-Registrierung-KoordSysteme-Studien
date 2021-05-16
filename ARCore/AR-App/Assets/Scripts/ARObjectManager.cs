using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

[RequireComponent(typeof(ARRaycastManager))]
[RequireComponent(typeof(ARPlaneManager))]
public class ARObjectManager : MonoBehaviour
{
    private ARRaycastManager raycastManager;
    private ARPlaneManager planeManager;

    [SerializeField]
    private GameObject gameObjectToPlace;

    [SerializeField]
    private GameObject globalGameObjectToPlace;

    [SerializeField]
    private GameObject jointObjectToPlace;

    [SerializeField]
    private Button placeButton;

    [SerializeField]
    private Button resetGlobalButton;

    [SerializeField]
    private Button resetButton;

    [SerializeField]
    private Button sendButton;

    [SerializeField]
    private Toggle planeToggle;

    [SerializeField]
    private int maxObjectsCount;
    private int placedGameObjectsCount = 0;

    private static List<ARRaycastHit> hits = new List<ARRaycastHit>();
    private List<GameObject> placedGameObjectsList = new List<GameObject>();
    private List<GameObject> globalObjectsList = new List<GameObject>();

    [SerializeField]
    private Text placedAmountText;

    private bool showObjectToPlace = true;
    

    private void Awake()
    {
        raycastManager = GetComponent<ARRaycastManager>();
        planeManager = GetComponent<ARPlaneManager>();
        placedAmountText.color = Color.white;
        placedAmountText.text = placedGameObjectsCount.ToString() + "/" + maxObjectsCount.ToString();
        ConnectionManager.SetARObjectManager(this);
    }


    private void Update()
    {
        if (showObjectToPlace && raycastManager.Raycast(Camera.main.ViewportPointToRay(new Vector3(0.5f, 0.5f, 0f)), hits, TrackableType.PlaneWithinPolygon))
        {
            Pose hitPose = hits[0].pose;
        
            gameObjectToPlace.transform.position = hitPose.position;
            gameObjectToPlace.transform.rotation = hitPose.rotation;
            gameObjectToPlace.SetActive(true);
        }
    }


    public void SpawnObject()
    {
        if (raycastManager.Raycast(Camera.main.ViewportPointToRay(new Vector3(0.5f, 0.5f, 0f)), hits, TrackableType.PlaneWithinPolygon))
        {
            Vector3 position = hits[0].pose.position;
            Quaternion rotation = hits[0].pose.rotation;
        
            gameObjectToPlace.transform.position = position;
            gameObjectToPlace.transform.rotation = rotation;

            placedGameObjectsList.Add(gameObjectToPlace);
            placedGameObjectsCount++;
            gameObjectToPlace = Instantiate(gameObjectToPlace, position, rotation);
            
            placedAmountText.text = placedGameObjectsCount.ToString() + "/" + maxObjectsCount.ToString();
            if (placedGameObjectsCount == maxObjectsCount)
            {
                placedAmountText.color = Color.red;
                placeButton.interactable = false;
            }
            resetButton.interactable = true;

            if (ConnectionManager.GetConnectionStatus())
            {
                sendButton.interactable = true;
            }
        }
    }


    public void SpawnObject(Vector3 position, Quaternion rotation, string type)
    {
        GameObject receivedObject;
        if (type == "joints")
        {
            receivedObject = Instantiate(jointObjectToPlace, position, rotation);
        }
        else
        {
            receivedObject = Instantiate(globalGameObjectToPlace, position, rotation);
        }
        receivedObject.SetActive(true);
        globalObjectsList.Add(receivedObject);
        resetGlobalButton.interactable = true;
    }


    public void ResetGlobalObjects()
    {
        foreach (GameObject gameObject in globalObjectsList)
        {
            Destroy(gameObject);
        }
        globalObjectsList.Clear();
        resetGlobalButton.interactable = false;
    }
    

    public void ResetPlacedObjects()
    {
        foreach (GameObject gameObject in placedGameObjectsList)
        {
            Destroy(gameObject);
        }

        placedGameObjectsList.Clear();
        placedGameObjectsCount = 0;
        placedAmountText.color = Color.white;
        placedAmountText.text = placedGameObjectsCount.ToString() + "/" + maxObjectsCount.ToString();
        placeButton.interactable = true;
        resetButton.interactable = false;
        sendButton.interactable = false;
    }
    

    public List<GameObject> GetPlacedObjects()
    {
        return placedGameObjectsList;
    }


    public void PlacedToGlobal()
    {
        foreach (GameObject gameObject in placedGameObjectsList)
        {
            Vector3 position = gameObject.transform.position;
            Quaternion rotation = gameObject.transform.rotation;
            GameObject globalObject = Instantiate(globalGameObjectToPlace, position, rotation);
            globalObject.SetActive(true);
            globalObjectsList.Add(globalObject);
        }
        ResetPlacedObjects();
        resetGlobalButton.interactable = true;
    }


    public void TogglePlaneValueChange()
    {
        if (planeToggle.isOn)
        {
            SetPlanesActive(true);
            showObjectToPlace = true;
            if (placedGameObjectsCount < maxObjectsCount)
            {
                placeButton.interactable = true;
            }
        }
        else
        {
            SetPlanesActive(false);
            showObjectToPlace = false;
            gameObjectToPlace.SetActive(false);
            placeButton.interactable = false;
        }
    }


    private void SetPlanesActive(bool value)
    {
        foreach(var plane in planeManager.trackables)
        {
            plane.gameObject.SetActive(value);
        }
    }
}