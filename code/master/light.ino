int LEDval, LEDval2;
int frequency = 50000; 

void light() {
  // create sine wave
  LEDval = 128 + 128 * sin(2 * PI / frequency * (millis()));
  LEDval2 = 128 + 128 * cos(2 * PI / frequency * (millis()));

  // write to LEDs
  analogWrite(ledA1, LEDval2);
  analogWrite(ledB1, LEDval2);
  analogWrite(ledA2, LEDval);
  analogWrite(ledB2, LEDval);
  analogWrite(ledA3, LEDval2);
  analogWrite(ledB3, LEDval2);
  analogWrite(ledA4, LEDval);
  analogWrite(ledB4, LEDval);
}
