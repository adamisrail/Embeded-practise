int motorpin = 9;
void setup() {
 pinMode(motorpin, OUTPUT);
 }

void loop() {

 motoron();
 delay(5000);
 
 motoroff();
 delay(3000);
 
  
}

void motoron(){

  digitalWrite(motorpin, HIGH);
  
  }
void motoroff(){

  digitalWrite(motorpin, LOW);
  
  }
