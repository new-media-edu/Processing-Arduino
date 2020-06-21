/*
 * Create an "alarm" type sound with a pause between sounds. The speaker 
 * pin should be assigned to a variable.
 * 
 */

int speakerPin = 4;

void setup() {
  pinMode(speakerPin, OUTPUT);
}

void loop() {

  for(int i = 5000; i > 1000; i -= 20) {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(i);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(i);
  }

  // additional pause after each alarm ramp sound
  delay(100);

}
