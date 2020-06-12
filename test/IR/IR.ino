void setup(){
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(detect,INPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(led,OUTPUT);
}
void loop() {
  {
  sensorValue = analogRead(detect);
  Serial.println(sensorValue);
  }
  if (sensorValue<300)
  digitalWrite (buzzer,HIGH);
  else digitalWrite (buzzer,LOW);
    if (sensorValue>300)
  digitalWrite (led,LOW);
  else digitalWrite (led,HIGH);
  //Serial.println (mix);*/
}




