void led_fade (int led1, int led2, int t) {
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue++) {
    analogWrite(led1, fadeValue);
    analogWrite(led2, fadeValue);
    delay(t);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue--) {
    analogWrite(led1, fadeValue);
    analogWrite(led2, fadeValue);
    delay(t);
  }
}
