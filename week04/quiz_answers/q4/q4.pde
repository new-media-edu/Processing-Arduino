/*
Create a sketch that draws a circle with a 
random color to a random position in the 
window every time the x key is pressed on 
the keyboard. Previously drawn circles should 
remain visible. Make it so that when the b key 
is pressed, the sketch is erased to a random 
background color.
*/

void setup() {
  
  size(600,600);
  
}

void draw() {
  
}

void keyPressed() {
  if(key == 'b') {
    background(random(255),random(255),random(255));
  }
  if(key == 'x') {
    float red = random(255);
    float green = random(255);
    float blue = random(255);
    
    float x = random(width);
    float y = random(height);
    
    fill(red,green,blue);
    ellipse(x,y,20,20);
  }
}