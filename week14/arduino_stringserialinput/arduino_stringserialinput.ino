#include <Servo.h>
Servo x;
Servo y;
Servo z;

void setup() {
  // initialize serial:
  Serial.begin(9600);

  // attach servos
  x.attach(2);
  y.attach(3);
  z.attach(4);
}

void loop() {

  while (Serial.available() > 0) {

    // look for the next valid integer in the incoming serial stream:
    int thing1 = Serial.parseInt();
    // do it again:
    int thing2 = Serial.parseInt();
    // do it again:
    int thing3 = Serial.parseInt();

    // look for the newline. That's the end of your sentence:
    if (Serial.read() == '\n') {

      // great, lets move some servos
      x.write(thing1);
      y.write(thing2);
      z.write(thing3);

    }
  }
}
