/*
Create a sketch that is 500x500 pixels. 
Make the left half of the window black and 
the right half yellow. Additionally, print 
a random whole number to the console. This 
process should not loop.
*/

size(600,600);
// black half
background(0);
// yellow half
fill(255,255,0);
rect(width/2,0,width/2,height);

// print a random whole number
println(int(random(100)));