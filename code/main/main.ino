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


// photoresistors
int photo0pin = A0;
int photo1pin = A1;
int photo2pin = A2;
int photo3pin = A3;
int photo0input, photo1input, photo2input, photoOut3input = 0;

// LEDs
int led0 = 6;
int led1 = 7;
int led2 = 8;
int led3 = 9;
int led4 = 10;
int led5 = 11;
int led6 = 12;
int led7 = 13;

// Speakers
int piezo0 = 5;
int piezo1 = 4;

void setup() {
  Serial.begin(9600);

  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);

  torch_all_low();
  isl_setup();
}

void loop() {
  int photo0input = analogRead(photo0pin);
  int photo1input = analogRead(photo1pin);
  int photo2input = analogRead(photo2pin);
  int photo3input = analogRead(photo3pin);

  isl_start();

  // Serial.println(photo0input);
  // Serial.println(photo1input);
  // Serial.println(photo2input);
  // Serial.println(photo3input);
}
