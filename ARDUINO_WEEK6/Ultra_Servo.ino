#include<Servo.h>

Servo myServo;
int trigPin = 2;
int echoPin = 3;
int servoPin = 9;
int val = 0;
int angle = 0;


void setup() {
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  myServo.attach(servoPin);
  Serial.begin(9600);
}

void loop() {

//    val = analogRead(analogPin);
    angle = map(val, 0, 155, 0, 179);
    myServo.write(angle);
    Serial.print(" angle : ");
    Serial.println(angle);
  
  long duration, cm;

  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  duration = pulseIn(echoPin,HIGH);
  cm = microsecondsToCentimeters(duration);
  Serial.print(" Distance : ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();

//myServo.write(cm/2);

  if(cm > 8){
    myServo.write(0);
  } else {
     myServo.write(180);
  }

  delay(500);
}

long microsecondsToCentimeters(long microseconds) {
  return microseconds / 29 / 2;
}

