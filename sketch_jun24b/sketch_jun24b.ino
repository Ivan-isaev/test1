#include<Servo.h> 
Servo motor;      
int potens=A0;     
int motorpin=9;   
int potensVal=0;  
int angle;        

void setup(){ 
  motor.attach(motorpin); 
  Serial.begin(9600);
}

void loop(){
  potensVal=analogRead(potens);
  Serial.print(potensVal);
  angle=map(potensVal,0,1023,0,179);
  Serial.println(angle);
  motor.write(angle);
  delay(15);
}

