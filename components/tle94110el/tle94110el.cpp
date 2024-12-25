#include "esphome/core/log.h"
#include "tle94110el.h"

namespace esphome {
namespace tle94110el {

static const char *TAG = "TLE94110EL";

void TLE94110EL::setup() { this->spi_setup(); }

void TLE94110EL::loop() {}

void TLE94110EL::dump_config() { ESP_LOGCONFIG(TAG, "Empty SPI component"); }

uint8_t TLE94110EL::transfer(uint8_t address, uint8_t data) {
  this->enable();  // Set chip select pin

  global_status = this->transfer_byte(address);
  uint8_t result = this->transfer_byte(data);

  this->disable();  // Clear chip select pin

  return result;
}

uint8_t TLE94110EL::readAndClear(uint8_t address, uint8_t data) { return transfer(address | 1 << 7, data); }

uint8_t TLE94110EL::write(uint8_t address, uint8_t data) { return transfer(address | 1 << 7, data); }

uint8_t TLE94110EL::read(uint8_t address) { return transfer((address & 0x7f), 0x00); }

void TLE94110EL::write_channel(uint8_t channel, bool state) {
  uint32_t map = 0;
  uint8_t driver = 0;

  if (state) {
    driver = 0b01;
  } else {
    driver = 0b10;
  }

  map = driver << (2 * (channel - 1)) | ~driver << 16;

  write(HB_ACT_1_CTRL, (uint8_t) (map & 0xff));
  write(HB_ACT_2_CTRL, (uint8_t) ((map >> 8) & 0xff));
  write(HB_ACT_3_CTRL, (uint8_t) ((map >> 16) & 0xff));

  delay(50);

  write(HB_ACT_1_CTRL, 0);
  write(HB_ACT_2_CTRL, 0);
  write(HB_ACT_3_CTRL, 0);
}

}  // namespace tle94110el
}  // namespace esphome
