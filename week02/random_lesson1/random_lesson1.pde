void setup() {
  size(600, 600);

  noStroke();

  background(0);
}

void draw() {

  // to create a variable, you have to give it a
  // TYPE, a NAME, and a VALUE
  float x = random(width);
  float y = random(height);

  //println(x);

  // create a random color RGB and store it to
  // variables for later use
  float red = random(255);
  float green = random(255);
  float blue = random(255);

  // variables can be used for fill as well!
  fill(red, green, blue);

  // draw the ellipse using variables as its
  // position
  ellipse(x, y, 20, 20);
  
  // also bonus draw a square below the circle
  rect(x - 10, y + 10, 20, 20);
}