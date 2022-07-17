void setup() {
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop() {
//  digitalWrite(7,HIGH);
//  digitalWrite(8,HIGH);
//  digitalWrite(9,HIGH);
//  delay(1000);
//  digitalWrite(7,LOW);
//  digitalWrite(8,LOW);
//  digitalWrite(9,LOW);
//  delay(1000);
  for(int i=0; i<=0; i++){
    digitalWrite(8,HIGH);
    delay(780);
    digitalWrite(8,LOW);
    }
   for(int j=0; j<=0; j++){
    digitalWrite(9,HIGH);
    delay(950);
    digitalWrite(9,LOW);
    }
for(int i=0; i<256; i++){
  analogWrite(3,i);
  delay(10);
  }
for(int i=255; i>0; i--){
  analogWrite(3,i);
  delay(10);
  }
}
