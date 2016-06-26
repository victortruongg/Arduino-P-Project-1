#include <Servo.h>
Servo myServo;
int const potPin = A0;
int angle;
int potVal;

void setup() {
  // put your setup code here, to run once:
 for(int pinNumber=2; pinNumber < 6; pinNumber++){
  pinMode(pinNumber, INPUT);
 }
myServo.attach(9);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  myServo.write(150);
  while (digitalRead(4) == LOW){
  }
  while (digitalRead(3) == LOW){
  }
  while (digitalRead(5) == LOW){
  }
  while (digitalRead(2) == LOW){
  }
  while (digitalRead(3) == LOW){    
 potVal = analogRead(potPin);
 Serial.print("PotVal = ");
 Serial.print(potVal);
 angle = map(potVal, 0, 1023, 0, 180);
 Serial.print(", Angle = ");
 Serial.println(angle);
 myServo.write(angle);
 delay (15);
  }
 }
