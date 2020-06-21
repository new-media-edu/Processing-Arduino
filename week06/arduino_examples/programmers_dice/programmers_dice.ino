// create an array to store the digital pin
// info for 5 LEDs
int ledPin[] = {5, 6, 7, 8, 9};

void setup() {

  // enable serial (like a console)
  Serial.begin(9600);
  // hello world! print out serial
  Serial.println("Serial Ready");

  // generate a new random seed
  randomSeed(analogRead(3));

  // ...
  int rando = random(6);
  Serial.println(rando);

  // sets all LED pins to OUTPUT
  for (int i = 0; i < 5; i++) {
    pinMode(ledPin[i], OUTPUT);
  }

  // turn them all off
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin[i], LOW);
  }

  // turn ON as many as rando says
  for (int i = 0; i < rando; i++) {
    digitalWrite(ledPin[i], HIGH);
  }
}

void loop() {

}
