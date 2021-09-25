#define PIN7 7

void setup(){
  pinMode(7, OUTPUT);
  digitalWrite(7, LOW);
  delay(1000);
}

void loop(){
  int i=0;
  for(i=0; i<5; i++){
    digitalWrite(7, LOW);
    delay(100);
    digitalWrite(7, HIGH);
    delay(100);
  }
  while(1){
    digitalWrite(7, HIGH);
  }
}
