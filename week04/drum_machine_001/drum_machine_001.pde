// for this sketch to work, you'll need to install the "Minim" library
// Sketch -> Import Library -> Search for "Minim"
// For more information about Minim and additional features, visit 
// http://code.compartmental.net/tools/minim/quickstart/
import ddf.minim.*;

// this variable will be an instance of the SoundFile class from the sound library
// the SoundFile will hold a reference to a sound file and provide methods (functions)
// to play back the sound in different ways
Minim minim;
AudioSample kick;

void setup() {
  
  // initialize the minim library.
  // we'll use this to load sounds below
  minim = new Minim(this);
  
  // follow this pattern to load a new sound file
  // files are located in the sketch's "data" folder
  kick = minim.loadSample("kick.mp3");
  
}

void draw() {
}

void keyPressed() {
  if (key == 32) { // the code in this block will execute whenever we hit the space bar
  
    // since kick is an instance of SoundFile, it has a "play" method
    // call the play method to hear the kick drum
    kick.trigger();  
  }
}

// EXERCISE: How would you load another sound file called "snare" from the data folder?