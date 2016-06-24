#include <Servo.h>
int x = 0;
Servo myservo;
void setup() {
  pinMode(A0,INPUT);
  pinMode(A1,OUTPUT);
}

void loop() {
  int val = analogRead(A0);
  int angle = map(val, 0, 1023, 0, 179);
  if (angle != x){
    int y = angle - x;
    myservo.attach(y);
  }
  x = angle;
}
