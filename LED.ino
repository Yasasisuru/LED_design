void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10,OUTPUT);
   pinMode(9, OUTPUT);
  pinMode(8,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(10,HIGH);
  delay(50);
  digitalWrite(10,LOW);
  delay(50);
  digitalWrite(10,HIGH);
  delay(50);
  digitalWrite(10,LOW);
  delay(500);
  digitalWrite(11,HIGH);
  delay(50);
  digitalWrite(11,LOW);
  delay(500);
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  delay(500);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  digitalWrite(10,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  delay(1000);
   digitalWrite(8,HIGH);
  delay(50);
  digitalWrite(8,LOW);
  delay(50);
  digitalWrite(8,HIGH);
  delay(50);
  digitalWrite(8,LOW);
  delay(500);
  digitalWrite(9,HIGH);
  delay(50);
  digitalWrite(9,LOW);
  delay(1200);
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  delay(500);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  digitalWrite(10,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  delay(1000);
  
}
