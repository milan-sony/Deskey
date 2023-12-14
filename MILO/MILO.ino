int IRSensorHead = 2; // connect head IR sensor module to Arduino pin D2
int IRSensorLeft = 3; // connect left IR sensor module to Arduino pin D3
int IRSensorRight= 4; // connect right IR sensor module to Arduino pin D4
// int LED = 13; // connect LED to Arduino pin 13

void setup(){
  Serial.begin(9600); // Init Serial at 9600 Baud Rate.
  Serial.println("Serial Working"); // Test to check if serial is working or not
  pinMode(IRSensorHead, INPUT); // head IR Sensor pin INPUT
  pinMode(IRSensorLeft, INPUT); // left IR Sensor pin INPUT
  pinMode(IRSensorRight, INPUT); // right IR Sensor pin INPUT
  pinMode(LED, OUTPUT); // LED Pin Output
}

void loop(){
  int IRHeadsensorStatus = digitalRead(IRSensorHead);
  int IRLeftsensorStatus = digitalRead(IRSensorLeft);
  int IRRightsensorStatus = digitalRead(IRSensorRight); 
  if (IRRightsensorStatus == 1) // Check if the pin is high or not
  {
    Serial.println("Motion Detected on Right");
  }
  else if(IRLeftsensorStatus == 1)  {
    Serial.println("Motion Detected on Left");
  }
  else if(IRHeadsensorStatus == 1){
    Serial.println("Motion Detected on Head");
  }
  else{
    Serial.println("No Motion Detected");
  }
}