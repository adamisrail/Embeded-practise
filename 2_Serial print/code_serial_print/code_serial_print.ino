void setup() {
  Serial.begin(9600);
  
}

void loop() {
  int sensorvalue = analogRead(A0);
  Serial.print(sensorvalue);
  Serial.print("");
  delay(500);
  
}
