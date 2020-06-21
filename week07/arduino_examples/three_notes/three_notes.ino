// produce three distinct sustained sounds
// by using three separate for loops

void setup() {
  pinMode(4, OUTPUT);
}

void loop() {

  // note one
  // delay by 2500 micro seconds between speaker cone pulses
  // and iterate 50 times. so if you think about it, each
  // for loop cycle will take 5000 microSeconds, and there are
  // 50 of them, totalling 250,000 microSeconds, or 250 milliseconds,
  // which is 1/4 of a second.
  for (int i = 0; i < 50; i++) {
    digitalWrite(4, HIGH);
    delayMicroseconds(2500);

    digitalWrite(4, LOW);
    delayMicroseconds(2500);
  }

  // note two
  // this one will last a little longer since the total loop
  // delay is 7000 microSeconds (3500+3500)
  for (int i = 0; i < 50; i++) {
    digitalWrite(4, HIGH);
    delayMicroseconds(3500);

    digitalWrite(4, LOW);
    delayMicroseconds(3500);
  }

  // note three
  // here we reduce the loop to 20 iterations to reduce how
  // long it lasts
  for (int i = 0; i < 20; i++) {
    digitalWrite(4, HIGH);
    delayMicroseconds(4500);

    digitalWrite(4, LOW);
    delayMicroseconds(4500);
  }
}
