// playing the photoavg unsing simple tone function gives interesting results!

int LEDval, LEDval2;
int periode = 25000;

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

// tunes

void spaceGun(int j, int maximum) {
  for (int i = 0; i < maximum; i++) {
    digitalWrite(j, HIGH);
    delayMicroseconds(i);
    digitalWrite(j, LOW);
    delayMicroseconds(i);
  }
}

void randSound(int j, int maximum) {
  tone(j, random(maximum, 10 * maximum));
  delay(maximum);
}

void fibonacci(int j, int maximum) {
  long fib = 1;
  long fib1 = 1;
  long fib2 = 2;
  for ( int i = 0; i < maximum; i++) {
    Serial.println(fib);
    fib = fib1 + fib2;
    fib1 = fib2;
    fib2 = fib;
    tone(j, fib);
    delay(200);
  }
}
