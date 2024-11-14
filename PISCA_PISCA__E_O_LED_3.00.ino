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

   digitalWrite (Ledazul, LOW);
   digitalWrite (Ledvermelho, LOW);
   digitalWrite (Ledverde, LOW);
    
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Potec "+String(ValorPot));
  lcd.setCursor(0,1);
   if(ValorPot > 0 && ValorPot <= 333){
    lcd.print("Led azul ON");
    digitalWrite(Ledazul,HIGH);
    digitalWrite(Ledvermelho,LOW);
    digitalWrite(Ledverde,LOW);

  delay(500);
   }
    if(ValorPot>333 && ValorPot<=777){
    lcd.print("Led verde ON");
     digitalWrite(Ledazul,LOW);
    digitalWrite(Ledvermelho,HIGH);
    digitalWrite(Ledverde,LOW);

  delay(500);
    }


    if(ValorPot>777 && ValorPot<=1020){
    lcd.print("Led verde ON");
     digitalWrite(Ledazul,LOW);
    digitalWrite(Ledvermelho,LOW);
    digitalWrite(Ledverde,HIGH);

 
  
  delay(500);
    }
}
  
