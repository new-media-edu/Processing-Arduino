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
  while(true) { // this block repeats as long as the argument is true
    int tempo = 120; // tempo in BPM (beats per minute) - change it and see what happens
    int pulse = 60000 / tempo / 4; // duration of a 16th note, or 1/4 of the beat, in ms
    if (key == 32) { // space bar
      kick.trigger();
      delay(pulse * 4); // rhythms can now be written as multiples of the pulse value
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

// EXERCISE: Make your rhythm repeat exactly 4 times.