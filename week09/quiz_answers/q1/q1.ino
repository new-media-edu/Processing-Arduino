/*
 * Create a sketch with four LEDs. 
 * When you reset the Arduino, two 
 * of the four lights should turn on, 
 * and it should be truly random (or at 
 * least as random as we discussed). 
 * <EC: Print out the pin #s of the LEDs that are on.>
 */

int leds[] = {4,5,6,7};

void setup() {
  // set up LEDs for OUTPUT
  for(int i = 0; i < 4; i++) {
    pinMode(leds[i], OUTPUT);
  }

  // "true" random
  randomSeed(analogRead(0));

  // 6 possibilities, so...
  int rando = random(6);

  // first possibility, left most LEDs are on
  if(rando == 0) {
    digitalWrite(leds[0], HIGH);
    digitalWrite(leds[1], HIGH);
  }

  // second possibility...
  if(rando == 1) {
    digitalWrite(leds[0], HIGH);
    digitalWrite(leds[2], HIGH);
  }

  if(rando == 2) {
    digitalWrite(leds[0], HIGH);
    digitalWrite(leds[3], HIGH);
  }

  if(rando == 3) {
    digitalWrite(leds[0], HIGH);
    digitalWrite(leds[2], HIGH);
  }

  if(rando == 4) {
    digitalWrite(leds[1], HIGH);
    digitalWrite(leds[2], HIGH);
  }
  
  if(rando == 5) {
    digitalWrite(leds[1], HIGH);
    digitalWrite(leds[3], HIGH);
  }

  if(rando == 6) {
    digitalWrite(leds[2], HIGH);
    digitalWrite(leds[3], HIGH);
  }
  
}

// forget about loop
void loop() {}
