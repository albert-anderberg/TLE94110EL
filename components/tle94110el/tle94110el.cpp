#include "esphome/core/log.h"
#include "tle94110el.h"

namespace esphome {
namespace tle94110el {

static const char *TAG = "tle94110el.component";

void tle94110el::setup() {

}

void tle94110el::loop() {

}

void tle94110el::dump_config(){
    ESP_LOGCONFIG(TAG, "Empty SPI component");
}

}
}
