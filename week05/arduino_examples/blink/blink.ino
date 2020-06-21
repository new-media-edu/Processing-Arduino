// variable to make blinking slow
// down over time
int blinkDelay = 0;

void setup() {
  // sets up a digital pin to be used
  // as output, in this case to blink an LED
  pinMode(8, OUTPUT);
}

void loop() {
  // increase the delay
  blinkDelay += 10;
  
  // turns the LED on
  digitalWrite(8, HIGH);

  delay(blinkDelay);  // wait one second

  // turns the LED off
  digitalWrite(8, LOW);

  delay(blinkDelay);  // wait one second
}
