const int soundSensor1 = A0; // connect sound sensor module to Arduino pin A0
const int soundSensor2 = A1; // connect sound sensor module to Arduino pin A1

void setup(){
  Serial.begin(9600); // Init Serial at 9600 Baud Rate.
  Serial.println("Serial Working"); // Test to check if serial is working or not
  pinMode(soundSensor1, INPUT); // sound Sensor1 pin INPUT
  pinMode(soundSensor2, INPUT); // sound Sensor2 pin INPUT
}

void loop(){
  int soundValue1 = analogRead(soundSensor1);
  int soundValue2 = analogRead(soundSensor2);
  Serial.print("Sound Sensor One: ");
  Serial.println(soundValue1);
  Serial.print("Sound Sensor Two: ");
  Serial.println(soundValue2);
  delay(1000);
}