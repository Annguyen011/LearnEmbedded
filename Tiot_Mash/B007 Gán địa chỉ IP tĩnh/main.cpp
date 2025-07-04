#include<android/log.h>
#include"Wifi.h "
#include <Arduino.h>

IPAddress local_IP(192, 168, 1, 184);
IPAddress gateway(192, 168, 1, 1);
IPAddress subnet(255, 255, 255, 0);
IPAddress primaryDNS(8, 8, 8, 8);
IPAddress secondaryDNS(8, 8, 4, 4);


void setup() {
    Serial.begin(115200);
    WiFi.config(local_IP, gateway, subnet, primaryDNS, secondaryDNS);
    WiFi.mode(WIFI_MODE_STA); // Set the WiFi mode to Station
    delay(1000); // Wait for serial to initialize
}
void loop() {
    
}
