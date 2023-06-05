int trigPin=11;
int echoPin=10;
int data = 00000000;
void setup() {
  // put your setup code here, to run once:
 pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
  Serial.begin(9600); // // Serial Communication is starting with 9600 of baudrate speed
  pinMode(8, OUTPUT);
}

void loop() {
 // Clears the trigPin condition
  digitalWrite(trigPin, LOW);
  delay(1000);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  int duration = pulseIn(echoPin, HIGH);
  // Calculating the distance 
  int distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor
  if(Serial.available() && Serial.readString().toInt() >3)
  {
    digitalWrite(8,HIGH);
    delay(150);
    digitalWrite(8,LOW);
    
  }
 if(distance< 50)
 {
   //digitalWrite(8,HIGH);
   Serial.print(3);
 }
 else{
  //digitalWrite);
  Serial.print(1);
 }
}
