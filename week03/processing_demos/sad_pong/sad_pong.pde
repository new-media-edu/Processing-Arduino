/*
  CHALLENGES:
  -different shape(s)
  -random background change every collision
  -random fill for ball every collision
  -random size for ball every collision
  -make the ball bounce from its side
  -add a second ball
*/

// store pong ball coordinates
// as GLOBAL VARIABLES!!
float x;
float y;
float xSpeed;
float ySpeed;

void setup() {
  size(600, 600);

  // give the global vars values
  // now that window has been created
  x = width/2;
  y = height/2;

  // set initial speed to random value
  xSpeed = random(2,5);
  ySpeed = random(2,5);
}

void draw() {
  background(0);

  // change the x position
  x = x + xSpeed;
  // and y
  y = y + ySpeed;
  
  // did we hit right side?
  if(x >= width) {
    // collision right
    xSpeed = xSpeed * -1;
  }
  
  if(x <= 0) {
    // collision left
    xSpeed = xSpeed * -1;
  }
  
  if(y >= height) {
    // collision bottom
    ySpeed = ySpeed * -1;
  }
  
  if(y <= 0) {
    // collision top
    ySpeed = ySpeed * -1;
  }
  
  // draw the ball!
  ellipse(x, y, 20, 20);
}