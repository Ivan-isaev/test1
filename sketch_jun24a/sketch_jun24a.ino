void setup() {
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);// put your setup code here, to run once:

}


  void loop() {
  
     light (1000, 1500, 11);
 
    for (int i = 0; i<3; i++){
     light (500, 500, 12);
   }
     light (1000, 1500, 13);
  }
void light (int on, int off, int pin){
   digitalWrite(pin, HIGH);
   delay (on);
   digitalWrite(pin, LOW);
   delay (off);  
   }
   

