#include "gui.h"
#include "lvgl.h"
#include "esp_log.h"


/*
* gui注册
*/

static const char *GUITAG = "lvgl_gui";

void setup_lvgl_gui()
{
    ESP_LOGI(GUITAG, "颜色深度: %d", LV_COLOR_DEPTH);
    
}

