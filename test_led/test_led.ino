//Wemos D1 R2
//Test LED
//lampeggia freq 1 hz
//Corrispondenze GROVE>WEMOS D2>D0, D3>D1, D4>D2, D5>D3, D6>D4, D7>D5, D8>D6
void setup() {
  pinMode(D0,OUTPUT);
}

void loop() {
  digitalWrite(D0,HIGH);
  delay(500);
  digitalWrite(D0,LOW);
  delay(500);
}
