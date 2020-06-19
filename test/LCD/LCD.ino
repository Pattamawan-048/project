#include "LiquidCrystal_I2C.h" // includes the LiquidCrystal Library
LiquidCrystal_I2C lcd(0x27, 16,2); // Creates an LCD object. Parameters: (rs, enable, d4, d5, d6, d7)
const int trigPin = 12;
const int echoPin = 13;
long duration;
int distanceCm = 0;
int detect = 5;
int buzzer = 8;
int val = 0;
int sensorValue; //ค่าที่จะนำไปแสดงผล
void setup() {
  lcd.init();
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distanceCm = duration * 0.034 / 2;
  Serial.println(distanceCm);

  IR();
  lcd.setCursor(0, 0); // Sets the location at which subsequent text written to
                       // the LCD will be displayed
  lcd.print("Distance"); // Prints string "Distance" on the LCD
  lcd.setCursor(0, 1);
  lcd.print(distanceCm); // Prints the distance value from the sensor
  lcd.print(" cm");
  delay(10);
}
void IR() {
  if (distanceCm <= 5) {
    val = analogRead(detect);
    Serial.println(val);
    if (val > 1000) {
      //digitalWrite(buzzer, 0);
      digitalWrite(2, 1);
      
    } else {
      //digitalWrite(buzzer, 1);
      digitalWrite(2, 0);
       tone(buzzer, 300,10); 
    delay(100); 
     tone(buzzer,300,10); 
    delay(100); 

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
 {
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
    }
  }
}
