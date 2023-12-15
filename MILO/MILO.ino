// libraries
#include <Servo.h> // servo motor library

// pin outs //  variables
// IR sensor
int IRSensorHead = 2; // connect head IR sensor module to Arduino pin D2
int IRSensorLeft = 3; // connect left IR sensor module to Arduino pin D3
int IRSensorRight = 4; // connect right IR sensor module to Arduino pin D4

// servo motor
int LeftservoPin = 5; // left servo
int RightservoPin = 6; // right servo
int BodyservoPin = 7; // body servo

int angle = 0;  // servo position in degree

// creating servo objects
Servo Leftservo;
Servo Rightservo;
Servo Bodyservo;

void setup(){
  Serial.begin(9600); // init serial at 9600 Baud Rate.
  Serial.println("Serial Working"); // Test to check if serial is working or not

  pinMode(IRSensorHead, INPUT); // head IR Sensor pin INPUT
  pinMode(IRSensorLeft, INPUT); // left IR Sensor pin INPUT
  pinMode(IRSensorRight, INPUT); // right IR Sensor pin INPUT

  Leftservo.attach(LeftservoPin);
  Rightservo.attach(RightservoPin);
  Bodyservo.attach(BodyservoPin);
}

// left arm
void leftArm(){
  // scan from 0 to 180 degree
  Serial.println("Left Arm");
  Serial.println("Left Arm turning from 0° to 180°");
  for(angle = 0; angle < 180; angle++) {
    Leftservo.write(angle);
    Serial.println(angle);
    delay(15);
  }
  
  // scan back from 180 to 0 degree
  Serial.println("Left Arm turning back from 180° to 0°");
  for(angle = 180; angle > 0; angle--) {
    Leftservo.write(angle);
    Serial.println(angle);
    delay(15);
  }
}

// right arm
void rightArm(){
  // scan from 0 to 180 degree
  Serial.println("Right Arm turning from 0° to 180°");
  for(angle = 0; angle < 180; angle++) {
    Rightservo.write(angle);
    Serial.println(angle);
    delay(15);
  }
  
  // scan back from 180 to 0 degree
  Serial.println("Right arm turning back from 180° to 0°");
  for(angle = 180; angle > 0; angle--) {
    Rightservo.write(angle);
    Serial.println(angle);
    delay(15);
  }
}
void loop(){
  int IRHeadsensorStatus = digitalRead(IRSensorHead);
  int IRLeftsensorStatus = digitalRead(IRSensorLeft);
  int IRRightsensorStatus = digitalRead(IRSensorRight); 
  if (IRLeftsensorStatus == 1) // check if the pin is high or not
  {
    Serial.println("Motion Detected on Left");
    // leftArm();
  }
  else if(IRRightsensorStatus == 1)  {
    Serial.println("Motion Detected on Right");
    // rightArm();y
  }
  else if(IRHeadsensorStatus == 1){
    Serial.println("Motion Detected on Head");
  }
  else{
    Serial.println("No Motion Detected");
  }
}