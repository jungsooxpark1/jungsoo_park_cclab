#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int potpin = 0;  // analog pin used to connect the potentiometer
int pos = 0;

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  for(pos = 0; pos < 180; pos +=1)
  {
    myservo.write(pos);                  // sets the servo position according to the scaled value
    delay(15);     
  }
}
