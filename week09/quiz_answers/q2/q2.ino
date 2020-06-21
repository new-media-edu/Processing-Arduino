/* Create a sketch with a potentiometer and
  a speaker. The speaker should "beep"
  (not pop) and the potentiometer should control
  the amount of time between beeps. Use the function
  we discussed in class to make the range of time
  between beeps to be 50ms and 500ms.
*/
int speakerPin = 10;

void setup() {
  pinMode(speakerPin, OUTPUT);
}

void loop() {

  int potVal = analogRead(0);
  int mappedVal = map(potVal, 0, 1023, 50, 500);

  for (int i = 0; i < 2; i++ ) {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(5000);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(5000);
  }

  delay(mappedVal);

}
