#include <Arduino.h>

#define LED_PIN 13

int valueTouch;

void setup() {
    Serial.begin(9600);
    pinMode(LED_PIN, OUTPUT);
    Serial.println("Blink LED Example");
    delay(1000); // Wait for a second before starting
}

void loop() {
    valueTouch = touchRead(4); // Read the touch value
    if(valueTouch < 40) { // If the touch value is below a threshold
        digitalWrite(LED_PIN, HIGH); // Turn the LED on
        Serial.println("LED ON");
    } else {
        digitalWrite(LED_PIN, LOW); // Turn the LED off
        Serial.println("LED OFF");
    }
}

