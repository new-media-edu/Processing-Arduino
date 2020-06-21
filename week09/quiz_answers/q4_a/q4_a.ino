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

  if(mappedVal == 0) {
    digitalWrite(leds[0], LOW);
    digitalWrite(leds[1], LOW);
    digitalWrite(leds[2], LOW);
    digitalWrite(leds[3], LOW);
  }

  if(mappedVal == 1) {
    digitalWrite(leds[0], HIGH);
    digitalWrite(leds[1], LOW);
    digitalWrite(leds[2], LOW);
    digitalWrite(leds[3], LOW);
  }

  if(mappedVal == 2) {
    digitalWrite(leds[0], HIGH);
    digitalWrite(leds[1], HIGH);
    digitalWrite(leds[2], LOW);
    digitalWrite(leds[3], LOW);
  }

  if(mappedVal == 3) {
    digitalWrite(leds[0], HIGH);
    digitalWrite(leds[1], HIGH);
    digitalWrite(leds[2], HIGH);
    digitalWrite(leds[3], LOW);
  }

  if(mappedVal == 4) {
    digitalWrite(leds[0], HIGH);
    digitalWrite(leds[1], HIGH);
    digitalWrite(leds[2], HIGH);
    digitalWrite(leds[3], HIGH);
  }

  Serial.println(mappedVal);
}
