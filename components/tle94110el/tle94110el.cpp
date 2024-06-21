#include "esphome/core/log.h"
#include "tle94110el.h"

namespace esphome {
namespace tle94110el {

static const char *TAG = "tle94110el";

void tle94110el::setup() {
    ESP_LOGI(TAG, "Setup start");

    this->spi_setup();
    ESP_LOGI(TAG, "SPI setup complete");


    delay(1);

    this->enable();
    ESP_LOGI(TAG, "SPI device enabled");

    uint8_t data[] = {0b01100111, 0};
    char msg[20];	

    this->transfer_array(data, sizeof(data));
    ESP_LOGI(TAG, "Array transfered");
    
    snprintf(msg, sizeof(msg), "%u", data[0]);
    ESP_LOGI(TAG, msg);

    snprintf(msg, sizeof(msg), "%u", data[1]);
    ESP_LOGI(TAG, msg);

    this->disable();
    ESP_LOGI(TAG, "Spi device disabled");


    delay(10);

    this->enable();
    ESP_LOGI(TAG, "SPI device enabled");

    uint8_t data1[] = {0b10011011, 0};
    char msg1[20];	

    this->transfer_array(data1, sizeof(data1));
    ESP_LOGI(TAG, "Array transfered");
    
    snprintf(msg1, sizeof(msg1), "%u", data1[0]);
    ESP_LOGI(TAG, msg1);

    snprintf(msg1, sizeof(msg1), "%u", data1[1]);
    ESP_LOGI(TAG, msg1);

    this->disable();
    ESP_LOGI(TAG, "Spi device disabled");



    delay(10);

    this->enable();
    ESP_LOGI(TAG, "SPI device enabled");

    data[0] = 0b01100111;
    data[1] = 0;

    this->transfer_array(data, sizeof(data));
    ESP_LOGI(TAG, "Array transfered");
    
    snprintf(msg, sizeof(msg), "%u", data[0]);
    ESP_LOGI(TAG, msg);

    snprintf(msg, sizeof(msg), "%u", data[1]);
    ESP_LOGI(TAG, msg);

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
