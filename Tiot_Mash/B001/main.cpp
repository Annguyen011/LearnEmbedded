#include<android/log.h>
#include <Arduino.h>

#define LED_PIN 2

void setup() {
    Serial.begin(115200);
    delay(1000); // Wait for serial to initialize
    pinMode(LED_PIN, OUTPUT);
    digitalWrite(LED_PIN, HIGH); // Turn on the LED

}
void loop() {
    digitalWrite(LED_PIN, LOW); // Turn off the LED
    delay(1000); // Wait for 1 second
    digitalWrite(LED_PIN, HIGH); // Turn on the LED
    delay(1000); // Wait for 1 second
}
