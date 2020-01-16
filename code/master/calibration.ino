void initialize() {
  RGB_sensor_1.init(39, 38);
  RGB_sensor_2.init(37, 36);
  RGB_sensor_3.init(35, 34);
  RGB_sensor_4.init(33, 32);
}

void calibrate() {
  while (millis() < 2000) {
    photo1in = analogRead(photo1pin);
    photo2in = analogRead(photo2pin);
    photo3in = analogRead(photo3pin);
    photo4in = analogRead(photo4pin);

    photoValue = (analogRead(photo1pin) + analogRead(photo2pin) + analogRead(photo3pin) + analogRead(photo4pin)) / 4;

    // minimum sensor value
    if (photoValue < photoMin) {
      photoMin = photoValue;
    }

    // maximum sensor value
    if (colorValue < colorMin) {
      colorMin = colorValue;
    }
  }
}
