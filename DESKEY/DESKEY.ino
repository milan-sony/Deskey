// libraries
#include <Servo.h> // servo motor library
// oled
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// pin outs //  variables
// IR sensor
int IRSensorHead = 2; // connect head IR sensor module to Arduino pin D2
int IRSensorLeft = 8; // connect left IR sensor module to Arduino pin D8
int IRSensorRight = 4; // connect right IR sensor module to Arduino pin D4

// servo motor
int LeftservoPin = 5; // left servo
int RightservoPin = 6; // right servo
// int BodyservoPin = 7; // body servo

int angle = 0;  // servo position in degree

// creating servo objects
Servo Leftservo;
Servo Rightservo;
// Servo Bodyservo;

void setup(){
  Serial.begin(9600); // init serial at 9600 Baud Rate.
  Serial.println("Serial Working"); // Test to check if serial is working or not

  pinMode(IRSensorHead, INPUT); // head IR Sensor pin INPUT
  pinMode(IRSensorLeft, INPUT); // left IR Sensor pin INPUT
  pinMode(IRSensorRight, INPUT); // right IR Sensor pin INPUT

  Leftservo.attach(LeftservoPin);
  Rightservo.attach(RightservoPin);
  // Bodyservo.attach(BodyservoPin);
}

void leftArm(){
  // move servo to 90 degree
  Leftservo.write(90);
  Serial.println("Servo Arm Set to 90 Degree");
  delay(100);
  
  // move the servos to 180 degree
  Leftservo.write(0);
  Serial.println("Servo Arm Set to 0 Degree");
  delay(100);

  // move servo to 90 degree
  Leftservo.write(90);
  delay(100);
  Serial.println("Servo Arm Set to 90 Degree");
}

void rightArm(){
  // move servo to 90 degree
  Rightservo.write(90);
  Serial.println("Servo Arm Set to 90 Degree");
  delay(100);
  
  // move the servos to 180 degree
  Rightservo.write(180);
  Serial.println("Servo Arm Set to 180 Degree");
  delay(100);

  // move servo to 90 degree
  Rightservo.write(90);
  delay(100);
  Serial.println("Servo Arm Set to 90 Degree");
}


void loop(){
  int IRHeadsensorStatus = digitalRead(IRSensorHead);
  int IRLeftsensorStatus = digitalRead(IRSensorLeft);
  int IRRightsensorStatus = digitalRead(IRSensorRight); 
  if (IRRightsensorStatus == 0) // check if the pin is high or not
  {
    // delay(1000);
    Serial.println("Motion Detected on Right");
    rightArm();
  }
  else if(IRLeftsensorStatus == 0)  {
    Serial.println("Motion Detected on Left");
    leftArm();
  }
  else if(IRHeadsensorStatus == 0){
    Serial.println("Motion Detected on Head");
  }
  else{
    Serial.println("No Motion Detected");
  }
}