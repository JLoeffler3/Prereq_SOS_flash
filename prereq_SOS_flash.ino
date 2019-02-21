int led=2;
int shortDuration=500;
int longDuration=1000;

void setup() {
  // put your setup code here, to run once:
  pinmode(led,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  //...
  dot();
  dot();
  dot();
  //---
  dash();
  dash();
  dash();
  //...
  dot();
  dot();
  dot();
}


void dot(){
  digitalWrite(led,HIGH);
  delay(shortDuration);
  digitalWrite(led,LOW);
  delay(shortDuration/2);
}

void dash(){
  digitalWrite(led,HIGH);
  delay(longDuration);
  digitalWrite(led,LOW);
  delay(longDuration/2);
}
