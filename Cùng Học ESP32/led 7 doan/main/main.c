#include <stdio.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_log.h"
#include "driver/gpio.h"

#define pinA 4;
#define pinB 5;
#define pinC 18;
#define pinD 19;
#define pinE 21;
#define pinF 22;
#define pinG 23;
#define pinDot 25;

const uint8_t pin_led7[8] = {
    pinA, pinB, pinC, pinD, pinE, pinF, pinG, pinDot
};

const uint8_t led7[10][8] = {
        {1, 1, 1, 1, 1, 1, 0, 0}, // 0
        {0, 0, 1, 0, 0, 0, 0, 0}, // 1
        {1, 0, 1, 1, 1, 0, 1, 0}, // 2
        {1, 0, 1, 1, 0, 0, 1, 0}, // 3
        {0, 1, 1, 0, 0, 1, 1, 0}, // 4
        {1, 1, 0, 1, 0, 1, 1, 0}, // 5
        {1, 1, 0, 1, 1, 1, 1, 0}, // 6
        {1, 0, 1, 0, 0, 0, 0, 0}, //7
        {1 ,1 ,1 ,1 ,1 ,1 ,1 ,0}, //8
        {1 ,1 ,1 ,0 ,0 ,1 ,1 ,0} //9
    };

void app_main(void)
{
    gpio_config_t GPIO_config = {
        .pin_bit_mask = (1ULL << pinA) | (1ULL << pinB) | (1ULL << pinC) | 
                        (1ULL << pinD) | (1ULL << pinE) | (1ULL << pinF) | 
                        (1ULL << pinG) | (1ULL << pinDot), // Use all pins
        .mode = GPIO_MODE_OUTPUT, // Set as output
        .pull_up_en = GPIO_PULLUP_DISABLE, // No pull-up
        .pull_down_en = GPIO_PULLDOWN_DISABLE, // No pull-down
        .intr_type = GPIO_INTR_DISABLE // No interrupt
    };

    gpio_config(&GPIO_config);
    esp_err_t ret = gpio_config(&GPIO_config);
    if (ret != ESP_OK) {
        ESP_LOGE("GPIO", "Failed to configure GPIO: %s", esp_err_to_name(ret));
        return;
    }

    for(;;)
    {
        uint8_t number = pin_led7[0]; // Start with 0
        
    }

}