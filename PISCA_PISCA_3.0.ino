int ledazul=11;
int ledvermelho=10;
int ledamarelo=9;
int ledverde=6;

void setup(){
  Serial.begin(9600);
  pinMode(ledazul,OUTPUT);
  pinMode(ledvermelho,OUTPUT);
  pinMode(ledamarelo,OUTPUT);
  pinMode(ledverde,OUTPUT);
}

void loop(){
  int tempo=analogRead(A0);
  Serial.println(tempo);
  
  digitalWrite(ledazul,HIGH);
  delay(tempo);
  digitalWrite(ledazul,LOW);
  delay(tempo);

   digitalWrite(ledvermelho,HIGH);
  delay(tempo);
  digitalWrite(ledvermelho,LOW);
  delay(tempo);

  digitalWrite(ledamarelo,HIGH);
  delay(tempo);
  digitalWrite(ledamarelo,LOW);
  delay(tempo);

  digitalWrite(ledlaranja,HIGH);
  delay(tempo);
  digitalWrite(ledlaranja,LOW);
  delay(tempo);
 
 
  
 if(tempo>0 && tempo<=255){
  digitalWrite(ledazul,HIGH);
   }
 if(tempo>255 && tempo<=512){
  digitalWrite(ledvermelho,HIGH);
  }
 if(tempo>512 && tempo<=755){
  digitalWrite(ledamarelo,HIGH);
  }
 if(tempo>755 && tempo<=1024){
  digitalWrite(ledlaranja,HIGH);
  }


 delay(250);
}
 
