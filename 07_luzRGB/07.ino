#define ledR 2
#define ledG 4
#define ledB 3
#define btn 7
#define maximo 3

int btnclicado=0;
int btnliberado=0;
int ciclo=0;

void vermelho(){
  digitalWrite(ledR, HIGH); //HIGH E LOW podem ser 1 ou 0 sem problemas
  digitalWrite(ledG, LOW);
  digitalWrite(ledB,LOW);
}

void verde(){
  digitalWrite(ledR, LOW); 
  digitalWrite(ledG, HIGH);
  digitalWrite(ledB,LOW);
}

void azul(){
  digitalWrite(ledR, LOW); 
  digitalWrite(ledG, LOW);
  digitalWrite(ledB,HIGH);
}

void trocaLed(){
  if(ciclo ==0){
    vermelho();
  }else if (ciclo==1){
    verde();
  }else if (ciclo==2){
    azul();
  }
  ciclo++;
  if(ciclo>maximo-1){
    ciclo=0;
  }
}

void verificabtn(){
  if(digitalRead(btn)==HIGH){
    btnclicado=1;
    btnliberado=0;
  }else{
    btnliberado=1;
  }
  if((btnclicado==1)and(btnliberado==1)){
    btnclicado=0;
    btnliberado=0;
    trocaLed();
  }
}

void setup() {
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(btn, INPUT);



}

void loop() {
 verificabtn();

}
