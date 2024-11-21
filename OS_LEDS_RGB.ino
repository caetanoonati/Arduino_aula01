int ledrl= 11;
int ledgl= 10;
int ledbl= 9;

int ledr2= 6;
int ledg2= 5;
int ledb2= 3;


void setup (){
  pinMode (ledrl, OUTPUT);
    pinMode (ledgl, OUTPUT);
      pinMode (ledbl, OUTPUT);

        pinMode (ledr2, OUTPUT);
          pinMode (ledg2, OUTPUT);
            pinMode (ledb2, OUTPUT);
            Serial.begin (9600);
           
}

void loop (){
  int valorpot=analogRead (A0);
  Serial.println (valorpot);

  if (valorpot > 0 && 150){
    analogWrite (ledrl,138);
    analogWrite (ledgl,0);
    analogWrite (ledbl,0);
    analogWrite (ledr2,0);
    analogWrite (ledg2,200);
    analogWrite (ledb2,0);
  }
       if (valorpot > 150 && 500){
    analogWrite (ledrl,0);
    analogWrite (ledgl,200);
    analogWrite (ledbl,0);
    analogWrite (ledr2,200);
    analogWrite (ledg2,0);
    analogWrite (ledb2,0);
}

  if (valorpot > 500&& 777){
    analogWrite (ledrl,0);
    analogWrite (ledgl,250);
    analogWrite (ledbl,0);
    analogWrite (ledrl,50);
    analogWrite (ledgl,500);
     analogWrite (ledbl,0);
  }
       if (valorpot > 777 && 883){
    analogWrite (ledrl,85);
    analogWrite (ledgl,43);
    analogWrite (ledbl,200);
    analogWrite (ledr2,0);
    analogWrite (ledg2,150);
    analogWrite (ledb2,200);
}
       if (valorpot > 777 && 883){
    analogWrite (ledrl,85);
    analogWrite (ledgl,43);
    analogWrite (ledbl,200);
    analogWrite (ledr2,0);
    analogWrite (ledg2,150);
    analogWrite (ledb2,200);
}   
  if (valorpot > 883 && 955){
    analogWrite (ledrl,0);
    analogWrite (ledgl,150
    );
    analogWrite (ledbl,200);
    analogWrite (ledr2,85);
    analogWrite (ledg2,43);
    analogWrite (ledb2,200);
}
}
