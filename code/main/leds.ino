int valueSin, valueCos;
int periode = 20000;

void ledFade () {
  valueSin = 128 + 127 * sin(2 * PI / periode * (time));
  valueCos = 128 + 127 * cos(2 * PI / periode * (time));
  analogWrite(ledA1, valueCos);
  analogWrite(ledB1, valueCos);
  analogWrite(ledA2, valueSin);
  analogWrite(ledB2, valueSin);
  analogWrite(ledA3, valueCos);
  analogWrite(ledB3, valueCos);
  analogWrite(ledA4, valueSin);
  analogWrite(ledB4, valueSin);
}

void randLed () {
  analogWrite(ledA1, random(0, 255));
  analogWrite(ledA2, random(0, 255));
  analogWrite(ledA3, random(0, 255));
  analogWrite(ledA4, random(0, 255));
  analogWrite(ledB1, random(0, 255));
  analogWrite(ledB2, random(0, 255));
  analogWrite(ledB3, random(0, 255));
  analogWrite(ledB4, random(0, 255));
}
