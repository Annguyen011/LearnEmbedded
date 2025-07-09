#include <stdio.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_log.h"
#include "driver/gpio.h"


void app_main(void)
{
    gpio_config_t GPIO_config = {
        .pin_bit_mask = (1ULL << GPIO_NUM_2), // Use GPIO 2
        .mode = GPIO_MODE_OUTPUT, // Set as output
        .pull_up_en = GPIO_PULLUP_DISABLE, // No pull-up
        .pull_down_en = GPIO_PULLDOWN_DISABLE, // No pull-down
        .intr_type = GPIO_INTR_DISABLE // No interrupt
    };

    // Initialize GPIO
    esp_err_t ret = gpio_config(&GPIO_config);
    if (ret != ESP_OK) {
        ESP_LOGE("GPIO", "Failed to configure GPIO: %s", esp_err_to_name(ret));
        return;
    }

    uint8_t blink_state = 0; // Initial state for blinking

    for(;;)
    {
        gpio_set_level(GPIO_NUM_2, blink_state); // Set GPIO 2 high
        blink_state = !blink_state; // Update blink state
        vTaskDelay(pdMS_TO_TICKS(1000)); // Wait for 1 second
    }
}