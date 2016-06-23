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
  digitalWrite(10, HIGH);
  delay (4000+del*4*4);
  digitalWrite(10, LOW);
  myfunc (del);
  digitalWrite(12, HIGH);
  delay (4000+del*4);
  digitalWrite(12, LOW);
  myfunc (del*4);
}

void myfunc (int del){
  digitalWrite(11, HIGH);
  delay (500+del*4);
  digitalWrite(11, LOW);
  delay (300+del*4);  
  digitalWrite(11, HIGH);
  delay (500+del*4);
  digitalWrite(11, LOW);
  delay (300+del*4);
  digitalWrite(11, HIGH);
  delay (500+del*4);
  digitalWrite(11, LOW);
 }
