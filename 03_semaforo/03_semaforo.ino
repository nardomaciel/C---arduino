#define led_Vermelho  8
#define led_Amarelo  9
#define led_Verde 10 


void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

}
void vermelho(int tmp){ //tmp tempo que o sinal (led) ficara aceso
   digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  delay(tmp*1000);
}

void amarelo(int tmp){
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(tmp*1000);

}

void verde(int tmp){
   digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  delay(tmp*1000);
}

void loop() {
  vermelho(7);
  amarelo(2);
  verde(9);

  
 
}
