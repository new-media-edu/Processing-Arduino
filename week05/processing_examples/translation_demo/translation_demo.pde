size(500,500);

for(int i = 0; i < 500; i++) {
  pushMatrix();//protect from translation
  
  float x = random(width);
  float y = random(height);
  
  translate(x,y);
  
  rotate(random(TWO_PI));
  
  line(0,0,20,20);
  
  popMatrix();
}