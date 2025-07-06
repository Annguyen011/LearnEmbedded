#include<android/log.h>
#include <Arduino.h>
#include<WiFi.h>

void WiFEvent(WiFiEvent_t event) {
    switch(event) {
        case SYSTEM_EVENT_STA_START:
            Serial.println("WiFi started");
            break;
        case SYSTEM_EVENT_STA_CONNECTED:
            Serial.println("Connected to WiFi");
            break;
        case SYSTEM_EVENT_STA_DISCONNECTED:
            Serial.println("Disconnected from WiFi");
            break;
        case SYSTEM_EVENT_STA_GOT_IP:
            Serial.print("Got IP: ");
            Serial.println(WiFi.localIP());
            break;
        default:
            break;
    }
}

void setup() {
    Serial.begin(115200);
    WiFi.mode(WIFI_STA);
    WiFi.onEvent(WiFEvent); // Register the event handler
    WiFi.begin("your-ssid", "your-password"); // Replace with your WiFi credentials
    delay(1000); // Wait for serial to initialize
}
void loop() {
    
}
