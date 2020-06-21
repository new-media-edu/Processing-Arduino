/*
(Extra Credit) Create a sketch with a circle 
at the center. The circle starts at 1 pixel in 
diameter and grows until it reaches the edges 
of the sketch window. The circle then shrinks 
until it is 1 pixel in diameter and the process 
repeats itself.
*/
float circleD = 1;
float circleSpeed = 5;

void setup() {
  size(600,600);
}

void draw() {
  circleD = circleD + circleSpeed;
  
  // if circle grows too much
  if(circleD > width) {
    circleSpeed = circleSpeed * -1;
  }
  
  // if circle shrinks too much
  if(circleD < 0) {
    circleSpeed = circleSpeed * -1;
  }
  
  background(0);
  
  ellipse(width/2,height/2,circleD,circleD);
}