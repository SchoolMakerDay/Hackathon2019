//Wemos D1 R2
//Test pot
//ingresso analogico potenziometrico
//Su WEMOS solo A0

void setup() {
 Serial.begin(9600);
 pinMode(D0,OUTPUT);
}

void loop() {
  int pvalue=analogRead(A0);
  int ledvalue=map(pvalue,0,1023,0,255);
  analogWrite(D0,ledvalue);
  Serial.println(pvalue);
  delay(100);
}
