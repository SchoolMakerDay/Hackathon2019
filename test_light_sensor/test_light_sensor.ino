//Wemos D1 R2
//Test Light sensor
//ingresso analogico di luminosità
//Su WEMOS solo A0

void setup() {
 Serial.begin(9600);
}

void loop() {
  int lvalue=analogRead(A0);
  Serial.println(lvalue);
  delay(1000);
}
