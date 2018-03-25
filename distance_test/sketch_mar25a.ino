long duration, cm;

void setup() {
  // put your setup code here, to run once:
  
  pinMode(3, OUTPUT);
  pinMode(4, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(3, LOW);
  delayMicroseconds(2);
  digitalWrite(3, HIGH);
  delayMicroseconds(10);
  digitalWrite(3, LOW);

  duration = pulseIn(4, HIGH);

  cm=duration/29/2;

  Serial.print(cm);
  Serial.println("CM");
  Serial.println();
  delay(500);
}
