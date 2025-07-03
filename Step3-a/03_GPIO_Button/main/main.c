#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "driver/gpio.h"
#include "esp_system.h"
#include "esp_log.h"
#include"inttypes.h"

#define interrupt_GPIO 0 // GPIO 0 for button input

void app_main(void)
{
    gpio_reset_pin(interrupt_GPIO); // Initialize GPIO pin
    gpio_set_direction(interrupt_GPIO, GPIO_MODE_INPUT); // Set GPIO pin as input
    gpio_set_pull_mode(interrupt_GPIO, GPIO_PULLUP_ONLY); // Enable pull-up resistor
    gpio_set_intr_type(interrupt_GPIO, GPIO_INTR_POSEDGE); // Set interrupt type for any edge

    while (1)
    {
        if (gpio_get_level(interrupt_GPIO) == 1) { // Check if button is pressed
            printf("Button pressed!\n"); // Print message to console
        } else {
            printf("Button released!\n"); // Print message to console
        }
        vTaskDelay(100 / portTICK_PERIOD_MS); // Wait for a short period
    }
}