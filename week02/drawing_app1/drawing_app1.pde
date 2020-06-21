// comment here!
void setup() {
  size(500, 500);
  
  // start background as white
  background(255);

  // wider stroke thickness
  strokeWeight(4);
}

// comment here!
void draw() {

  // circle drawing mode...
  //ellipse(mouseX, mouseY, 30, 30);

  // where is my mouse?
  //println(mouseX, mouseY);
}

// if the mouse is clicked and dragged
void mouseDragged() {
  // line drawing mode...
  line(mouseX, mouseY, pmouseX, pmouseY);
}

// if a key is pressed
void keyPressed() {
  println(key);

  // if the key that is pressed is A then...
  if (key == 'a') {
    // ...set the stroke weight to 10
    strokeWeight(10);
  }

  // if the key that is pressed is S then...
  if (key == 's') {
    // ...set the stroke weight to 1
    strokeWeight(1);
  }

  // if R is pressed, color to red
  if (key == 'r') {
    stroke(255, 0, 0);
  }
  // if G is pressed, color to green
  if (key == 'g') {
    stroke(0, 255, 0);
  }
  // if B is pressed, color to green
  if (key == 'b') {
    stroke(0, 0, 255);
  }
}