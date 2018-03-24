int switchPin = 8;
int ledPin = 13;
boolean lastState = LOW;
boolean ledOn = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(switchPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(switchPin) == HIGH && lastState == LOW) {
      ledOn = !ledOn;
      lastState = HIGH;
    }
  else {
      lastState = digitalRead(switchPin);
    }
  digitalWrite(ledPin, ledOn);
}
