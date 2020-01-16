# Log 6

I've made some renderings to help me visualize how the interaction might take place. Rendering with ray tracing actually gives a good impression on what will work, and what won't in terms of light, color and brightness.

![Image](https://github.com/moritzsalla/cci-physcomp-final/blob/master/renderings/render.gif)

![Image](https://github.com/moritzsalla/cci-physcomp-final/blob/master/renderings/render-3.jpg?raw=true)

### Multiple I2C slaves: Solution

1. ISL29125s use the same address (1000100), which is hardwired. It therefore cannot be changed. christosku's library uses the Adafruit TCS34725 Color Sensors lib as a work around. It enables you to use different pins.

2. Another option is to use PCF8575 i2c expander ICs. The data will cannot be read synchronously, though. Instead, the Arduino cycles through the slaves.  
   https://www.ebay.com/itm/PCF8575-IIC-I2C-I-O-Extension-Shield-Module-16-bit-SMBus-I-O-ports-For-Arduino-/351954909169

3. Another option is to use a 74HC4067 multiplexer.

What happens when I connect all of them to a single bus? The sensors addresses cannot be changed but perhaps this is not an issue. If the mashup of combined signals arent distorted or overamplified, it will suffice. I don't need to locate which sensor is returning which value.

- https://github.com/christosku/ISL29125_SoftWire
- https://github.com/Fire7/SoftwareWire

I am so happy I found this. These two libraries allow for software emulation of I2C connectivity. I am using my spare analog pins as inputs. This'll allow me to finally use all 4 ambient light senors at once without the pain of using a multiplexer.

#### Pulse Width Modulation (PWM)

I need pulse width modulation to incrementally control the led torches. Still thinking how the light might actually be user controlleable, or if it should be at all. This isn't necessary but might be an interesting addition. Perhaps for a future iteration.

I have created a function fades an led between certain values. When at max, it fades back to min. Endless loop. Starting point for more complex functions.

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

I continue to search for an interesting way to control my torches.

```c++
//led A
int led0 = 6;
int led2 = 8;
int led5 = 11;
int led6 = 12;

//led B
int led1 = 7;
int led3 = 9;
int led4 = 10;
int led7 = 13;

void led_fade (int led0, int led1, int t) {
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue++) {
    analogWrite(led0, fadeValue);
    analogWrite(led1, fadeValue);
    delay(t);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue--) {
    analogWrite(led0, fadeValue);
    analogWrite(led1, fadeValue);
    delay(t);
  }
}

void setup() {
}

void loop () {
  led_fade(ledA0, ledB0, random(2, 10));
  led_fade(ledA1, ledB1, random(2, 10));
  led_fade(ledA2, ledB2, random(2, 10));
  led_fade(ledA3, ledB3, random(2, 10));
}
```
