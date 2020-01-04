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

#### Emulating I2C connectivity via Software

https://github.com/christosku/ISL29125_SoftWire

https://github.com/Fire7/SoftwareWire

These two libraries allow for software emulation of I2C connectivity. I am using my spare analog pins as inputs. This'll allow me to finally use all 4 ambient light senors at once without the pain of using a multiplexer.

#### Pulse Width Modulation (PWM)

Need this to incrementally control the led torches. Still thinking how the light might actually e user controlleable, or if it should be at all. Probably no necessity.

```C++
void loop () {
  // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    analogWrite(ledPin, fadeValue);
    delay(30);
  }

// fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    analogWrite(ledPin, fadeValue);
    delay(30);
  }
}
```

This function fafdes an led to 255. When at 255, fades back to 0. Endless loop. Starting point for more complex functions.

https://youtu.be/EKUP-7Uccfg

```c++
void torch_single_fade (int i, int t) {
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    analogWrite(i, fadeValue);
    delay(t);

    if (fadeValue == 255) {
      for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
        analogWrite(i, fadeValue);
        delay(t);
      }
    }
  }
}
```

#### Output from two loudspeakers

I want to use two loudspeakers to create a more complex soundscape. However, by standard, the tone function is limited to a single output.

https://code.google.com/archive/p/rogue-code/wikis/ToneLibraryDocumentation.wiki

#### Finding a better material for the enclosure

Went to another art supply shop. Silicone/latex seems the way to go. He only had the brown one though, albeit selling pigments. Pigments wont work because they likely make the material opaque. I need it semi translucent. Need to order this stuff on the internet.

#### Fading in and out revized

```c++
void led_fade (int led, int t) {
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue++) {
    analogWrite(led, fadeValue);
    delay(t);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue--) {
    analogWrite(led, fadeValue);
    delay(t);
  }
}
```
