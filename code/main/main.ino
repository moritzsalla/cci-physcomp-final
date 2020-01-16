/*******************************
  ╔╦╗╦ ╦╔═╗╦═╗╔═╗╔╦╗╦╔╗╔
   ║ ╠═╣║╣ ╠╦╝║╣ ║║║║║║║ V1
   ╩ ╩ ╩╚═╝╩╚═╚═╝╩ ╩╩╝╚╝
  Experiemental instrument that uses light as
  an interface to output tones & melodies.
  It can be played by a single player or as a
  dialog between two.
*******************************/

#include "pitches.h"
#include <SoftwareWire.h>
#include "ISL29125_SoftWire.h"
#include "SFE_ISL29125.h"

unsigned long time;
unsigned long previousMillis = 0;

ISL29125_SOFT RGB_sensor_1;
ISL29125_SOFT RGB_sensor_2;
ISL29125_SOFT RGB_sensor_3;
ISL29125_SOFT RGB_sensor_4;

int speaker1 = 3;
int speaker2 = 2;

int photo1pin = A0;
int photo2pin = A1;
int photo3pin = A2;
int photo4pin = A3;
unsigned int photo1input, photo2input, photo3input, photo4input;

int ledA1 = 6;
int ledA2 = 8;
int ledA3 = 11;
int ledA4 = 12;
int ledB1 = 7;
int ledB2 = 5;
int ledB3 = 13;
int ledB4 = 4;

void setup() {
  Serial.begin(9600);

  RGB_sensor_1.init(39, 38);
  RGB_sensor_2.init(37, 36);
  RGB_sensor_3.init(35, 34);
  RGB_sensor_4.init(33, 32);
}

void loop() {
  time = millis();
  ledFade();

  // Grab vals from PHOTORESISTOR ---------------------
  int photo1in = analogRead(photo1pin);
  int photo2in = analogRead(photo2pin);
  int photo3in = analogRead(photo3pin);
  int photo4in = analogRead(photo4pin);

  // Grab vals from ISLs ---------------------
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

  // Calc AVERAGES ---------------------

  float redAvg = (red1 + red2 + red3 + red4) / 4;
  float greenAvg = (green1 + green2 + green3 + green4) / 4;
  float blueAvg = (blue1 + blue2 + blue3 + blue4) / 4;

  float photoAvg = photo2in + photo3in + photo4in;
  photoAvg = photoAvg / 3;

  float colorAvg = redAvg + greenAvg + blueAvg;
  colorAvg = colorAvg / 4;

  float totalAvg = photoAvg + colorAvg;
  totalAvg = totalAvg / 2;

  // TONE ---------------------
  unsigned long currentMillis = millis();

  int threshold = 2; // determines when theremin starts processing light signals

  float normPhoto = map(photoAvg, 0, 80, 50, 300);
  float normColor = map(colorAvg, 0, 5, 50, 200);

  Serial.println(photo3in);

  if (photo3in > threshold) {
    play(speaker1, normColor);
  } else {
    noTone(speaker1);
    noTone(speaker2);
  }

}
