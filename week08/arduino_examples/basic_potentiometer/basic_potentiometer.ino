void setup() {
  // dont need to establish pinMode
  // when using analog pins

  // console logging
  Serial.begin(9600);

  pinMode(8, OUTPUT); // set up speaker pin
}

void loop() {
  // query the analog pin 0 for values
  // that run from 0 to 1023 or
  // 0 to 5volts
  int val = analogRead(0);
  int mappedVal = map(val, 0, 1023, 10000, 30000);

//  digitalWrite(8, HIGH);
//  delayMicroseconds(val+1);
//  digitalWrite(8, LOW);
//  delayMicroseconds(val+1);

  Serial.println(mappedVal + ", " + val);

  delay(20);
}








