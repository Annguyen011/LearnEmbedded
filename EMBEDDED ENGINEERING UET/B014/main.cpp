#include<android/log.h>
#include <Arduino.h>
#include<WiFi.h>
#include<WebServer.h>

const char* ssid = "your_SSID"; // Replace with your WiFi SSID
const char* password = "your_PASSWORD"; // Replace with your WiFi password

WebServer server(80);

void handleRoot() {
    server.send(200, "text/plain", "Hello from ESP32!");
}

void setup() {
    Serial.begin(115200);

    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED) {
        delay(1000);
        Serial.println("Connecting to WiFi...");
    }

    Serial.println("Connected to WiFi");
    Serial.print("IP Address: ");
    Serial.println(WiFi.localIP());

    server.on("/", handleRoot);
    server.begin();
    Serial.println("HTTP server started");

    delay(1000); // Wait for serial to initialize
}
void loop() {
    server.handleClient();
    delay(10); // Small delay to allow other tasks to run
}
