#include<android/log.h>
#include <Arduino.h>
#include <WiFi.h>

const char* ssid = "your-ssid"; // Replace with your WiFi SSID
const char* password = "your-password"; // Replace with your WiFi password

IPAddress local_IP(192, 168, 1, 184); // Replace with your desired local IP address
IPAddress gateway(192, 168, 1, 1); // Replace with your gateway
IPAddress subnet(255, 255, 255, 0); // Replace with your subnet mask
IPAddress dns(8, 8, 8, 8); // Replace with your DNS server

// Function to connect to WiFi
void connectToWiFi() {
    WiFi.config(local_IP, gateway, subnet, dns); // Set static IP configuration
    WiFi.begin(ssid, password); // Start WiFi connection

    Serial.print("Connecting to WiFi");
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    Serial.println("\nConnected to WiFi");
    Serial.println("IP Address: " + WiFi.localIP().toString());
}

void setup() {
    Serial.begin(115200);
    delay(1000); // Wait for serial to initialize
    WiFi.mode(WIFI_STA); // Set WiFi mode to Station
    // WiFI.disconnect(); // Disconnect from any previous WiFi connection
    // WiFi.begin("your-ssid", "your-password"); // Replace with your WiFi
}
void loop() {
    // int n = WiFI.scanNetworks(); // Scan for available networks

    // if(n <= 0)
    // {
    //     Serial.println("No networks found");
    // }
    // else
    // {
    //     Serial.println("Networks found: " + String(n));
    //     for(int i = 0; i < n; i++)
    //     {
    //         Serial.println("SSID: " + WiFi.SSID(i) + ", Signal Strength: " + String(WiFi.RSSI(i)) + " dBm");
    //     }
    // }
}
