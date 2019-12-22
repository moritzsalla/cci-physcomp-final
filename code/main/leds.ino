void torch_all_high () {
  digitalWrite(led0, HIGH);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
}

void torch_all_low () {
  digitalWrite(led0, LOW);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
}

void torch_fade (int i, int t) {
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    analogWrite(i, fadeValue);
    delay(t);

    if (fadeValue == 255) {
      for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
        analogWrite(i, fadeValue);
        delay(t);
      }
    }
  }
}
