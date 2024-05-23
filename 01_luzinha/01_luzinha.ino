void setup() { // DEFINE MODO DA PORTA
  pinMode(13,OUTPUT);//OUTPUT = SAIDA - INPUT = ENTRADA
}

void loop() { // ESTADO DA PORTA (LIGADA OU DESLIGADA)
  digitalWrite(13, HIGH); // HIGT = LIGADA(5V) - LOW = DESLIGADA(0V)
  daley(2000);
  digitalWrite(13, LOW);
  daley(2000);

  

}
