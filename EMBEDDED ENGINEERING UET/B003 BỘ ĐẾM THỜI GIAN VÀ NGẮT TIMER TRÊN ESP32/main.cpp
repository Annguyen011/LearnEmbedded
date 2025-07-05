#include<android/log.h>
#include <Arduino.h>
#include<Tickers.h>

#define PIN_LED 2
int ledState = LOW;
Ticker ticker;
const int interval = 1000; // Interval in milliseconds

void setup() {
    Serial.begin(115200);

    pinMode(PIN_LED, OUTPUT);
    ticker.attach_ms(interval, []() {
        ledState = !ledState; // Toggle the LED state
        digitalWrite(PIN_LED, ledState);
        __android_log_print(ANDROID_LOG_INFO, "LED", "LED state: %s", ledState ? "ON" : "OFF");
    });
    delay(1000); // Wait for serial to initialize
}
void loop() {
    
}
