#include "esphome/core/log.h"
#include "tle94110el.h"

namespace esphome {
namespace tle94110el {

static const char *TAG = "tle94110el";

void tle94110el::setup() {
    ESP_LOGI(TAG, "Setup start");

    this->spi_setup();
    ESP_LOGI(TAG, "SPI setup complete");

    this->enable();
    ESP_LOGI(TAG, "SPI device enabled");

    uint8_t data[] = {0b01100111, 0};

    this->transfer_array(data, sizeof(data));
    ESP_LOGI(TAG, "Array transfered");
    ESP_LOGI(TAG, data[0]);
    ESP_LOGI(TAG, data[1]);

    this->disable();
    ESP_LOGI(TAG, "Spi device disabled");

}

void tle94110el::loop() {

}

void tle94110el::dump_config(){
    ESP_LOGCONFIG(TAG, "Empty SPI component");
}

}
}
