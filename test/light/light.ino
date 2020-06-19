 void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}
void loop() {
  if (digitalRead(2) == 1) {
      digitalWrite(7,HIGH); // ไฟขา 7,8 ติด 100 ms 
digitalWrite(8,HIGH);
delay(30); 
digitalWrite(7,LOW); // ไฟขา 7,8 ดับ 100 ms 
digitalWrite(8,LOW);
delay(30); 
digitalWrite(6,HIGH);
digitalWrite(9,HIGH); 
delay(30); 
digitalWrite(6,LOW); 
digitalWrite(9,LOW); 
delay(30); 
digitalWrite(5,HIGH);
 digitalWrite(10,HIGH);
delay(30); 
digitalWrite(5,LOW); 
digitalWrite(10,LOW); 
delay(30); 
digitalWrite(4,HIGH);
digitalWrite(11,HIGH); 
delay(30); 
digitalWrite(4,LOW); 
digitalWrite(11,LOW); 
delay(30); 
digitalWrite(3,HIGH); 
digitalWrite(12,HIGH); 
delay(30); 
digitalWrite(3,LOW); 
digitalWrite(12,LOW); 
delay(30); 
digitalWrite(13,HIGH); 
delay(30); 
digitalWrite(13,LOW); 
delay(30); 
  
  } else {
      digitalWrite(2, 0);
      digitalWrite(3, 0);
    digitalWrite(4, 0);
    digitalWrite(5, 0);
    digitalWrite(6, 0);
    digitalWrite(7, 0);
    digitalWrite(8, 0);
    digitalWrite(9, 0);
    digitalWrite(10, 0);
    digitalWrite(11, 0);
    digitalWrite(12, 0);
    digitalWrite(13, 0);
    
    if (digitalRead(2) == 1) {
     
    }
  }
}