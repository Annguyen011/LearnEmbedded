#include<android/log.h>
#include <Arduino.h>

#define LED_PIN 2
#define BUTTON_PIN 3

void setup() {
    Serial.begin(115200);

    pinMode(LED_PIN, OUTPUT);
    pinMode(BUTTON_PIN, INPUT_PULLUP); // Set button pin as input with pull-up resistor

    delay(1000); // Wait for serial to initialize
}
void loop() {
    if(digitalRead(BUTTON_PIN) == LOW) { // Check if button is pressed
        digitalWrite(LED_PIN, HIGH); // Turn on the LED
    } else {
        digitalWrite(LED_PIN, LOW); // Turn off the LED
    }
}
