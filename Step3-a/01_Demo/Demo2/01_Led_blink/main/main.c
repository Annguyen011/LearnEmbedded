#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include"driver/gpio.h"


#define LED_PIN 2

void app_main(void)
{
    gpio_reset_pin_level(LED_PIN); // Initialize LED pin to low (off)
    gpio_set_direction(LED_PIN, GPIO_MODE_OUTPUT); // Set LED pin as output

    while (1)
    {
        gpio_set_level(LED_PIN, 1); // Turn LED on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // Wait for 1

        gpio_set_level(LED_PIN, 0); // Turn LED off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // Wait for 1
    }
    
}