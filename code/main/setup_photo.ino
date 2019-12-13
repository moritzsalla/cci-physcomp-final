int photo0 = A0;
int photo1 = A1;
int photo2 = A2;
int photo3 = A3;

void photo_start () {
  Serial.print(analogRead(photo0));
  Serial.print(",");
  Serial.print(analogRead(photo1));
  Serial.print(",");
  Serial.print(analogRead(photo2));
  Serial.print(",");
  Serial.print(analogRead(photo3));
  Serial.println(",");
}
