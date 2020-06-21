void setup() {
  // make console available
  // (hit the magnifying glass top right)
  Serial.begin(9600);

  // start random seed from static electricity
  randomSeed(analogRead(0));
}

void loop() {
  // roll the dice
  int rando = random(6);
  // print result
  Serial.println(rando);
  // delay
  delay(500);
}
