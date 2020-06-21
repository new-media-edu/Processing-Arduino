void setup() {
  // sets up a digital pin to be used
  // as output, in this case to blink an LED
  pinMode(8, OUTPUT);
}

void loop() {

  for (int i = 0; i < 200; i += 10) {
    // turns the LED on
    digitalWrite(8, HIGH);

    delay(i);  // wait one second

    // turns the LED off
    digitalWrite(8, LOW);

    delay(i);  // wait one second

  }
}
