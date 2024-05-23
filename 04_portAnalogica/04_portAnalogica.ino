#define led 3
#define max 16
#define min 0
#define tmp 100

void setup() {
    pinMode(led,OUTPUT);
}

void loop() {
    for(int i= min; i< max; i++){
     analogWrite(led,i);
    // digitalWrite(led, HIGH);
    delay(tmp);
    }
    for(int i= max; i< min; i--){
     analogWrite(led,i);
    // digitalWrite(led, LOW);
    delay(tmp);
  }
}
