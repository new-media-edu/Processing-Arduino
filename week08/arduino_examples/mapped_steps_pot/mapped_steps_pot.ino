void setup() {
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(0);
  int mappedVal = map(val, 0, 1023, 1, 10);

  mappedVal *= 1000;

  digitalWrite(8, HIGH);
  delayMicroseconds(mappedVal);
  digitalWrite(8, LOW);
  delayMicroseconds(mappedVal);

//  Serial.print(mappedVal);
//  Serial.print(", ");
//  Serial.println(val);
//
//  delay(20);
}
