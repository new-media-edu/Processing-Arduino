import processing.serial.*;

Serial myPort;  // Create object from Serial class

int mz = 0;

void setup() {
  size(200, 200);
  printArray(Serial.list());
  String portName = Serial.list()[2];
  myPort = new Serial(this, portName, 9600);
}

void draw() {
  background(255);
    
  //myPort.write("15,21,37\n");
  
  
  
  int mx = int(map(mouseX, 0, width, 0, 180));
  int my = int(map(mouseY, 0,height, 0, 180));
  
  
  String out = mx + "," + my + "," + mz + "\n";
  //println(out);
  myPort.write(out);
  

}

void keyPressed() {
  if(key == 'a') {
    mz = 0;
  }
  
  if(key == 's') {
    mz = 180;
  }
}