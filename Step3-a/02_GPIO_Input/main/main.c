#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "driver/gpio.h"

#define LED_PIN 2
#define BUTTON_PIN 5 // Assuming a button is connected to GPIO 0

void app_main(void)
{
    gpio_reset_pin(LED_PIN); // Initialize LED pin to low (off)
    gpio_set_direction(LED_PIN, GPIO_MODE_OUTPUT); // Set LED pin as output

    gpio_reset_pin(BUTTON_PIN); // Initialize button pin
    gpio_set_direction(BUTTON_PIN, GPIO_MODE_INPUT); // Set button pin as input

    while (1)
    {
        if (gpio_get_level(BUTTON_PIN) == 1) { // Check if button is pressed
            gpio_set_level(LED_PIN, 1); // Turn LED on
        } else {
            gpio_set_level(LED_PIN, 0); // Turn LED off
        }
        vTaskDelay(100 / portTICK_PERIOD_MS); // Wait for a short period
    }
}