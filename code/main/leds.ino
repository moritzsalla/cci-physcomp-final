// playing the photoavg unsing simple tone function gives interesting results!

int LEDval, LEDval2;
int periode = 40000;

void ledFade () {
  LEDval = 128 + 128 * sin(2 * PI / periode * (time));
  LEDval2 = 128 + 128 * cos(2 * PI / periode * (time));

  analogWrite(ledA1, LEDval2);
  analogWrite(ledB1, LEDval2);
  analogWrite(ledA2, LEDval);
  analogWrite(ledB2, LEDval);
  analogWrite(ledA3, LEDval2);
  analogWrite(ledB3, LEDval2);
  analogWrite(ledA4, LEDval);
  analogWrite(ledB4, LEDval);
}

void play(int x, float j) {
  tone(x, j);
}
