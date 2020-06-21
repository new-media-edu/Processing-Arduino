// create an array to store the digital pin
// info for 5 LEDs
int ledPin[] = {5, 6, 7, 8, 9};
/*
   ledPin[0] = 5
   ledPin[1] = 6
   ...
*/
void setup() {
  // sets all LED pins to OUTPUT
  for (int i = 0; i < 5; i++) {
    pinMode(ledPin[i], OUTPUT);
  }
}

void loop() {
  // turn all LEDs on in sequence
  for (int i = 0; i < 5; i++) {

    // turn them all off
    for (int i = 0; i < 5; i++) {
      digitalWrite(ledPin[i], LOW);
    }

    digitalWrite(ledPin[i], HIGH);

    delay(100);
  }

  // turn all LEDs off in sequence
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin[i], LOW);

    delay(100);
  }


}







