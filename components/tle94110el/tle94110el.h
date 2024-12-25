#pragma once

#include "esphome/core/component.h"
#include "esphome/components/spi/spi.h"

namespace esphome {
namespace tle94110el {

#include "registers.h"

class TLE94110EL : public Component,
                   public spi::SPIDevice<spi::BIT_ORDER_LSB_FIRST, spi::CLOCK_POLARITY_LOW, spi::CLOCK_PHASE_TRAILING,
                                         spi::DATA_RATE_1MHZ> {
 public:
  void setup() override;
  void loop() override;
  void dump_config() override;

  void write_channel(uint8_t channel, bool state);

 protected:
  uint8_t transfer(uint8_t address, uint8_t data);

  uint8_t write(uint8_t address, uint8_t data);
  uint8_t read(uint8_t address);
  uint8_t readAndClear(uint8_t address, uint8_t data);

  uint8_t global_status = 0;
};
}  // namespace tle94110el
}  // namespace esphome
