  
void setup()
{
  //Define a porta do led como saida 
  pinMode(11, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(2, OUTPUT);
}
  
void loop(){

  //Acende o led
 
 digitalWrite(11, HIGH);
  digitalWrite(8, LOW);
 digitalWrite(2, LOW);
      //Aguarda intervalo de tempo em milissegundos
  delay(100);

      //Aguarda intervalo de tempo em milissegundos
  delay(100);
 //Apaga o led
  digitalWrite(11, HIGH);
  digitalWrite(2, LOW);
    digitalWrite(8, LOW);
  delay(350);
  }
