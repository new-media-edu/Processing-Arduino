int leds[] = {4,5,6,7}; // what pins?

void setup() {
  // set up all LEDs to OUTPUT
  for(int i = 0; i < 4; i++) {
    pinMode(leds[i], OUTPUT);
  }

  Serial.begin(9600);
}

void loop() {
  // read Analog pin 0 to val
  // 0 -> 1023
  int val = analogRead(0);

  // we want values from 0 to 4
  int mappedVal = map(val, 0, 1023, 0, 4);

  // turn them all of
  for(int i = 0; i < 4; i++) {
    digitalWrite(leds[i], LOW);
  }

  // turn on as many LEDs as mappedVal
  for(int i = 0; i < mappedVal; i++) {
    digitalWrite(leds[i], HIGH);
  }
}
