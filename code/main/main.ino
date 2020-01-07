/*******************************
  LIGHT, Moritz Salla
  ----
  Experiemental interface that uses light as
  an interface to output tones & melodies.
  It can be played by a single player or as a
  dialog between two players
*******************************/

#include "pitches.h"
#include <SoftwareWire.h>
#include "ISL29125_SoftWire.h"
#include "SFE_ISL29125.h"

ISL29125_SOFT RGB_sensor_1;
ISL29125_SOFT RGB_sensor_2;
ISL29125_SOFT RGB_sensor_3;
ISL29125_SOFT RGB_sensor_4;

int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};

int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};

int photo1pin = A0;
int photo2pin = A1;
int photo3pin = A2;
int photo4pin = A3;
int photo1input, photo2input, photo3input, photo4input = 0;

int ledA1 = 6;
int ledA2 = 8;
int ledA3 = 11;
int ledA4 = 12;
int ledB1 = 7;
int ledB2 = 13;
int ledB3 = 9;
int ledB4 = 10;

int piezo1 = 5;
int piezo2 = 4;
int speed = 90;

void setup() {
  Serial.begin(9600);

  RGB_sensor_1.init(38, 36);
  RGB_sensor_2.init(38, 36);
}

void loop() {
  // led();

  // PHOTORESISTOR ---------------------
  //  int photo0in = analogRead(photo0pin);
  //  int photo1in = analogRead(photo1pin);
  //  int photo2in = analogRead(photo2pin);
  //  int photo3in = analogRead(photo3pin);
  //  int photoAvg = (photo0in + photo1in + photo2in + photo3in) / 4;
  //  tone(piezo1, photoAvg);

  // ISLs ---------------------
  unsigned int red1 = RGB_sensor_1.readRed();
  unsigned int green1 = RGB_sensor_1.readGreen();
  unsigned int blue1 = RGB_sensor_1.readBlue();

  unsigned int red2 = RGB_sensor_2.readRed();
  unsigned int green2 = RGB_sensor_2.readGreen();
  unsigned int blue2 = RGB_sensor_2.readBlue();

  unsigned int red3 = RGB_sensor_3.readRed();
  unsigned int green3 = RGB_sensor_3.readGreen();
  unsigned int blue3 = RGB_sensor_3.readBlue();

  unsigned int red4 = RGB_sensor_4.readRed();
  unsigned int green4 = RGB_sensor_4.readGreen();
  unsigned int blue4 = RGB_sensor_4.readBlue();

  int redAvg = (red1 + red2 + red3 + red4) / 4;
  int greenAvg = (green1 + green2 + green3 + green4) / 4;
  int blueAvg = (blue1 + blue2 + blue3 + blue4) / 4;

  Serial.print("R: "); Serial.println(redAvg, HEX);
  Serial.print("G: "); Serial.println(greenAvg, HEX);
  Serial.print("B: "); Serial.println(blueAvg, HEX);
  Serial.println();

  // tone(piezo1, photoAvg);
}
