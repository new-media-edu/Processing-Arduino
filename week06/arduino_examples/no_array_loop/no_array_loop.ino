// which digital pins are the LEDs on
int led1Pin = 5;
int led2Pin = 6;
int led3Pin = 7;
int led4Pin = 8;

void setup() {
  // sets up a digital pin to be used
  // as output, in this case to blink an LED
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(led3Pin, OUTPUT);
  pinMode(led4Pin, OUTPUT);
}

void loop() {

  // ledIndex determines which LED is ON at any moment
  for (int ledIndex = 5; ledIndex < 9; ledIndex++) {

    // used to turn EVERY LED off
    for (int i = 5; i < 9; i++) {
      digitalWrite(i, LOW);
    }

    digitalWrite(ledIndex, HIGH);

    delay(1111);
  }
}
