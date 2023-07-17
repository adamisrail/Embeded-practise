int led = 9;
int btn = 2;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(btn,INPUT);

}

void loop() {

int btnstate = digitalRead(btn);

if(btnstate == HIGH){
  digitalWrite(led,HIGH);
  
}
else{
  digitalWrite(led,LOW);
}
  
}
