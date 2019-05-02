void setup()  {
    Serial.begin(9600);
    pinMode(D1,INPUT_PULLUP);
}
void loop()  {
    while(1)  {
        delay(500);
        if(digitalRead(D1)==LOW)  {
            Serial.println("Somebody is here.");
        }
        else  {
            Serial.println("Nobody.");
        }
    }
}
