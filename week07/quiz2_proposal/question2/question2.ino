/*
 * Create a program that blinks two separate LEDs. 
 * When one LED is on, the other is off.
 * Both LEDs should have variables assigned to the pins they use
 * 
 */

int led1 = 6;
int led2 = 8;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {

    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delayMicroseconds(500);
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    delayMicroseconds(500);
    
}
