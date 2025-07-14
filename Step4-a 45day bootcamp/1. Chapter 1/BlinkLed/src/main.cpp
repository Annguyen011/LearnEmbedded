#include <Arduino.h>

#define LED_PIN 13

void setup() {
    Serial.begin(9600);
    pinMode(LED_PIN, OUTPUT);
    Serial.println("Blink LED Example");
    delay(1000); // Wait for a second before starting
}

void loop() {
    digitalWrite(LED_PIN, HIGH); // Turn the LED on
    delay(1000);                  // Wait for a second
    digitalWrite(LED_PIN, LOW);  // Turn the LED off
    delay(1000);                  // Wait for a second
}

