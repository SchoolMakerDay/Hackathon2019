void setup() {
  Serial.begin(9600);
  pinMode(D3,INPUT);
}

void loop() {
  int sensorState = digitalRead(D3);
  Serial.println(sensorState);
  delay(1000);
}
