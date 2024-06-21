#include "esphome.h"

class tle94110el : public Component {
  public:

  void setup() override {
  }

  void loop() override {
    ESP_LOGD("custom", "My log message!");
  }
};
