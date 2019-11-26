# Week 4

### Physical Encasing

I have ordered a shperical cake form that will act as a mold for the outer skin of the semi–globe. I will cover the inside with a medium layer of silicone that I'll buy in the art shop. An outer skin will cover up the sensors, making the object more approachable, aesthetic and mysterious (by hiding i'ts functions). Further more, it will slightly even out light shown at the globe, in order to get better sensor readings.

![Image](image-2.jpg)

I will create small globe torches in similar fashion. These are the molds I have ordered. Their internals will be simple—an array of LEDs connected to the arduino by distance. This'll allow programming light sequences, fading, and potential interaction.

![Image](image-1.jpg)

### Testing all the sensors at once

```c++
float brightness = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  // brightness = analogRead(A0);
  // brightness = map(brightness, 599, 880, 0, 255);

  Serial.print(analogRead(A0));
  Serial.print(",");
  Serial.print(analogRead(A1));
  Serial.print(",");
  Serial.print(analogRead(A2));
  Serial.print(",");
  Serial.print(analogRead(A3));
}```
