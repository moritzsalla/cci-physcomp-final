# Week 6

Some renderings to help me visualize how the interaction might take place. Rendering with ray tracing actually gives a good impression on what will work, and what won't in terms of light, color and brightness.

![Image](https://github.com/moritzsalla/cci-physcomp-final/blob/master/renderings/render.gif)

![Image](https://github.com/moritzsalla/cci-physcomp-final/blob/master/renderings/render-3.jpg?raw=true)

### Multiple I2C slaves solution

https://github.com/christosku/ISL29125_SoftWire

https://forum.arduino.cc/index.php?topic=279000.0

1. ISL29125s use the same address (1000100), which is hardwired. It therefore cannot be changed. christosku's library uses the Adafruit TCS34725 Color Sensors lib as a work around. It enables you to use different pins.

2. Another option is to use PCF8575 i2c expander ICs. The data will cannot be read synchronously, though. Instead, the Arduino cycles through the slaves.   
https://www.ebay.com/itm/PCF8575-IIC-I2C-I-O-Extension-Shield-Module-16-bit-SMBus-I-O-ports-For-Arduino-/351954909169

3. Another option is to use a 74HC4067 multiplexer.

What happens when I connect all of them to a single bus? The sensors addresses cannot be changed but perhaps this is not an issue. If the mashup of combined signals arent distorted or overamplified, it will suffice. I don't need to locate which sensor is returning which value. 
