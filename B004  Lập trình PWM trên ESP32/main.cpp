#include<android/log.h>
#include <Arduino.h>

#define LED_PIN 16

const int FREQUENCY = 5000; // Frequency in Hz
const int LED_CHANNEL = 0; // PWM channel
const int RESOLUTION = 8; // Resolution in bits

void setup() {
    Serial.begin(115200);
    pinMode(LED_PIN, OUTPUT);
    
    // Configure PWM properties
    ledcSetup(LED_CHANNEL, FREQUENCY, RESOLUTION);
    
    // Attach the LED pin to the PWM channel
    ledcAttachPin(LED_PIN, LED_CHANNEL);
}
void loop() {
    // Gradually increase brightness
    for (int dutyCycle = 0; dutyCycle <= 255; dutyCycle++) {
        ledcWrite(LED_CHANNEL, dutyCycle);
        delay(10); // Adjust delay for smooth transition
    }
    
    // Gradually decrease brightness
    for (int dutyCycle = 255; dutyCycle >= 0; dutyCycle--) {
        ledcWrite(LED_CHANNEL, dutyCycle);
        delay(10); // Adjust delay for smooth transition
    }
}