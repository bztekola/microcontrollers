int switchState = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {//the button is not pressed
  // put your main code here, to run repeatedly:
  switchState = digitalRead(2);
  if (switchState == LOW){
    digitalWrite(3, HIGH); //green LED
    digitalWrite(4, LOW); //red LED
    digitalWrite(5, LOW); //red LED
  }
  else{ //the button is pressed
   delay(250);
   digitalWrite(3, LOW);
   digitalWrite(4, HIGH);
   digitalWrite(5, LOW);
   delay(250);
   digitalWrite(5, HIGH);
   digitalWrite(4, LOW);
   delay(500);
    
  }
}
