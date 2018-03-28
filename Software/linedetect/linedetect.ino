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



void setup() {
 Serial.begin (115200);
}

void loop() {
  Serial.println(analogRead(leftIR));
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


