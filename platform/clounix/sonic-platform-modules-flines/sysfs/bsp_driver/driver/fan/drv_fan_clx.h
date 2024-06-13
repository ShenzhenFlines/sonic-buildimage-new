#ifndef _DRV_FAN_CLX_H_
#define _DRV_FAN_CLX_H_

#include "fan_interface.h"

struct fan_driver_clx
{
    struct fan_fn_if fan_if;
    void __iomem *fan_base;
};

#define FAN_BASE_ADDRESS (0x0300)

// register define
#define FAN_VERSION_ADDR (0x4)

enum hwmon_fan_offset
{
    FAN_CPLD_VERSION_OFFSET = 0x00,
    FAN_BORAD_ID_OFFSET,
    FAN_PRESENT_OFFSET,
    FAN_PWM_CONTROL_OFFSET,

    FAN1_OUTER_RPM_OFFSET = 0x04,
    FAN2_OUTER_RPM_OFFSET,
    FAN3_OUTER_RPM_OFFSET,
    FAN4_OUTER_RPM_OFFSET,
    FAN5_OUTER_RPM_OFFSET,
    FAN6_OUTER_RPM_OFFSET,

    FAN1_INNER_RPM_OFFSET = 0x0a,
    FAN2_INNER_RPM_OFFSET,
    FAN3_INNER_RPM_OFFSET,
    FAN4_INNER_RPM_OFFSET,
    FAN5_INNER_RPM_OFFSET,
    FAN6_INNER_RPM_OFFSET,

    FAN_OUTER_EN_OFFSET = 0x10,
    FAN_INNER_EN_OFFSET,
    FAN_INT_OFFSET,
    FAN_EEPROM_WRITE_EN_OFFSET,

    FAN_AIR_DIRECTION_OFFSET = 0x14,
    FAN_LED1_CONTROL_OFFSET = 0x15,
    FAN_LED2_CONTROL_OFFSET = 0x16,
    FAN_USB_EN_OFFSET = 0x17,
    FAN_EEPROM_SELECT_OFFSET = 0x20,
    FAN_EEPROM_IIC_SPEED_OFFSET,
    FAN_EEPROM_IIC_REG_OFFSET,
    FAN_EEPROM_DATA_SIZE_OFFSET,
    FAN_EEPROM_BYTE_WRITE_OFFSET,
    FAN_EEPROM_BYTE_READ_OFFSET = 0x25,
    FAN_EEPROM_IIC_MAGE_OFFSET,
    FAN_EEPROM_IIC_START_OFFSET,
    FAN_EEPROM_IIC_STATUS_OFFSET
};

enum user_fan_led_state
{
    USER_FAN_LED_DARK,
    USER_FAN_LED_GREEN,
    USER_FAN_LED_YELLOW,
    USER_FAN_LED_RED,
    USER_FAN_LED_NOT_SUPPORT
};
/*
 *extract the value from FAN_LED2_CONTROL_OFFSET FAN_LED1_CONTROL_OFFSET, and mapping is as below
 * 00 DARK
 * 01 GREEN
 * 10 RED
 * 11 YELLOW
 */
enum dev_fan_led_state
{
    DEV_FAN_LED_DARK,
    DEV_FAN_LED_GREEN,
    DEV_FAN_LED_RED,
    DEV_FAN_LED_YELLOW,
};

#define FAN_LED_REG_MAX 2
#define FAN_EEPROM_SIZE 256
#define FAN_EEPROM_I2C_TIMEOUT (msecs_to_jiffies(500))
#define FAN_EEPROM_TX_FINISH_MASK (0x80)
#define FAN_EEPROM_TX_ERROR_MASK (0x40)

#define FAN_VMON_CHIP_ADDR 0x30
#define FAN_VMON_VENDOR_ID_REG 0x00
#define FAN_VMON_STAT_REG 0x30
#define FAN_VMON_BANK_SEL_REG 0xf0
#define FAN_VMON_CTL_REG 0x10
#define FAN_VMON_MISC_REG 0x11
#define FAN_VMON_VIN_CH_EN_REG 0x1e
#define FAN_VMON_VRANGE_MULT_REG 0x1f
#define FAN_VMON_OFF_STAT_REG 0x32
#define FAN_VMON_VIN_LVL_BASE_REG 0x40
#define FAN_VMON_ACT_CPLD_REG 0x11

#endif //_DRV_FAN_CLX_H_
