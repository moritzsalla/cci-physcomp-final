int buzzer = 2;
unsigned long time;

void setup() {
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  time = millis();
   Serial.println((sin(time)*100)+150);
   
  // randSound((sin(time)*100)+150);
  delay(200);
}
