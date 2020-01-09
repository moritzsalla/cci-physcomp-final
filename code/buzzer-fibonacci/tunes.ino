void spaceGun(int maximum) {
  for (int i = 0; i < maximum; i++) {
    digitalWrite(buzzer, HIGH);
    delayMicroseconds(i);
    digitalWrite(buzzer, LOW);
    delayMicroseconds(i);
  }
}

void randSound(int maximum) {
  tone(buzzer, random(maximum, 10 * maximum));
  delay(maximum);
}

void fibonacci(int maximum) {
  long fib = 1;
  long fib1 = 1;
  long fib2 = 2;
  for ( int i = 0; i < maximum; i++) {
    Serial.println(fib);
    fib = fib1 + fib2;
    fib1 = fib2;
    fib2 = fib;
    tone(buzzer, fib);
    delay(200);
  }
}
