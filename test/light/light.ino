void setup() 
{ 
pinMode(2, OUTPUT); // กำหนดขาทำหน้าที่ OUTPUT 
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
void loop() 
{ 
digitalWrite(7,HIGH); // ไฟขา 7,8 ติด 200 ms 
digitalWrite(8,HIGH);
delay(200); 
digitalWrite(7,LOW); // ไฟขา 7,8 ดับ200 ms 
digitalWrite(8,LOW);
delay(200); 
digitalWrite(6,HIGH);
digitalWrite(9,HIGH); 
delay(200); 
digitalWrite(6,LOW); 
digitalWrite(9,LOW); 
delay(200); 
digitalWrite(5,HIGH);
 digitalWrite(10,HIGH);
delay(200); 
digitalWrite(5,LOW); 
digitalWrite(10,LOW); 
delay(200); 
digitalWrite(4,HIGH);
digitalWrite(11,HIGH); 
delay(200); 
digitalWrite(4,LOW); 
digitalWrite(11,LOW); 
delay(200); 
digitalWrite(3,HIGH); 
digitalWrite(12,HIGH); 
delay(200); 
digitalWrite(3,LOW); 
digitalWrite(12,LOW); 
delay(200); 
digitalWrite(2,HIGH); 
digitalWrite(13,HIGH); 
delay(200); 
digitalWrite(2,LOW); 
digitalWrite(13,LOW); 
delay(200); 
} 
