/*
Create a sketch that draws lines 
that go from the corners of the window 
to the mouse position. You should be able 
to move the mouse and have the lines follow.
*/

void setup() {
  size(600,600);
}

void draw() {
  background(255);//optional
  
  // top left
  line(0,0,mouseX, mouseY);
  // top right
  line(width,0,mouseX, mouseY);
  // bottom right
  line(width,height,mouseX, mouseY);
  // bottm left
  line(0,height,mouseX, mouseY);
}