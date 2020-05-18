#define u8  uint8_t
#define u16  uint16_t

/* Internal Register Set Addresses & Default Values acc. to DS00001692C */
#define USB251XB_ADDR_VENDOR_ID_LSB  0x00
#define USB251XB_ADDR_VENDOR_ID_MSB 0x01
#define USB251XB_DEF_VENDOR_ID    0x0424

#define USB251XB_ADDR_PRODUCT_ID_LSB  0x02
#define USB251XB_ADDR_PRODUCT_ID_MSB  0x03

#define USB251XB_ADDR_DEVICE_ID_LSB 0x04
#define USB251XB_ADDR_DEVICE_ID_MSB 0x05
#define USB251XB_DEF_DEVICE_ID    0x0BB3

#define USB251XB_ADDR_CONFIG_DATA_1 0x06
#define USB251XB_DEF_CONFIG_DATA_1  0x9B
#define USB251XB_ADDR_CONFIG_DATA_2 0x07
#define USB251XB_DEF_CONFIG_DATA_2  0x20
#define USB251XB_ADDR_CONFIG_DATA_3 0x08
#define USB251XB_DEF_CONFIG_DATA_3  0x02

#define USB251XB_ADDR_NON_REMOVABLE_DEVICES 0x09
#define USB251XB_DEF_NON_REMOVABLE_DEVICES  0x00

#define USB251XB_ADDR_PORT_DISABLE_SELF 0x0A
#define USB251XB_DEF_PORT_DISABLE_SELF  0x00
#define USB251XB_ADDR_PORT_DISABLE_BUS  0x0B
#define USB251XB_DEF_PORT_DISABLE_BUS 0x00

#define USB251XB_ADDR_MAX_POWER_SELF  0x0C
#define USB251XB_DEF_MAX_POWER_SELF 0x01
#define USB251XB_ADDR_MAX_POWER_BUS 0x0D
#define USB251XB_DEF_MAX_POWER_BUS  0x32

#define USB251XB_ADDR_MAX_CURRENT_SELF  0x0E
#define USB251XB_DEF_MAX_CURRENT_SELF 0x01
#define USB251XB_ADDR_MAX_CURRENT_BUS 0x0F
#define USB251XB_DEF_MAX_CURRENT_BUS  0x32

#define USB251XB_ADDR_POWER_ON_TIME 0x10
#define USB251XB_DEF_POWER_ON_TIME  0x32

#define USB251XB_ADDR_LANGUAGE_ID_HIGH  0x11
#define USB251XB_ADDR_LANGUAGE_ID_LOW 0x12
#define USB251XB_DEF_LANGUAGE_ID  0x0000

#define USB251XB_STRING_BUFSIZE     62
#define USB251XB_ADDR_MANUFACTURER_STRING_LEN 0x13
#define USB251XB_ADDR_MANUFACTURER_STRING 0x16
#define USB251XB_DEF_MANUFACTURER_STRING  "Microchip"

#define USB251XB_ADDR_PRODUCT_STRING_LEN  0x14
#define USB251XB_ADDR_PRODUCT_STRING    0x54

#define USB251XB_ADDR_SERIAL_STRING_LEN   0x15
#define USB251XB_ADDR_SERIAL_STRING   0x92
#define USB251XB_DEF_SERIAL_STRING    ""

#define USB251XB_ADDR_BATTERY_CHARGING_ENABLE 0xD0
#define USB251XB_DEF_BATTERY_CHARGING_ENABLE  0x00

#define USB251XB_ADDR_BOOST_UP  0xF6
#define USB251XB_DEF_BOOST_UP 0x00
#define USB251XB_ADDR_BOOST_57  0xF7
#define USB251XB_DEF_BOOST_57 0x00
#define USB251XB_ADDR_BOOST_14  0xF8
#define USB251XB_DEF_BOOST_14 0x00

#define USB251XB_ADDR_PORT_SWAP 0xFA
#define USB251XB_DEF_PORT_SWAP  0x00

#define USB251XB_ADDR_PORT_MAP_12 0xFB
#define USB251XB_DEF_PORT_MAP_12  0x00
#define USB251XB_ADDR_PORT_MAP_34 0xFC
#define USB251XB_DEF_PORT_MAP_34  0x00 /* USB251{3B/i,4B/i,7/i} only */
#define USB251XB_ADDR_PORT_MAP_56 0xFD
#define USB251XB_DEF_PORT_MAP_56  0x00 /* USB2517/i only */
#define USB251XB_ADDR_PORT_MAP_7  0xFE
#define USB251XB_DEF_PORT_MAP_7   0x00 /* USB2517/i only */

#define USB251XB_ADDR_STATUS_COMMAND    0xFF
#define USB251XB_STATUS_COMMAND_SMBUS_DOWN  0x04
#define USB251XB_STATUS_COMMAND_RESET   0x02
#define USB251XB_STATUS_COMMAND_ATTACH    0x01

#define USB251XB_I2C_REG_SZ 0x100
#define USB251XB_I2C_WRITE_SZ 0x10

#define DRIVER_NAME "usb251xb"
#define DRIVER_DESC "Microchip USB 2.0 Hi-Speed Hub Controller"

struct usb251xb {
  u8 skip_config;
  u16 vendor_id;
  u16 product_id;
  u16 device_id;
  u8  conf_data1;
  u8  conf_data2;
  u8  conf_data3;
  u8  non_rem_dev;
  u8  port_disable_sp;
  u8  port_disable_bp;
  u8  max_power_sp;
  u8  max_power_bp;
  u8  max_current_sp;
  u8  max_current_bp;
  u8  power_on_time;
  u16 lang_id;
  u8 manufacturer_len;
  u8 product_len;
  u8 serial_len;
  char manufacturer[USB251XB_STRING_BUFSIZE];
  char product[USB251XB_STRING_BUFSIZE];
  char serial[USB251XB_STRING_BUFSIZE];
  u8  bat_charge_en;
  u8  boost_up;
  u8  boost_57;
  u8  boost_14;
  u8  port_swap;
  u8  port_map12;
  u8  port_map34;
  u8  port_map56;
  u8  port_map7;
  u8  status;
};