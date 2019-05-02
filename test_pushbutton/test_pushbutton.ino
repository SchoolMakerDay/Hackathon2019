//Wemos D1 R2
//Test Pushbutton
//accende un led con la pressione
//Corrispondenze GROVE>WEMOS D2>D0, D3>D1, D4>D2, D5>D3, D6>D4, D7>D5, D8>D6
void setup() {
  Serial.begin(9600);
  pinMode(D0,OUTPUT);
  pinMode(D3,INPUT);
}

void loop() {
  int pValue=digitalRead(D3);
  digitalWrite(D0,pValue);
  Serial.println(pValue);
  delay(100);
}
