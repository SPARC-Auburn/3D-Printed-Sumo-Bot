/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo leftServo;  // create servo object to control a servo
Servo rightServo;  // create servo object to control a servo

void setup() {
  leftServo.attach(10);  // attaches the servo on pin 9 to the servo object
  leftServo.write(90);
  rightServo.attach(9);  // attaches the servo on pin 9 to the servo object
  rightServo.write(90);
}

void loop() {
  testLeft();
//  goForward();
//  delay(1000);
//  stopServos();
//  delay(100);
//  goRight();
//  delay(500);
//  stopServos();
//  delay(100);
//  goForward();
//  delay(1000);
//  stopServos();
//  delay(100);
//  goBackward();
//  delay(1000);
//  stopServos();
//  delay(100);
//  goLeft();
//  delay(500);
//  stopServos();
//  delay(100);
//  goBackward();
//  delay(1000);
//  stopServos();
//  delay(100);
}

void testLeft(){
  leftServo.write(180);
  rightServo.write(90);
}

void testRight(){
  leftServo.write(90);
  rightServo.write(0);
}

void goForward(){
  leftServo.write(0);
  rightServo.write(180);
}

void goBackward(){
  leftServo.write(180);
  rightServo.write(0);
}

void goLeft(){
  leftServo.write(180);
  rightServo.write(180);
}

void goRight(){
  leftServo.write(0);
  rightServo.write(0);
}


void stopServos(){
  leftServo.write(90);
  rightServo.write(90);
}

