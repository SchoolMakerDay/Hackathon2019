#include "SoftwareSerial.h"
SoftwareSerial btSerial(D4, D3, false, 256);
int rxChar;
void setup() {
  Serial.begin(9600);
  btSerial.begin(115200);  // The Bluetooth Mate defaults to 115200bps
  btSerial.print("$");  // Print three times individually
  btSerial.print("$");
  btSerial.print("$");  // Enter command mode
  delay(100);  // Short delay, wait for the Mate to send back CMD
  btSerial.println("U,9600,N");  // Temporarily Change the baudrate to 9600, no parity
  btSerial.begin(9600);
  delay(5000);
  Serial.println("test bt su UNO"); 
}

void loop() {
 if(btSerial.available()>0){
    rxChar=btSerial.read();
    Serial.write(rxChar);
    delay(32);
    btSerial.write(rxChar);
  }
}
