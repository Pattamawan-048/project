const int trigPin = 12;
const int echoPin = 13;

// กำหนดตัวแปรและกำหนดขา
long duration; //เวลา
int distance; //ระยะทาง
void setup() {
pinMode(trigPin, OUTPUT); // ตัวที่ยิงไปกระทบกับวัตถุ
pinMode(echoPin, INPUT); // สะท้อนกลับมา
Serial.begin(9600); // แสดงผล
}
void loop() {
digitalWrite(trigPin, LOW); //ยังไม่เริ่มการทำงาน
delayMicroseconds(2); //เป็นเวลา2ไมโครเซก

digitalWrite(trigPin, HIGH); 
delayMicroseconds(10); 
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH); // ยิ่งไปที่echoรับได้อ่านได้เวลาเท่าไหร่และนำไปเก็บที่ระยะทาง
distance= (duration*0.034)/2; // คำนวณระยะทางไปและกลับ
Serial.print("Distance: ");
Serial.println(distance);
delay(200);

}