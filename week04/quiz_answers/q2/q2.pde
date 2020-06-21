/*
  recreate this sol lewitt
  Wall Drawing 154: A black outlined square 
  with a red horizontal line from the midpoint 
  of the left side toward the middle of the right side.
*/

size(500,500);
background(255);

// black outer square
rect(10,10,width-20,height-20);

// red line
stroke(255,0,0);

line(10,height/2,400,height/2);