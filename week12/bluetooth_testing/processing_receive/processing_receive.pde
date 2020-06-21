import processing.serial.*;  // import serial library

Serial myPort;  // Create object from Serial class

void setup() {
  size(500, 500);

  // remember to set your serial port...
  printArray(Serial.list());
  myPort = new Serial(this, Serial.list()[1], 9600);
}

void draw() {
  // are there available serial bytes coming in?
  while(myPort.available() > 0) {
    
    int inByte = myPort.read();
    
    println(inByte);
    
    if(inByte == 1) {
      // button down from arduino
      background(255,0,0);
    } else {
      // button up from arduino
      background(0);
    }
  }
}