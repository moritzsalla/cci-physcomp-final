# Week 6

### Multiple I2C slaves

https://github.com/christosku/ISL29125_SoftWire

https://forum.arduino.cc/index.php?topic=279000.0

ISL29125s use the same address (1000100), which is hardwired. It therefor cannot be changed. christosku's library uses the Adafruit TCS34725 Color Sensors lib as a work around. It enables you to use different pins.

Another option is to use PCF8575 i2c expander ICs. The data will cannot be read synchronously, though. Instead, the Arduino cycles through the slaves.   
https://www.ebay.com/itm/PCF8575-IIC-I2C-I-O-Extension-Shield-Module-16-bit-SMBus-I-O-ports-For-Arduino-/351954909169

Another option is to use a 74HC4067 multiplexer.