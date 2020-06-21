
int speakerPin = 8;

void setup() {
  pinMode(speakerPin, OUTPUT);
  
}

void loop() {

  for(int i = 10000; i > 1000; i -= 60) {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(i);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(i);
  }
}
