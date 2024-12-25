
#include "esphome/core/log.h"
#include "tle94110el_switch.h"

namespace esphome {
namespace tle94110el {

static const char *TAG = "TLE94110EL_Switch";

void TLE94110EL_Switch::setup() {
  ESP_LOGD(TAG, "Setting up TLE94110EL Switch '%s'...", this->name_.c_str());

  bool initial_state = this->get_initial_state_with_restore_mode().value_or(false);

  if (restore_mode & esphome::switch_::RESTORE_MODE_PERSISTENT_MASK && this->get_initial_state().has_value()) {
    ESP_LOGD(TAG, "Restoring previous state(default = %u)", restore_mode & esphome::switch_::RESTORE_MODE_ON_MASK);
  } else if (restore_mode & esphome::switch_::RESTORE_MODE_PERSISTENT_MASK) {
    ESP_LOGD(TAG, "Failed to restore previous state setting default state(default = %u)",
             restore_mode & esphome::switch_::RESTORE_MODE_ON_MASK);
  } else {
    ESP_LOGD(TAG, "Setting default state(default = %u)", restore_mode & esphome::switch_::RESTORE_MODE_ON_MASK);
  }

  if (initial_state) {
    this->turn_on();
  } else {
    this->turn_off();
  }
}

void TLE94110EL_Switch::write_state(bool state) {
  this->parent->write_channel(this->channel, state);
  this->publish_state(state);
}

void TLE94110EL_Switch::dump_config() {
  ESP_LOGCONFIG(TAG, "TLE64110EL Switch");
  ESP_LOGCONFIG(TAG, "  Name: %s", this->name_.c_str());
  ESP_LOGCONFIG(TAG, "  Channel: %u", this->channel);

  switch (this->restore_mode) {
    case esphome::switch_::SWITCH_ALWAYS_OFF:
      ESP_LOGCONFIG(TAG, "  Restore mode: %s", "SWITCH_ALWAYS_OFF");
      break;

    case esphome::switch_::SWITCH_ALWAYS_ON:
      ESP_LOGCONFIG(TAG, "  Restore mode: %s", "SWITCH_ALWAYS_ON");
      break;

    case esphome::switch_::SWITCH_RESTORE_DEFAULT_OFF:
      ESP_LOGCONFIG(TAG, "  Restore mode: %s", "SWITCH_RESTORE_DEFAULT_OFF");
      break;

    case esphome::switch_::SWITCH_RESTORE_DEFAULT_ON:
      ESP_LOGCONFIG(TAG, "  Restore mode: %s", "SWITCH_RESTORE_DEFAULT_ON");
      break;

    case esphome::switch_::SWITCH_RESTORE_INVERTED_DEFAULT_OFF:
      ESP_LOGCONFIG(TAG, "  Restore mode: %s", "SWITCH_RESTORE_INVERTED_DEFAULT_OFF");
      break;

    case esphome::switch_::SWITCH_RESTORE_INVERTED_DEFAULT_ON:
      ESP_LOGCONFIG(TAG, "  Restore mode: %s", "SWITCH_RESTORE_INVERTED_DEFAULT_ON");
      break;

    case esphome::switch_::SWITCH_RESTORE_DISABLED:
      ESP_LOGCONFIG(TAG, "  Restore mode: %s", "SWITCH_RESTORE_DISABLED");
      break;

    default:
      ESP_LOGCONFIG(TAG, "  Restore mode: unknown");
      break;
  }
}

}  // namespace tle94110el
}  // namespace esphome
