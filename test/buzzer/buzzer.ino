int buzzer = 8;

void setup() {
     pinMode(buzzer,OUTPUT);
     }
   void loop() {
     tone(buzzer, 300,10); 
    delay(100); 
     tone(buzzer,300,10); 
    delay(100); 
}