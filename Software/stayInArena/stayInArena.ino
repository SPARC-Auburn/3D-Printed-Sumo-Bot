#include <Servo.h>
Servo leftServo;  // create servo object to control a servo
Servo rightServo;  // create servo object to control a servo

// ---- Pin Assignments ----
#define echoPin 2 // Echo Pin
#define trigPin 3 // Trigger Pin
#define LEDPin 13 // Onboard LED
#define leftServoPin 10 // Left Servo
#define rightServoPin 9 // Right Servo
#define leftIR A7
#define rightIR A6

int leftIRValue = 1000;
int rightIRValue = 1000;
int threshold = 500;

void setup() {
 Serial.begin (115200);
 leftServo.attach(10); 
 leftServo.write(90);
 rightServo.attach(9);  
 rightServo.write(90);
 
}

void loop() {
  goUntilLine();
  goStraight(-90);
  delay(500);
  turnRight(90);
  delay(500); 
  stopServos();  
}

void goUntilLine(){
 goStraight(20);
 while(leftIRValue > threshold && rightIRValue > threshold){
  leftIRValue = analogRead(leftIR);
  rightIRValue = analogRead(rightIR);
  Serial.print("Left = ");
  Serial.print(leftIRValue);
  Serial.print(" Right = ");
  Serial.print(rightIRValue);
  Serial.print("\n");
 }
 leftIRValue = 1000;
 rightIRValue = 1000;
 stopServos();
}
void goStraight(int motorSpeed){
  leftServo.write(90+motorSpeed);
  rightServo.write(90-motorSpeed);
}
void turnRight(int motorSpeed){
  leftServo.write(90+motorSpeed);
  rightServo.write(90+motorSpeed);
}
void turnLeft(int motorSpeed){
  leftServo.write(90-motorSpeed);
  rightServo.write(90-motorSpeed);
}
void stopServos(){
  leftServo.write(90);
  rightServo.write(90);
}


