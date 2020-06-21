// which digital pins are the LEDs on
int ledPin[] = {5, 6, 7, 8, 9};

void setup() {

  // set all LED pins to output mode
  for (int i = 0; i < 5; i++) {
    pinMode(ledPin[i], OUTPUT);
  }

}

void loop() {

  // turn all LEDs off
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin[i], LOW);
  }

   for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin[i], HIGH);
    delay(1000);
  }

}
