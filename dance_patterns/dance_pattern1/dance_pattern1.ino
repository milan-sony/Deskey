#include <Servo.h>

// defining pins
int LeftservoPin = 9;
int RightservoPin = 10;

// creating servo objects
Servo Leftservo;
Servo Rightservo;

int angle = 0;  // servo position in degree

void setup() {
  Leftservo.attach(LeftservoPin);
  Rightservo.attach(RightservoPin);
  Serial.begin(9600);
}

void loop() {
  // left servo
  // scan back from 180 to 0 degree
  for(angle = 180; angle > 0; angle--) {
    Leftservo.write(angle);
    Serial.println(angle);
    // delay(15);
  }
  // scan from 0 to 180 degree
  for(angle = 0; angle < 180; angle++) {
    Leftservo.write(angle);
    Serial.println(angle);
    // delay(15);
  }

  // right servo
  // scan from 0 to 180 degree
  for(angle = 0; angle < 180; angle++) {
    Rightservo.write(angle);
    Serial.println(angle);
    // delay(15);
  }
  // scan back from 180 to 0 degree
  for(angle = 180; angle > 0; angle--) {
    Rightservo.write(angle);
    Serial.println(angle);
    // delay(15);
  }
}