/*
   Create a sketch with four LEDs.
   When you reset the Arduino, two
   of the four lights should turn on,
   and it should be truly random (or at
   least as random as we discussed).
   <EC: Print out the pin #s of the LEDs that are on.>
*/

int leds[] = {4, 5, 6, 7};

void setup() {
  // set up LEDs for OUTPUT
  for (int i = 0; i < 4; i++) {
    pinMode(leds[i], OUTPUT);
  }

  // "true" random
  randomSeed(analogRead(0));

  // between pins 4 and 7
  int r1 = random(4, 7);
  int r2 = random(4, 7);

  // turn on first LED
  digitalWrite(r1, HIGH);

  // while r1 and r2 are the same...
  while (r1 == r2) {
    // re roll
    r2 = random(4, 7);
  }

  // turn on LED 2
  digitalWrite(r2, HIGH);

  // print out which LEDs turned on
  Serial.begin(9600);
  Serial.print(r1);
  Serial.print(", ");
  Serial.println(r2);
}

// forget about loop
void loop() {}
