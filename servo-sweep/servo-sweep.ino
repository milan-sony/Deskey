#include <Servo.h>

int servoPin = 9;
Servo servo;
int angle = 0;  // servo position in degree

void setup() {
  servo.attach(servoPin);
  Serial.begin(9600);
}

void loop() {
  // scan from 0 to 180 degree
  Serial.println("Servo turning from 0° to 180°");
  delay(1000);
  for(angle = 0; angle < 180; angle++) {
    servo.write(angle);
    Serial.println(angle);
    delay(15);
  }
  
  // scan back from 180 to 0 degree
  Serial.println("Servo turning back from 180° to 0°");
  delay(1000);
  for(angle = 180; angle > 0; angle--) {
    servo.write(angle);
    Serial.println(angle);
    delay(15);
  }
}