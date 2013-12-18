/*

 This sketch prints "Hello World!" to the LCD
 and shows the time.
 
  The circuit:
 * LCD RS pin to digital pin 9
 * LCD Enable pin to digital pin 8
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
 
*/

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
//LiquidCrystal(rs, enable, d4, d5, d6, d7) 
LiquidCrystal lcd(4,6,10,11,12,13);
byte rw = 5;
byte contraste_LCD =3;

void setup()
{
  
  pinMode(rw,OUTPUT);
  digitalWrite(rw,LOW);
  analogWrite(contraste_LCD,30);
  lcd.begin(16,2);
  lcd.clear();
  lcd.print("Projet Imprimante 3D - Jules Fil");
};

void loop() {  
int compteur=0;
    while (compteur<20)
  
{
    compteur=(millis()/1000);
  lcd.scrollDisplayLeft();
  lcd.setCursor(2,1);
  lcd.print("Debut d'impression il y a ");
  lcd.print(compteur);
  lcd.print(" secondes");

  delay(500);

}

lcd.clear();
  while(compteur<80)
{
    compteur=(millis()/1000);
  int matiere=1;
  lcd.scrollDisplayLeft();
  lcd.setCursor(0,0);
  lcd.print("Matiere restante: ");
  lcd.print(matiere);
  lcd.setCursor(0,1);
  lcd.print("Temps restant avant fin: ");
  lcd.print(200-compteur);
  delay (500);}
  
}



