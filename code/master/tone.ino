int threshold = 20; // sets distance at which light starts being registered

void music(int j, int i) {
  if (photoValue > threshold) {
    tone(j, i);
  } else {
    noTone(speaker1);
    noTone(speaker2);
  }
}
