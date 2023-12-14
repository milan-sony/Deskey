const int buzzerPin = 10; //buzzer to arduino pin 9
const int delayTime = 10;

void setup(){
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT); // Set buzzer - pin 9 as an output
}

void loop(){
  // Rising and falling tones
//  Serial.println("High Tone");
//  for(int i=200; i<1000; i++){
//    tone(buzzerPin, i);
//    delay(10);
//  }
//  Serial.println("Low Tone");
//  for (int i = 1000; i > 200; i--){
//    tone(buzzerPin, i);
//    delay(10);
//  }   
//  delay(1000);  


  Serial.println("HIGH to LOW");
  tone(buzzerPin, 1000);
  delay(delayTime);
  tone(buzzerPin, 500);
  delay(delayTime);
  tone(buzzerPin, 250);
  delay(delayTime);
  tone(buzzerPin, 125);
  delay(delayTime);
  tone(buzzerPin, 62);
  delay(delayTime);
  tone(buzzerPin, 31);
  delay(delayTime);
  tone(buzzerPin, 15);
  delay(delayTime);
  tone(buzzerPin, 7);
  delay(delayTime);
  tone(buzzerPin, 3);
  delay(delayTime);
  tone(buzzerPin, 1);
  delay(delayTime);
  tone(buzzerPin, 0);
  delay(delayTime);
  Serial.println("LOW to HIGH");
  tone(buzzerPin, 0);
  delay(delayTime);
  tone(buzzerPin, 1);
  delay(delayTime);
  tone(buzzerPin, 3);
  delay(delayTime);
  tone(buzzerPin, 7);
  delay(delayTime);
  tone(buzzerPin, 15);
  delay(delayTime);
  tone(buzzerPin, 31);
  delay(delayTime);
  tone(buzzerPin, 62);
  delay(delayTime);
  tone(buzzerPin, 125);
  delay(delayTime);
  tone(buzzerPin, 250);
  delay(delayTime);
  tone(buzzerPin, 500);
  delay(delayTime);
  tone(buzzerPin, 1000);
  delay(delayTime);
}
