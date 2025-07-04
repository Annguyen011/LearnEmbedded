#include<android/log.h>
#include <Arduino.h>
#include<hardware/Arduino.h>
#define LED_PIN 2

void setup() {
    Serial.begin(115200);
    delay(1000); // Wait for serial to initialize
}
void loop() {
    Serial.println("Hello from Arduino on Android!");
    while (Serial.available() > 0) {
        char c = Serial.read();
        Serial.print("Received: ");
        Serial.println(c);
    }
    
}
