
/*******************************
  ╔╦╗╦ ╦╔═╗╦═╗╔═╗╔╦╗╦╔╗╔
   ║ ╠═╣║╣ ╠╦╝║╣ ║║║║║║║ 
   ╩ ╩ ╩╚═╝╩╚═╚═╝╩ ╩╩╝╚╝
  Experimental instrument that uses light as
  an interface to output tones & melodies.
  It can be played by a single player or as a
  dialog between two.
*******************************/

#include "ISL29125_SoftWire.h"
#include "SFE_ISL29125.h"
#include "header.h"

void setup() {
  Serial.begin(9600);
  initialize();
  calibrate();
}

void loop() {
  light();
  fetchPhoto();
  fetchColor();
  music(speaker1, colorAvg);
}
