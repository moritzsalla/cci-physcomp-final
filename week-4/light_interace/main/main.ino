void setup() {
  Serial.begin(9600);
  torch_setup();
  // isl_setup();
}

void loop() {
  torch_start();
  // photo_start();
  // isl_start();
  // speakers_play_example();
  // delay(2000);
}
