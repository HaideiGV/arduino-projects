#include <Servo.h>

Servo servo1;

void setup() {
  // put your setup code here, to run once:
  servo1.attach(5);

}

void loop() {
  // put your main code here, to run repeatedly:
  int potent = analogRead(5);
  potent = map(potent, 0, 1024, 0, 180);
  servo1.write(potent);
  delay(2);
}
