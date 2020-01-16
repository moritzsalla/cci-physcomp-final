void music(int j, int i) {
  int threshold = 1000;
  
  if (photoValue > threshold) {
    tone(j, i);
  } else {
    noTone(speaker1);
    noTone(speaker2);
  }
}
