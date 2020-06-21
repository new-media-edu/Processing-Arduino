// produce simple sounds out of a speaker
// by setting up the pin just like an LED but
// using higher frequencies (smaller delay values)

void setup() {
  pinMode(4, OUTPUT);
}

void loop() {

  // we use delayMicroseconds instead of delay so that we have
  // more control. delay(1) and delayMicroseconds (1000) are equivalent
  // try changing the delayMicroseconds value (for both) and see what happens.
  // make sure your speaker is connected to ground and pin 4.
  digitalWrite(4, HIGH);
  delayMicroseconds(2500);

  digitalWrite(4, LOW);
  delayMicroseconds(2500);

}
