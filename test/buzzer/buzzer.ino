int buzzer = 8;

   void setup() {
     pinMode(buzzer,OUTPUT);
     }
   void loop() {
     digitalWrite (buzzer,HIGH); //มีเสียง
     delay(300);
     digitalWrite (buzzer,LOW); //ถ้าไม่มีวัตถุเข้าใกล้จะไม่มีเสียง
   }

 
