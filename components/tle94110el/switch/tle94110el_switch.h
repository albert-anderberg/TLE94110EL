
#pragma once

#include "esphome/core/component.h"
#include "esphome/components/switch/switch.h"
#include "esphome/components/tle94110el/tle94110el.h"

namespace esphome {
namespace tle94110el {

class TLE94110EL_Switch : public switch_::Switch, public Component {
 public:
  void setup() override;
  void dump_config() override;

  /*
    Configuration methods called from code generation
  */
  void set_parent(TLE94110EL *parent) { this->parent = parent; }
  void set_channel(uint8_t channel) { this->channel = channel; }

 protected:
  TLE94110EL *parent{nullptr};
  uint8_t channel = 0;

  void write_state(bool state) override;
};

}  // namespace tle94110el
}  // namespace esphome
