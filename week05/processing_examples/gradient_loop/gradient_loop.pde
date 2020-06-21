size(500, 500);
// make color run from 0 -> 500 instead
colorMode(RGB, 500);

// loop to the edge
for (int i = 0; i < width; i++) {
  // change color
  stroke(i,0,0);
  
  // draw line
  line(i, 0, i, height);

  // print coordinate
  println(i);
}