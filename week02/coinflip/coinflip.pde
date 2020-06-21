void setup() {
  size(600, 600);
  // center align text
  textAlign(CENTER);
  // increase font size
  textSize(100);
}

void draw() {
  
}

void keyPressed() {
  
  background(0);
  
  // create a variable of type INTEGER (int)
  // name it coin, and assign it a random value
  // that is either 0 or 1
  // because random returns a FLOAT we have to
  // convert it into an integer
  int coin = int(random(2));
  
  if(coin == 0) {
    
    text("tails", width/2, height/2);
  }
  
  if(coin == 1) {
    
    text("heads", width/2, height/2);
  }

  
}