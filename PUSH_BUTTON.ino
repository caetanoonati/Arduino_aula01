int Ledvermelho=13;
int Pushvermelho=12;
int LedVermelho=8;
int PushVermelho=7;

void setup() {
pinMode(Ledvermelho,OUTPUT);
pinMode(Pushvermelho,INPUT);
Serial.begin(9600);
}

void loop() {

 if (digitalRead(Pushvermelho)==HIGH){
   digitalWrite(Ledvermelho,HIGH);
  Serial.println("Pushvermelho pressionado");
 } else { digitalWrite(Ledvermelho,LOW);}

 if (digitalRead(PushVermelho)==HIGH){
   digitalWrite(LedVermelho,HIGH);
  Serial.println("PushVermelho pressionado");
 } else { digitalWrite(LedVermelho,LOW);}

}// fim loop
