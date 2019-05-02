//Wemos D1 R2
//Test temperature
//ingresso analogico di temperatura
//Su WEMOS solo A0
#include <math.h>
const int B = 4275;               // B value of the thermistor
const int R0 = 100000;            // R0 = 100k
const int pinTempSensor = A0;     // Grove - Temperature Sensor connect to A0

void setup() {
 Serial.begin(9600);
}

void loop() {
    int a = analogRead(pinTempSensor);
//    Serial.println(a);
    a=map(a,0,1023,0,896);
//    Serial.println(a);
    float R = 1023.0/a-1.0; 
    R = R0*R;
    float temperature = 1.0/(log(R/R0)/B+1/298.15)-273.15; // convert to temperature via datasheet
    Serial.println(temperature);
    delay(1000);
}
