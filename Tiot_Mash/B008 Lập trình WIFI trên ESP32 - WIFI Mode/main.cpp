#include<android/log.h>
#include <Arduino.h>
#include"Wifi.h"



void setup() {
    Serial.begin(115200);

    Wifi.mode(WIFI_MODE_STA); // Set the WiFi mode to Station
    Wifi.disconnect(); // Disconnect from any previous WiFi connection
    Wifi.begin("Your_SSID", "Your_PASSWORD"); // Replace with your WiFi credentials
    while (Wifi.status() != WL_CONNECTED) { // Wait for connection
        delay(1000);
        Serial.println("Connecting to WiFi...");
    }

    delay(1000); // Wait for serial to initialize
}
void loop() {
    Serial.println("Connected to WiFi!");
    Serial.print("IP Address: ");
    Serial.println(Wifi.localIP()); // Print the local IP address
    delay(5000); // Wait for 5 seconds before the next iteration
    // You can add more functionality here, such as sending data over WiFi
    // or receiving data from a server.
    // For example, you can use HTTPClient to make requests or WebSocketClient for real-time communication.
    // Remember to handle reconnections if the WiFi connection is lost.
    // You can also implement a web server to serve web pages or APIs.
    // This is a basic example to get you started with WiFi on ESP32.
    // Make sure to replace "Your_SSID" and "Your_PASSWORD" with your actual WiFi credentials.
    // You can also explore other features of the WiFi library, such as scanning for available
}
