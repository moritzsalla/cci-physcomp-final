void fetchPhoto() {
  // read photoresistors & calc average
  photoAvg = (analogRead(photo1pin) + analogRead(photo2pin) + analogRead(photo3pin) + analogRead(photo4pin)) / 4;

  // apply mapping
  photoValue = map(photoAvg, photoMin, photoMax, 0, 255);
  photoValue = constrain(photoValue, 0, 255);
}

void fetchColor() {
  // read color sensors
  red1 = RGB_sensor_1.readRed();
  green1 = RGB_sensor_1.readGreen();
  blue1 = RGB_sensor_1.readBlue();
  red2 = RGB_sensor_2.readRed();
  green2 = RGB_sensor_2.readGreen();
  blue2 = RGB_sensor_2.readBlue();
  red3 = RGB_sensor_3.readRed();
  green3 = RGB_sensor_3.readGreen();
  blue3 = RGB_sensor_3.readBlue();
  red4 = RGB_sensor_4.readRed();
  green4 = RGB_sensor_4.readGreen();
  blue4 = RGB_sensor_4.readBlue();

  // calculate color chanel averages
  redAvg = (red1 + red2 + red3 + red4) / 4;
  greenAvg = (green1 + green2 + green3 + green4) / 4;
  blueAvg = (blue1 + blue2 + blue3 + blue4) / 4;

  // calculate total average
  colorAvg = (redAvg + greenAvg + blueAvg) / 3;

  // remove inaudible frequencies
  colorAvg = map(colorAvg, 0, 255, 100, 255);
}
