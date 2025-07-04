#include<android/log.h>
#include <Arduino.h>

#define PIN_LED 2 // GPIO pin for the LED

static bool ledState = false; // Static variable to hold the LED state


void setup() {
    Serial.begin(115200);

    pinMode(PIN_LED, OUTPUT); // Set the LED pin as output
    digitalWrite(PIN_LED, LOW); // Turn off the LED initially
    delay(1000); // Wait for serial to initialize
}
void loop() {
    attachInterrupt(digitalPinToInterrupt(PIN_LED), []() {
        ledState = !ledState; // Toggle the LED state
        digitalWrite(PIN_LED, ledState ? HIGH : LOW); // Set the LED state
        Serial.print("LED is now ");
        Serial.println(ledState ? "ON" : "OFF"); // Print the LED state to the serial monitor
    }, CHANGE); // Attach interrupt on change of state
}
