/* Blink Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "led_strip.h"
#include "sdkconfig.h"

// 模块
#include "lvgl.h"
// #include "lvgl_drivers.h"
#include "gui.h"

// 自定义头文件
#include "main.h"

static const char *TAG = "example";


void app_main(void)
{
    lv_init();

    setup_lvgl_gui();
                                      
    while (1) {
        ESP_LOGI(TAG,"hallo esp32_s2");
        vTaskDelay(2000 / portTICK_PERIOD_MS);
    }
}
