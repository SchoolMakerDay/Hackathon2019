//Wemos D1 R2
//Test lcd
#include <Wire.h>
#include "rgb_lcd.h" 
rgb_lcd lcd;          
int red = 255;
int green = 255;
int blue =255;
char messaggioLCD[16];  //messaggio inviato al display

void setup() {
 Serial.begin(9600);
  //configura display
  lcd.begin(16,2);           //formato 16 colonne, due righe
  lcd.setRGB(red,green,blue); //imposta colore di sfondo
  lcd.print("Test Hack");  //scrive intestazione su prima riga

}

void loop() {
}
