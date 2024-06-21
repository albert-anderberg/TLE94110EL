import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.components import spi
from esphome.const import CONF_ID

DEPENDENCIES = ["spi"]

tle94110el_ns = cg.esphome_ns.namespace("tle94110el")
tle94110el = tle94110el_ns.class_(
    "tle94110el", cg.Component, spi.SPIDevice
)

CONFIG_SCHEMA = (
    cv.Schema({cv.GenerateID(): cv.declare_id(tle94110el)})
    .extend(cv.COMPONENT_SCHEMA)
    .extend(spi.spi_device_schema(cs_pin_required=True))
)


async def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    await cg.register_component(var, config)
    await spi.register_spi_device(var, config)
