#include <Wire.h>
#include <LiquidCrystal_I2C.h>

//Inicializa o display no endereco 0x27
LiquidCrystal_I2C lcd(0x27,16,2);

 int Ledazul = 12;
 int Ledvermelho = 10;
 int Ledverde = 8;
void setup()
{lcd.init();
Serial.begin(9600);
  lcd.setBacklight(HIGH);
  pinMode(Ledazul,OUTPUT);
  pinMode(Ledvermelho,OUTPUT);
  pinMode(Ledverde,OUTPUT);
}
 
void loop()
{
 
  int ValorPot=analogRead(A0);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Potec "+String(ValorPot));
  lcd.setCursor(0,1);
   if(ValorPot>0 && ValorPot<=333){
    lcd.print("Led azul ON");
    digitalWrite(Ledazul,HIGH);


    if(ValorPot>0 && ValorPot<=777){
    lcd.print("Led verde ON");
    digitalWrite(Ledverde,HIGH);


    if(ValorPot>0 && ValorPot<=1024){
    lcd.print("Led verde ON");
    digitalWrite(Ledverde,HIGH);
   }
   }
  delay(500);
    }
}
  
