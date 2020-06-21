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
  
  int tempo = 120; // BPM
  int pulse = 60000 / tempo / 4; //duration of a 16th note, or 1/4 of the beat, in ms
    
  if (key == 32) { // space bar
    for(int i = 0; i < 4; i++) { // initialize; test; increment
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
    }
  }
}

// EXERCISE: Re-write the rhythm to using a second loop and fewer play calls.