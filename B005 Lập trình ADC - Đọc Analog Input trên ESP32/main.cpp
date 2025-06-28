#include<android/log.h>
#include <Arduino.h>

#define INPUT_PIN 34

int value;

void setup() {
    Serial.begin(115200);
    delay(1000); // Wait for serial to initialize
}   

void loop() {
    // Read the analog input value
    value = analogRead(INPUT_PIN);
    
    // Print the value to the serial monitor
    Serial.print("Analog Input Value: ");
    Serial.println(value);
    
    // Add a delay for readability
    delay(500); // Adjust delay as needed
}