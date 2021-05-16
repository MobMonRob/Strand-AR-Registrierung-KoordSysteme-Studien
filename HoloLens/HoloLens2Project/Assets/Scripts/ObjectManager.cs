using System;
using System.Collections;
using System.Collections.Generic;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.UI;
using System.Text;
using System.IO;
using UnityEngine;
using UnityEngine.UI;
using Newtonsoft.Json;

public class ObjectManager : MonoBehaviour
{
    private GameObject gameObjectToPlace;
    private GameObject gameObjectGlobal;

    [SerializeField]
    private GameObject placedCubePrefab;

    [SerializeField]
    private GameObject globalCubePrefab;

    [SerializeField]
    private GameObject jointObjectPrefab;

    [SerializeField]
    private GameObject getCubeButton;

    private List<GameObject> placedGameObjectsList = new List<GameObject>();
    private List<GameObject> globalObjectsList = new List<GameObject>();

    private Queue<Pose> receivedGlobalObjects = new Queue<Pose>();
    private Queue<Pose> receivedJointObjects = new Queue<Pose>();

    private int maxNumberOfPlacedCubes = 3;

    void Start()
    {
        //Instantiate initial Cube
        gameObjectToPlace = Instantiate(placedCubePrefab, new Vector3(0, 0, 1), new Quaternion(0, 0, 0, 1));
        //gameObjectToPlace = Instantiate(jointObjectToPlace, new Vector3(0, 0, 1), new Quaternion(0, 0, 0, 1));

        placedGameObjectsList.Add(gameObjectToPlace);

        ConnectionManager.SetObjectManager(this);
    }

    void Update()
    {
        //Cannot instantiate objects in Thread
        if (receivedJointObjects.Count != 0)
        {
            Pose p = receivedJointObjects.Dequeue();
            gameObjectGlobal = Instantiate(jointObjectPrefab, p.position, p.rotation);
            globalObjectsList.Add(gameObjectGlobal);
        }

        if (receivedGlobalObjects.Count != 0)
        {
            Pose p = receivedGlobalObjects.Dequeue();
            gameObjectGlobal = Instantiate(globalCubePrefab, p.position, p.rotation);
            globalObjectsList.Add(gameObjectGlobal);
        }
    }

    public void SpawnCubeButton()
    {
        gameObjectToPlace = Instantiate(placedCubePrefab, new Vector3(0, 0, 1), new Quaternion(0,0,0,1));
        placedGameObjectsList.Add(gameObjectToPlace);

        if (placedGameObjectsList.Count == maxNumberOfPlacedCubes)
        {
            getCubeButton.GetComponent<Interactable>().IsEnabled = false;
            getCubeButton.GetComponent<PressableButtonHoloLens2>().enabled = false;
        }
    }

    public void ResetPlacedObjects()
    {
        foreach (GameObject gameObject in placedGameObjectsList)
        {
            Destroy(gameObject);
        }
        placedGameObjectsList.Clear();

        getCubeButton.GetComponent<Interactable>().IsEnabled = true;
        getCubeButton.GetComponent<PressableButtonHoloLens2>().enabled = true;
    }

    public void ResetGlobalObjects()
    {
        foreach (GameObject gameObject in globalObjectsList)
        {
            Destroy(gameObject);
        }
        globalObjectsList.Clear();
    }

    public void SpawnObject(Vector3 position, Quaternion rotation, string type)
    {
        if(type == "joints")
        {
            receivedJointObjects.Enqueue(new Pose(position, rotation));
        }
        else
        {
            receivedGlobalObjects.Enqueue(new Pose(position, rotation));
        }
    }

    public void PlacedToGlobal()
    {
        foreach (GameObject gameObject in placedGameObjectsList)
        {
            Vector3 position = gameObject.transform.position;
            Quaternion rotation = gameObject.transform.rotation;
            GameObject globalObject = Instantiate(globalCubePrefab, position, rotation);
            globalObjectsList.Add(globalObject);
        }
        ResetPlacedObjects();
    }

    public List<GameObject> GetPlacedObjects()
    {
        return placedGameObjectsList;
    }
}
