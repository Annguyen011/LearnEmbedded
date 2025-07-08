#include "WiFi.h"
#include "ESPAsyncWebServer.h"
#include "SPIFFS.h"
#include< HardwareSerial.h>

#define LED_PIN 16
HardwareSerial MySerial(1);

void setup()
{
    Serial.begin(9600);
    pinMode(LED_PIN, OUTPUT);
    digitalWrite(LED_PIN, LOW);

    MySerial.begin(115200, SERIAL_8N1, 16, 17); // RX, TX pins for Serial1
    MySerial.onReceive([]() {
        while (MySerial.available()) {
            char c = MySerial.read();
            Serial.write(c); // Echo to Serial Monitor
            if (c == '1') {
                digitalWrite(LED_PIN, HIGH);
                MySerial.println("LED is ON");
            } else if (c == '0') {
                digitalWrite(LED_PIN, LOW);
                MySerial.println("LED is OFF");
            }
        }
    });
}

void loop()
{
}