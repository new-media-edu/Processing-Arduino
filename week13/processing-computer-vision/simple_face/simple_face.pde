// Now we need the video library
import processing.video.*;

// Import the library
import gab.opencv.*;

// We need Java rectangles
import java.awt.Rectangle;

// Library object
OpenCV opencv;

// Capture object
Capture cam;

// Array of faces found
Rectangle[] faces;

// serial stuff
import processing.serial.*;  // import serial library
Serial myPort;  // Create object from Serial class

void setup() {
  size(320, 240, P2D);

  // remember to set your serial port...
  printArray(Serial.list());
  String portName = Serial.list()[2];
  myPort = new Serial(this, portName, 9600);

  // Start capturing
  cam = new Capture(this, 320, 240);
  cam.start();

  // Create the OpenCV object
  opencv = new OpenCV(this, cam.width, cam.height);

  // Which "cascade" are we going to use?
  opencv.loadCascade(OpenCV.CASCADE_FRONTALFACE);  
  //opencv.loadCascade(OpenCV.CASCADE_EYE);  
  //opencv.loadCascade(OpenCV.CASCADE_NOSE);
}

// New images from camera
void captureEvent(Capture cam) {
  cam.read();
}

void draw() {

  background(0);

  // We have to always "load" the camera image into OpenCV 
  opencv.loadImage(cam);

  // Detect the faces
  faces = opencv.detect();

  // Draw the video
  image(cam, 0, 0);

  // If we find faces, draw them!
  if (faces != null) {
    for (int i = 0; i < faces.length; i++) {
      strokeWeight(2);
      stroke(255, 0, 0);
      noFill();
      rect(faces[i].x, faces[i].y, faces[i].width, faces[i].height);

      // send data to arduino?
      int mappedVal = int(map(faces[0].x, 0, width, 80, 110));
      myPort.write(mappedVal);  // for the arduino to read
    }
  }
}