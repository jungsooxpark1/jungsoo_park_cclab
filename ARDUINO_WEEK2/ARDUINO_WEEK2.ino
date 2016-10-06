int ledPin = 9;
int tempPin = A0;
int maxTemp = 65;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
}

void loop() {
  int sVal = analogRead(tempPin);
  float fVoltage = sVal*5.0/1024;

  Serial.print("Temperature: ");
  Serial.println(sVal);
  
  if(sVal > maxTemp) {
    digitalWrite(ledPin, HIGH);
  
}
  if(sVal < maxTemp) {
    digitalWrite(ledPin, LOW);
  
}
}
