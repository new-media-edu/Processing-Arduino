int ledPin[] = {3, 4, 5, 6, 7};
/*
   ledPin[0] = 3
   ledPin[4] = 7
*/
void setup() {
  // true(er) random
  randomSeed(analogRead(0));
  
  // set all for LED output
  for (int i = 0; i < 5; i++) {
    pinMode(ledPin[i], OUTPUT);
  }
}

void loop() {
  // loops thru and sets all LEDs to off
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin[i], LOW);
  }

  int rando = random(5);  // gives 0 -> 4

  digitalWrite(rando, HIGH);

  delay(1000);

}






