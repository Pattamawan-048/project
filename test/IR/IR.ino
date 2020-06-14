int detect = A0; //sensorตรวจจับ
int sensorValue; //ค่าที่จะนำไปแสดงผล
int buzzer = 8;

void setup() {
  Serial.begin(9600);
  pinMode(detect,INPUT); //การตรวจจับวัตถุ
  pinMode(buzzer,OUTPUT);
}

void loop() {

  {
  sensorValue = analogRead(detect); //จะแสดงผลได้ก็ต่อเมื่อSensorตรวจจับวัตถุได้
  Serial.println(sensorValue);
  }
  
  if (sensorValue<300)  //ถ้าค่าน้อยกว่า300เสียงจะดังตลอดเมื่อมีวัตถุเข้าใกล้
  digitalWrite (buzzer,HIGH); //มีเสียง
  else digitalWrite (buzzer,LOW); //ถ้าไม่มีวัตถุเข้าใกล้จะไม่มีเสียง
}

