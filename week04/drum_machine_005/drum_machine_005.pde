import ddf.minim.*;
Minim minim;
AudioSample kick;
AudioSample snare;

void setup() {  
  minim = new Minim(this);
  kick = minim.loadSample("kick.mp3");
  snare = minim.loadSample("snare.mp3");
}

void draw() {
}

void keyPressed() {
  
  int loopCount = 0; // initialize a variable to count repetitions of the loop
  int tempo = 120; // BPM
  int pulse = 60000 / tempo / 4; //duration of a 16th note, or 1/4 of the beat, in ms
  
  if (key == 32) { // space bar
    while(loopCount < 4) { // test the loop counter to see if we should play the loop again
      kick.trigger();
      delay(pulse * 4);
      snare.trigger();
      delay(pulse * 4);
      kick.trigger();
      delay(pulse * 2);
      kick.trigger();
      delay(pulse * 2);
      snare.trigger();
      delay(pulse * 4);
      
      loopCount++; // increment the loop counter
    }
    
  }
}

// QUESTION: Is there a quicker way to write this kind of loop? (A: Yes.)