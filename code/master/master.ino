
/*******************************
  ╔╦╗╦ ╦╔═╗╦═╗╔═╗╔╦╗╦╔╗╔
   ║ ╠═╣║╣ ╠╦╝║╣ ║║║║║║║ V2
   ╩ ╩ ╩╚═╝╩╚═╚═╝╩ ╩╩╝╚╝
  Experiemental instrument that uses light as
  an interface to output tones & melodies.
  It can be played by a single player or as a
  dialog between two.
*******************************/

#include <SoftwareWire.h>
#include "ISL29125_SoftWire.h"
#include "SFE_ISL29125.h"
#include "head.h"

void setup() {
  Serial.begin(9600);
  initialize();
  calibrate();
}

void loop() {
  light();
  fetchPhoto();
  fetchColor();
  
  Serial.println(photoValue);
  music(speaker1, colorAvg);
}
