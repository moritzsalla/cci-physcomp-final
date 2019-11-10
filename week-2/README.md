# Week 2

I've ordered 4 ambient light sensors. Initially, I wanted to go for 5 sensors of each sort but since spending such an amount of money didn't increase the accuracy much, I cut it down to four. 

In the meantime, I started soldering little breakout boards for the photoresistors. Not only will this reduce the cable salad on my central perfboard by compartmentalizing the components, but it'll also be more reliable. 

![Image](image-001.jpeg)

Taping the cables together close to the breakout board will helpfully spread force to all of the cables should they be accidentally pulled. This'll hopefully reduce the chance of a cable getting lose. Since I'm dealing with so many sensors at once, it'll be a nightmare to spot errors if things go wrong. Better be safe then sorry.

![Image](image-002.jpeg)

For now I am using this styrophome ball to prototype. I poke holes into the ball in order to bring all the technology together on the inside. The sensors will be stuck, not floating around like in the picture.

![Image](image-003.jpeg)
![Image](image-004.jpeg)

The ambient light sensors (ISL29125 RGB Light Sensor [SEN-12829]) have arrived and I am testing them out. They work! The output is in HEX color values—I hope Arduino provides an easy way to convert these to floating-point. One of these breakout boards requires two analog ins. Here is the official documentation: https://learn.sparkfun.com/tutorials/isl29125-rgb-light-sensor-hookup-guide

__Two important points to remember about these sensors:__<br>
1. The chip is not 5V tolerant and will be damaged if you apply 5V to power or any of the inputs
2. Connect the 3.3V and GND on the Arduino to the 3.3V pin on the breakout board. Connect SDA on the breakout to A4 on the Uno, SCL to A5 on the Uno.

![Image](image-005.jpeg)
![Image](image-006.jpeg)
![Image](image-007.jpeg)
![Image](image-008.jpeg)

Bought my own Board, a Sunfounder Mega (SUNFOUNDER Mega 2560 R3). It accommodates 16 analog ins, whereas the leonardo only has 6. Since I need 12 and multiplexing is not an option, this is the optimal board. I was thinking of using two Arduinos but setting up a serial connection between them and packing all of that wire jungle into relatively compact space convinced me to just spend the money in order to greatly simplify life.

![Image](image-009.jpeg)
