void setup() {
 pinMode(D2,OUTPUT);
 pinMode(D3,INPUT);
 Serial.begin(9600);
}

void loop() {
  int cmd=digitalRead(D3);
  if(cmd==HIGH){
    digitalWrite(D2,HIGH);
  }
  else {
    digitalWrite(D2,LOW);    
  }

}
