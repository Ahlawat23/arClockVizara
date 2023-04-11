using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;
using Newtonsoft.Json;
using UnityEngine.Android;
using SimpleJSON;
using UnityEngine.Networking;

public class dataCollecter : MonoBehaviour
{
    [SerializeField] private TextMeshPro time;
    [SerializeField] private TextMeshPro date;
    [SerializeField] private TextMeshPro weaterAndLocation;
    
    string gps;
    string gpsLat;
    string gpsLon;
    public bool isUpdating;

    private void Start()
    {
        fetchDate();
       
    }

    private void Update()
    {
        if (!isUpdating)
        {
            StartCoroutine(GetLocation());
            isUpdating = !isUpdating;
        }
        fetchtTime();
    }

    void fetchDate()
    {
        date.text = DateTime.Now.ToShortDateString();
    }

    void fetchtTime()
    {
        
        DateTime currenttime = DateTime.Parse( DateTime.Now.ToString());
        time.text = currenttime.ToString("HH:mm");
      

    }

   
   
    IEnumerator GetLocation()
    {
        if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
            Permission.RequestUserPermission(Permission.FineLocation);
            Permission.RequestUserPermission(Permission.CoarseLocation);
        }
        // First, check if user has location service enabled
        if (!Input.location.isEnabledByUser)
            yield return new WaitForSeconds(10);

        // Start service before querying location
        Input.location.Start();

        // Wait until service initializes
        int maxWait = 10;
        while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
        {
            yield return new WaitForSeconds(1);
            maxWait--;
        }

        // Service didn't initialize in 20 seconds
        if (maxWait < 1)
        {
            gps = "Timed out";
            print("Timed out");
            yield break;
        }

        // Connection has failed
        if (Input.location.status == LocationServiceStatus.Failed)
        {
            gps = "Unable to determine device location";
            print("Unable to determine device location");
            yield break;
        }
        else
        {
            gps = "Location: " + Input.location.lastData.latitude + " " + Input.location.lastData.longitude + " " + Input.location.lastData.altitude + 100f + " " + Input.location.lastData.horizontalAccuracy + " " + Input.location.lastData.timestamp;
            gpsLat = Input.location.lastData.latitude.ToString();
            gpsLon = Input.location.lastData.longitude.ToString();
            StartCoroutine(getLoacatinWeatherByCordinates_Coroutine());
            // Access granted and location value could be retrieved
            print("Location: " + Input.location.lastData.latitude + " " + Input.location.lastData.longitude + " " + Input.location.lastData.altitude + " " + Input.location.lastData.horizontalAccuracy + " " + Input.location.lastData.timestamp);
        }

        // Stop service if there is no need to query location updates continuously
        isUpdating = !isUpdating;
        Input.location.Stop();
    }

    IEnumerator getLoacatinWeatherByCordinates_Coroutine()
    {

        //string uri = "https://api.weatherapi.com/v1/current.json?key=81077651042e43e38ff114604231104&q=" + gpsLat + ", " + gpsLon + "&aqi=no";
        string uri = "https://api.weatherapi.com/v1/current.json?key=81077651042e43e38ff114604231104&q=28.6933239, 76.9332373&aqi=no";




        using (UnityWebRequest request = UnityWebRequest.Get(uri))
        {
            yield return request.SendWebRequest();
            if (request.result == UnityWebRequest.Result.ConnectionError || request.result == UnityWebRequest.Result.ProtocolError)
            {

                Debug.Log(request.error);
                Debug.Log(request.downloadHandler.text);




            }
            else
            {
                
                JSONNode node = JSON.Parse(request.downloadHandler.text);
                string location = node["location"]["name"];
                string tempc = node["current"]["temp_c"];
                string tempf = node["current"]["temp_f"];

                weaterAndLocation.text = location + "|" + tempc + "°c";





            }
        }
    }
}
