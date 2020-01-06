/*******************************
  LIGHT, Moritz Salla
  ----
  Experiemental interface that uses light as
  an interface to output tones & melodies.
  It can be played by a single player or as a
  dialog between two players
*******************************/

#include "pitches.h"
#include <Wire.h>
#include "SFE_ISL29125.h"

// ISL ---------------------
SFE_ISL29125 RGB_sensor;

// PHOTORESISTORS ---------------------
int photo0pin = A0;
int photo1pin = A1;
int photo2pin = A2;
int photo3pin = A3;
int photo0input, photo1input, photo2input, photoOut3input = 0;

// LEDs ---------------------
int led0 = 6;
int led1 = 7;
int led2 = 8;
int led3 = 9;
int led4 = 10;
int led5 = 11;
int led6 = 12;
int led7 = 13;

// SPEAKERS ---------------------
int piezo0 = 5;
int piezo1 = 4;
int speed = 90;

int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};

int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};

void setup() {
  Serial.begin(9600);

  // ISLs ---------------------
  if (RGB_sensor.init())
  {
    Serial.println("Sensor Initialization Successful\n\r");
  }

  // PHOTORESISTORS: SETUP ---------------------
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
}

void loop() {
  // PHOTORESISTORS ---------------------
  int photo0in = analogRead(photo0pin);
  int photo1in = analogRead(photo1pin);
  int photo2in = analogRead(photo2pin);
  int photo3in = analogRead(photo3pin);

  int photoAvg = (photo0in + photo1in + photo2in + photo3in) / 4;

  // ISLs ---------------------
  unsigned int red = RGB_sensor.readRed();
  unsigned int green = RGB_sensor.readGreen();
  unsigned int blue = RGB_sensor.readBlue();

  // You can change HEX to DEC
  // Serial.print("R: "); Serial.println(red,HEX);
  // Serial.print("G: "); Serial.println(green,HEX);
  // Serial.print("B: "); Serial.println(blue,HEX);
  // Serial.println();

  int redAvg = (red0 + red1 + red2 + red3) / 4;
  int green = (greenAvg0 + greenAvg1 + greenAvg2 + greenAvg3) / 4;
  int blue = (blue0 + blue1 + blue2 + blue3) / 4;

  int colorAvg = (red + green + blue) / 3;

  Serial.println(colorAvg);

  // LEDs ---------------------
  // torch_fade(led0, 1);
  // torch_fade(led1, 2);
  // torch_fade(led2, 1);
  // torch_fade(led3, 1);
  // torch_fade(led4, 2);
  // torch_fade(led5, 1);
  // torch_fade(led6, 3);

  // SPEAKERS ---------------------
  // tone(piezo0, 20, 0.1);
}
