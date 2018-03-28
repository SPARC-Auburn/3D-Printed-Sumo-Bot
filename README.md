# 3D-Printed-Sumo-Bot

An initial development of a cheap 3D printed sumo robot to serve as a base design for a maker training course.

## Topics to be Taught Through Project

* Robotics and Interdiscplinary Engineering Design
* SolidWorks 3D Design
* 3D Printing
* Arduino Robotics Integration
* Electrical Prototyping and Soldering
* C Programming
* Sensor Management

## General Requirements of Project

* Total cost per bot: <= $50
* Shall be capable of being built in one semester with <= 4 hours spent per week
* Shall be capable of staying within a white ring on a black surface unopposed
* Shall be capable of searching for opponent bot

## Technical Requirements of Project

* 3D printed robot base with light color for high light reflectivity for IR
* Front wedge/plate
* 4 x AA Batteries w/ battery holder
* 2 x 3D printed robot wheels/sled
* 2 x servo mounted wheels
* 2 continuous rotating servo motors
* 1 cheap Arduino based microcontroller (Trinket, Teensy, Nano, Metro, Mini, clone etc.)
* 1 forward facing distance sensor (ultrasonic or IR)
* 2 downward facing line detection sensors
* 1 pushbutton for start button (provided by SPARC inventory)

## Parts List

The following are a list of parts that could be used to construct the sumo bot.  The prices are approximated per robot.

* $4 Arduino Nano Clone: [Longruner Mini Nano V3.0 ATmega328P 5V](https://www.amazon.com/dp/B01MSYWE6B/ref=sspa_dk_detail_2?pd_rd_i=B01MSYWE6B&pd_rd_wg=x0yTE&pd_rd_r=DXKK6VB2KWG6WEH9P1KZ&pd_rd_w=VJF74&th=1)
* $15 Continous Rotating Servo w/ wheels: [2 Pack FS90R 20.86oz Continuous Rotation Micro Servo Arduino with wheels](https://www.amazon.com/20-86oz-Continuous-Rotation-Arduino-set-point/dp/B01MSVCVVN/ref=sr_1_3?ie=UTF8&qid=1514833995&sr=8-3&keywords=continuous+rotation+servo)
* ~$2 Light Blue PLA or ABS
* $3 Ultrasonic Sensor: [Elegoo HC-SR04 Ultrasonic Module Distance Sensor](https://www.amazon.com/Elegoo-HC-SR04-Ultrasonic-Distance-MEGA2560/dp/B01COSN7O6/ref=sr_1_3?ie=UTF8&qid=1514834558&sr=8-3&keywords=ultrasonic+sensors)
* $6 2 x line Sensors: [SPARKFUN REDBOT SENSOR - LINE FO](https://www.digikey.com/product-detail/en/sparkfun-electronics/SEN-11769/1568-1556-ND/5768367)
* $3 4 AA Battery holder: [LAMPVPATH 3 Pcs 4 x 1.5V (6V) AA Battery Holder](https://www.amazon.com/LAMPVPATH-Battery-Connector-Plastic-Housing/dp/B01M7QUJ4J/ref=sr_1_3?s=electronics&ie=UTF8&qid=1514835351&sr=1-3&keywords=4+AA+battery+holder)
* $3 Wires: [Elegoo 120pcs Multicolored Dupont Wire](https://www.amazon.com/Elegoo-120pcs-Multicolored-Breadboard-arduino/dp/B01EV70C78/ref=sr_1_2_sspa?ie=UTF8&qid=1514837287&sr=8-2-spons&keywords=breadboard+wires&psc=1)
* $4 Perma-Protoboard: [Adafruit Perma-Proto Half-sized Breadboard PCB](https://www.amazon.com/Adafruit-Perma-Proto-Half-sized-Breadboard-PCB/dp/B00SK8QR8S/ref=sr_1_1?s=electronics&ie=UTF8&qid=1516580453&sr=1-1&keywords=adafruit+perma+proto)

~ Total: $46

## Arduino Pin Assignments

* Ultrasonic
  * Echo: D2
  * Trigger: D3
* Servos
  * Left: D10
  * Right: D9
* Line Following Sensor
  * Left: A7
  * Right: A6