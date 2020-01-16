
ISL29125_SOFT RGB_sensor_1;
ISL29125_SOFT RGB_sensor_2;
ISL29125_SOFT RGB_sensor_3;
ISL29125_SOFT RGB_sensor_4;

// speakers
int speaker1 = 3;
int speaker2 = 2;

// photoresistors
int photo1pin = A0;
int photo2pin = A1;
int photo3pin = A2;
int photo4pin = A3;
unsigned int photo1in, photo2in, photo3in, photo4in;

// color sensors
unsigned int red1, red2, red3, red4, green1, green2, green3, green4, blue1, blue2, blue3, blue4;
unsigned int redAvg, greenAvg, blueAvg;

// LEDs
int ledA1 = 6;
int ledA2 = 8;
int ledA3 = 11;
int ledA4 = 12;
int ledB1 = 7;
int ledB2 = 5;
int ledB3 = 13;
int ledB4 = 4;

// callibration
unsigned int photoValue, photoAvg, photoMax, colorValue, colorAvg, colorMax;
int colorMin, photoMin = 1023;
