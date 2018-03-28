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

// ---- Ultrasonic Constants ----
int maximumRange = 200; // Maximum range needed
int minimumRange = 0; // Minimum range needed
long duration; // Duration used to calculate distance
long distance = 9999;
long previousDistance = 9999;
long arenaBounds = 50;

void setup() {
 Serial.begin (115200);
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 pinMode(LEDPin, OUTPUT); // Use LED indicator (if required)
 leftServo.attach(10); 
 leftServo.write(90);
 rightServo.attach(9);  
 rightServo.write(90);
 turnRight(10);
 while (!((distance <= arenaBounds)&&(previousDistance <= arenaBounds))){
  distance = getDistance();
  Serial.println(distance,DEC);
  previousDistance = distance;  
 }
 Serial.println("Target Acquired");
 delay(15);
 stopServos();
 delay(500);
 goStraight(20);
 while (distance > 3){
  distance = getDistance();
  Serial.println(distance,DEC);
 }
 stopServos();
 Serial.println("Mission Complete");
}

void loop() {
  
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
long getDistance(){
     /* The following trigPin/echoPin cycle is used to determine the
   distance of the nearest object by bouncing soundwaves off of it. */ 
   digitalWrite(trigPin, LOW); 
   delayMicroseconds(2);   
   digitalWrite(trigPin, HIGH);
   delayMicroseconds(10);   
   digitalWrite(trigPin, LOW);
   duration = pulseIn(echoPin, HIGH);   
   //Calculate the distance (in cm) based on the speed of sound.
   delay(50);
   long dist = duration/58.2;
   if (dist < 0){
    dist = 9999;
   }
   return dist;
}

