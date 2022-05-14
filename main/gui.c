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



/* 初始化spi总线主 */
bool lvgl_spi_driver_init(int host,
    int miso_pin, int mosi_pin, int sclk_pin,
    int max_transfer_sz,
    int dma_channel,
    int quadwp_pin, int quadhd_pin)
{
#if defined (CONFIG_IDF_TARGET_ESP32)
    assert((SPI_HOST <= host) && (VSPI_HOST >= host));
    const char *spi_names[] = {
        "SPI_HOST", "HSPI_HOST", "VSPI_HOST"
    };
#elif defined (CONFIG_IDF_TARGET_ESP32S2)
    assert((SPI_HOST <= host) && (HSPI_HOST >= host));
    const char *spi_names[] = {
        "SPI_HOST", "", ""
    };
#endif

    ESP_LOGI(TAG, "Configuring SPI host %s (%d)", spi_names[host], host);
    ESP_LOGI(TAG, "MISO pin: %d, MOSI pin: %d, SCLK pin: %d, IO2/WP pin: %d, IO3/HD pin: %d",
        miso_pin, mosi_pin, sclk_pin, quadwp_pin, quadhd_pin);

    ESP_LOGI(TAG, "Max transfer size: %d (bytes)", max_transfer_sz);

    spi_bus_config_t buscfg = {
        .miso_io_num = miso_pin,
	.mosi_io_num = mosi_pin,
	.sclk_io_num = sclk_pin,
	.quadwp_io_num = quadwp_pin,
	.quadhd_io_num = quadhd_pin,
        .max_transfer_sz = max_transfer_sz
    };

    ESP_LOGI(TAG, "Initializing SPI bus...");
    esp_err_t ret = spi_bus_initialize(host, &buscfg, dma_channel);
    assert(ret == ESP_OK);

    return ESP_OK != ret;
}