#include<android/log.h>
#include <Arduino.h>
#include<Wire.h>

void setup() {
    Serial.begin(115200);

    Wire.begin(); // Initialize I2C communication
    Serial.println("I2C communication started");
    delay(1000); // Wait for serial to initialize
}
void loop() {
    Wire.beginTransmission(8); // Start communication with device at address 8
    Wire.write("Hello"); // Send data to the device 
    Wire.endTransmission(); // End transmission
    Serial.println("Data sent to device at address 8");
}
