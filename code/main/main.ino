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

ISL29125_SOFT RGB_sensor;

int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};

int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};

int photo0pin = A0;
int photo1pin = A1;
int photo2pin = A2;
int photo3pin = A3;
int photo0input, photo1input, photo2input, photoOut3input = 0;

int ledA0 = 6;
int ledA1 = 8;
int ledA2 = 11;
int ledA3 = 12;
int ledB0 = 7;
int ledB1 = 13;
int ledB2 = 9;
int ledB3 = 10;

int piezo0 = 5;
int piezo1 = 4;
int speed = 90;

void setup() {
  Serial.begin(9600);

  if (RGB_sensor.init(38,36)) 
  {
    Serial.println("Sensor Initialization Successful\n\r");
  }
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
  unsigned int red = RGB_sensor.readRed();
  unsigned int green = RGB_sensor.readGreen();
  unsigned int blue = RGB_sensor.readBlue();

  Serial.print("R: "); Serial.println(red, HEX);
  Serial.print("G: "); Serial.println(green, HEX);
  Serial.print("B: "); Serial.println(blue, HEX);
  Serial.println();

//  int redAvg = (red0 + red1 + red2 + red3) / 4;
//  int green = (greenAvg0 + greenAvg1 + greenAvg2 + greenAvg3) / 4;
//  int blue = (blue0 + blue1 + blue2 + blue3) / 4;
//  int colorAvg = (red + green + blue) / 3;

// tone(piezo1, photoAvg);
}
