int counter = 0;  // keep tracck of how many times LED has blinked

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(7, OUTPUT);

  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {

  // increase by 1
  counter++;

  // print out the info
  Serial.print("The LED hath blinketh ");
  Serial.print(counter);
  Serial.println(" times");
  
  digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  
  digitalWrite(7, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait for a second
}
