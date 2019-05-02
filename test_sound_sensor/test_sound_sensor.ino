//Wemos D1 R2
//Test sound sensor
//ingresso analogico di luminosità
//Su WEMOS solo A0

void setup() {
 Serial.begin(9600);
 pinMode(D0,OUTPUT);
}

void loop() {
  int lvalue=analogRead(A0);
  Serial.println(lvalue);
  delay(100);
  if(lvalue>100) {
    digitalWrite(D0,HIGH);
    delay(1000);
    digitalWrite(D0,LOW);
  }
}
