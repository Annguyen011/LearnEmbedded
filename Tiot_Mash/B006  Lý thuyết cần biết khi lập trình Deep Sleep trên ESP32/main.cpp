#include<android/log.h>
#include <Arduino.h>

#define TIME_TO_SLEEP 10 * 1000000 // Time to sleep in seconds
RTC_DATA_ATTR int bootCount = 0; // Variable to keep track of boot count

void printWakeupBy()
{
    esp_sleep_wakeup_cause_t wakeup_reason = esp_sleep_get_wakeup_cause();

    switch (wakeup_reason)
    {
        case ESP_SLEEP_WAKEUP_EXT0:
            Serial.println("Wakeup caused by external signal using RTC_IO");
            break;
        case ESP_SLEEP_WAKEUP_EXT1:
            Serial.println("Wakeup caused by external signal using RTC_CNTL");
            break;
        case ESP_SLEEP_WAKEUP_TIMER:
            Serial.println("Wakeup caused by timer");
            break;
        case ESP_SLEEP_WAKEUP_TOUCHPAD:
            Serial.println("Wakeup caused by touchpad");
            break;
        case ESP_SLEEP_WAKEUP_ULP:
            Serial.println("Wakeup caused by ULP program");
            break;
        default:
            Serial.printf("Wakeup was not caused by deep sleep: %d\n", wakeup_reason);
            break;
    }
}

void setup() {
    Serial.begin(115200);

    delay(1000); // Wait for serial to initialize
    Serial.println("Boot number: " + String(++bootCount));
    printWakeupBy();
    esp_sleep_enable_timer_wakeup(TIME_TO_SLEEP); // Enable timer wakeup
    Serial.println("Going to sleep now");
    Serial.flush(); // Ensure all serial data is sent before going to sleep
    esp_deep_sleep_start(); // Start deep sleep
    // The code below will not be executed after deep sleep
    Serial.println("This will not be printed");

    delay(1000); // Wait for serial to initialize
}
void loop() {
    // This will not be executed after deep sleep
    Serial.println("Loop is running, but will not be reached after deep sleep");
}
