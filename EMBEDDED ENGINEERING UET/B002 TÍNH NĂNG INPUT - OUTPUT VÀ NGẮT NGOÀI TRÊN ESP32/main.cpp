#include<android/log.h>
#include <Arduino.h>

#define PIN_LED 2
#define PIN_BUTTON1 0
#define PIN_BUTTON2 4

void IRAM_ATTR button1ISR() {
    digitalWrite(PIN_LED, HIGH);
    __android_log_print(ANDROID_LOG_INFO, "Button1", "Button 1 pressed");
}

void setup() {
    Serial.begin(115200);

    pinMode(PIN_LED, OUTPUT);
    pinMode(PIN_BUTTON1, INPUT_PULLUP);
    pinMode(PIN_BUTTON2, INPUT_PULLUP);

    delay(1000); // Wait for serial to initialize
}
void loop() {
    
}
