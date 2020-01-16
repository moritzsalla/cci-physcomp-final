int LEDval, LEDval2;
int periode = 40000;

void light () {
  LEDval = 128 + 128 * sin(2 * PI / periode * (millis()));
  LEDval2 = 128 + 128 * cos(2 * PI / periode * (millis()));

  analogWrite(ledA1, LEDval2);
  analogWrite(ledB1, LEDval2);
  analogWrite(ledA2, LEDval);
  analogWrite(ledB2, LEDval);
  analogWrite(ledA3, LEDval2);
  analogWrite(ledB3, LEDval2);
  analogWrite(ledA4, LEDval);
  analogWrite(ledB4, LEDval);
}
