import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.components import switch
from esphome.const import CONF_CHANNEL

from .. import tle94110el_ns, tle94110el

DEPENDENCIES = ["tle94110el"]

CONF_TLE94110EL_ID = "tle94110el_id"

tle94110el_switch = tle94110el_ns.class_(
    "TLE94110EL_Switch", switch.Switch, cg.Component
)

CONFIG_SCHEMA = (
    switch.switch_schema(tle94110el_switch)
    .extend(cv.COMPONENT_SCHEMA)
    .extend(
        {
            cv.GenerateID(CONF_TLE94110EL_ID): cv.use_id(tle94110el),
            cv.Required(CONF_CHANNEL): cv.int_range(1, 8),
        }
    )
)


async def to_code(config):
    parent = await cg.get_variable(config[CONF_TLE94110EL_ID])

    var = await switch.new_switch(config)

    # Configure C++ class
    cg.add(var.set_parent(parent))
    cg.add(var.set_channel(config[CONF_CHANNEL]))

    await cg.register_component(var, config)
