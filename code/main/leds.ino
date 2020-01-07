void led_fade (int led0, int led1, int t) {
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue++) {
    analogWrite(led0, fadeValue);
    analogWrite(led1, fadeValue);
    delay(t);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue--) {
    analogWrite(led0, fadeValue);
    analogWrite(led1, fadeValue);
    delay(t);
  }
}

void led () {
  led_fade(ledA0, ledB0, random(10, 50));
  led_fade(ledA1, ledB1, random(10, 50));
  led_fade(ledA2, ledB2, random(10, 50));
  led_fade(ledA3, ledB3, random(10, 50));
}
