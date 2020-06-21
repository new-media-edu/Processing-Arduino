size(500,500);
noFill();

for(int i = 0; i < width * 3; i += 20) {
  // top
  ellipse(width/2, 0, i, i);
  
  // right
  ellipse(width, height/2, i, i);
}