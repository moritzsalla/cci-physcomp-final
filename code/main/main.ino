/*******************************
LIGHT, Moritz Salla
CCi MSc Phsycomp 2019
--------------------
Experiemental interface that uses light as
an interface to output tones & melodies.
It can be played by a single player or as a
dialog between two players
--------------------
Orange = 3.5V
Black = GND
Red = 5V
White = A0–A3 (photoresistors)
Hardwired Red = 4,5,6–13 (speakers & LEDs)
Violet & White = SCL & SDA (ISL)
*******************************/

void setup() {
  Serial.begin(9600);
  torch_setup();
  isl_setup();
}

void loop() {
  torch_start();
  photo_start();
  isl_start();
  speakers_play();
  delay(2000);
}
