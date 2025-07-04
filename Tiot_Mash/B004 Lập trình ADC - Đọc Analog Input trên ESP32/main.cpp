#include<android/log.h>
#include <Arduino.h>

#define INPUT_PIN 34 // ADC1_CH6
int value = 0;
void setup() {
    Serial.begin(115200);
    delay(1000); // Wait for serial to initialize
}
void loop() {
    value = analogRead(INPUT_PIN); // Read the analog input
    Serial.print("Analog value: ");
    Serial.println(value); // Print the value to the serial monitor
    delay(1000); // Wait for 1 second before the next reading
}
