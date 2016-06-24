int del = 1;
void setup() {
  pinMode(A0, INPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  del = analogRead(A0);
  Serial.println(del*4);
  myfunc (4000+del*4, 4000+del*4, 10);
  for (int i = 0; i<3; i++){
    myfunc (500+del*4, 300+del*4, 11);
  }
  myfunc (4000+del*4, 4000+del*4, 12);
  for (int i = 0; i<3; i++){
    myfunc (500+del*4, 300+del*4, 11);
  }
}

void myfunc (int on, int off, int pin){
  digitalWrite(pin, HIGH);
  delay (off+del*4);
  digitalWrite(pin, LOW);
  delay (on+del*4);  
 }
