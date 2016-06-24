#include <Servo.h>

Servo myservo;
int x = 0;

void setup() {
  pinMode(A0,INPUT);
  pinMode(A1,OUTPUT);
  myservo.attach(A1);
}

void loop() {
  int val = analogRead(A0);
  int angle = map(val, 0, 1023, 0, 179);
  if (angle != x){
    int y = angle - x;
    myservo.write(angle);
  }
  x = angle;
}
