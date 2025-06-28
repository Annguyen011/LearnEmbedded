#include<android/log.h>
#include <Arduino.h>

#define PIN_SENSOR 16
#define LED 26

long lastTime = 0;
long nowTime = millis();

void IRAM_ATTR onInterrupt() {
    digitalWrite(LED, HIGH); // Turn on LED when interrupt occurs
    nowTime = millis();

}

void setup() {
    Serial.begin(115200);
    pinMode(PIN_SENSOR, INPUT_PULLUP); // Set the sensor pin as input with pull-up resistor
    pinMode(LED, OUTPUT);
    digitalWrite(LED, LOW); // Initialize LED to LOW (off)
    attachInterrupt(digitalPinToInterrupt(PIN_SENSOR), onInterrupt, RISING); // Trigger on falling edge 
    delay(1000); // Wait for serial to initialize
}
void loop() {
    nowTime = millis();
    if(digitalRead(PIN_SENSOR) == HIGHT && (nowTime - lastTime) > 1000) {
        Serial.println("Sensor triggered!");
        lastTime = nowTime; // Update lastTime to current time
    }
}
