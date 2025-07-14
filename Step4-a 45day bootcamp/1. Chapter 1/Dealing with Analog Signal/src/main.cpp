#include <Arduino.h>

int analogValue = 0;

void setup() {
    Serial.begin(9600);
    Serial.println("Analog Signal Example");
    delay(1000); // Wait for a second before starting
}

void loop() {
    analogValue = analogRead(34); // Read the analog value from pin 34
    Serial.print("Analog Value: ");
    Serial.println(analogValue); // Print the analog value to the Serial Monitor
    delay(500); // Wait for half a second before the next reading
}

