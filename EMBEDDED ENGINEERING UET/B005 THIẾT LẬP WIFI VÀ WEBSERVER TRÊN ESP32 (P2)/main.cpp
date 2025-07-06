#include<android/log.h>
#include <Arduino.h>
#include <Wifi.h>
#include <WebServer.h>

const char* ssid = "Your_SSID"; // Replace with your WiFi SSID
const char* password = "Your_PASSWORD"; // Replace with your WiFi Password

WebServer server(80); // Create a web server on port 80

void setup() {
    Serial.begin(115200);

    WiFi.begin(ssid, password); // Connect to WiFi
    while (WiFi.status() != WL_CONNECTED) {
        delay(1000);
        Serial.println("Connecting to WiFi...");
    }
    Serial.println("Connected to WiFi");
    Serial.print("IP Address: ");
    Serial.println(WiFi.localIP());
    // Define a simple web page
    server.on("/", []() {
        server.send(200, "text/html", "<h1>Hello from ESP32!</h1>");
    });
    // Start the server
    server.begin();
    delay(1000); // Wait for serial to initialize
}
void loop() {
    server.handleClient(); // Handle incoming client requests
    delay(10); // Small delay to avoid blocking
}
