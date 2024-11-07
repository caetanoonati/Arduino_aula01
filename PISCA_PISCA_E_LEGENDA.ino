#include <Wire.h>
#include <LiquidCrystal_I2C.h>

//Inicializa o display no endereco 0x27
LiquidCrystal_I2C lcd(0x27,16,2);

 int Ledverde = 12;
int Ledazul = 13;
int Ledlaranja = 7;
void setup()
{lcd.init();
Serial.begin(9600);
  lcd.setBacklight(HIGH);
  pinMode(Ledverde,OUTPUT);
  pinMode(Ledazul,OUTPUT);
  pinMode(Ledlaranja,OUTPUT);
}
 
void loop()
{
 
  int ValorPot=analogRead(A0);
  delay(200);
  Serial.println(ValorPot);
lcd.clear();
   lcd.setCursor(0,0);
  lcd.print("Potec "+String(ValorPot));
  lcd.setCursor(0,1);
 
   if(ValorPot>0 && ValorPot<=333){
    digitalWrite(Ledverde,HIGH);
   }
    if(ValorPot>333 && ValorPot<=778){
   digitalWrite(Ledazul,HIGH);
    }
    if(ValorPot>777 && ValorPot<=1024){
     digitalWrite(Ledlaranja,HIGH);
     }
  
    }
  
