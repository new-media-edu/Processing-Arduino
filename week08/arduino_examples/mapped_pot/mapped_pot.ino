void setup() {
  pinMode(8, OUTPUT);

  // ALWAYS REMEMBER TO BEGIN SERIAL
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(0);

  // map takes 5 arguments:
  // the value you want to map,
  // input minimum
  // input maximum
  // output minimum
  // output maximum
  int mappedVal = map(val, 0, 1023, 5000, 15000);

  // make sounds!
  digitalWrite(8, HIGH);
  delayMicroseconds(mappedVal);
  digitalWrite(8, LOW);
  delayMicroseconds(mappedVal);

  // print out useful diagnostic information
  // but remember to comment it out when you
  // play the sketch for real, otherwise it
  // messes up the sound by adding additional
  // delay!
  Serial.print(mappedVal);
  Serial.print(", ");
  Serial.println(val);
  delay(20);
}
