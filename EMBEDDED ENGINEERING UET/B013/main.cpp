#include<android/log.h>
#include <Arduino.h>

#define LED_PIN 16
#define BUTTON_PIN 0

unsigned long interval = 1000; // 1 second
unsigned long timeDelay = millis();

void IRAM_ATTR buttonISR() {

    // Debounce the button press
    if (millis() - timeDelay > interval) {
        digitalWrite(LED_PIN, !digitalRead(LED_PIN));
        timeDelay = millis(); // Update the last time the button was pressed
    }
}

void setup() {
    Serial.begin(115200);

    pinMode(LED_PIN, OUTPUT);
    pinMode(BUTTON_PIN, INPUT_PULLUP);
    digitalWrite(LED_PIN, LOW);

    attachInterrupt(BUTTON_PIN, buttonISR, FALLING); // Attach interrupt to button pin

    delay(1000); // Wait for serial to initialize
}
void loop() {
    
}
