// i = i - 100
// i %= 100

int speakerPin = 8;

void setup() {
  pinMode(speakerPin, OUTPUT);

}

void loop() {

  int d = analogRead(0);
  d = map(d, 0, 1023, 100, 1000);

  for (int i = 100; i < d; i += 10) {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(i);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(i);
  }
}
