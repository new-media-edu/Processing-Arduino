// keep track of the previous values,
// this enables you to "smooth" values between
// incoming and previous values
int previous = 0;

void setup() {
  Serial.begin(9600); // for our eyes
}

void loop() {
  // what's the current pot val?
  int incoming = analogRead(5);

  //Serial.println(incoming);

  // smooth it out!
  int smoothed = (incoming * .1) + (previous * .9);

  // update the previous value so smoothing works!
  previous = smoothed;

  Serial.println(smoothed); // for our eyes

  delay(10);
}
