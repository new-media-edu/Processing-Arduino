import ddf.minim.*;
Minim minim;
AudioSample kick;
AudioSample snare;
AudioSample hat;
AudioSample cymbal;

void setup() {  
  minim = new Minim(this);
  kick = minim.loadSample("kick.mp3");
  snare = minim.loadSample("snare.mp3");
  hat = minim.loadSample("hat.mp3");
  cymbal = minim.loadSample("cymbal.mp3");
}

void draw() {
}

void keyPressed() {
  
  int tempo = 150; // BPM
  int pulse = 60000 / tempo / 4; //duration of a 16th note, or 1/4 of the beat, in ms
    
  if (key == 32) { // space bar
    for(int i = 0; i < 4; i++) {
      if (i == 1) {
        cymbal.trigger();
      }
      for(int j = 0; j < int(random(1,10)); j++) { // use a random int to choose number of reps
        kick.trigger();
        hat.trigger();
        delay(pulse * int(random(1,3))); // use another random int to determine length of note
        if (j == 1) { // only play the second kick every other time
          kick.trigger();
        }
        delay(pulse * 2);
        snare.trigger();
        delay(pulse * 4);
        for(int k = 0; k < int(random(1,16)); k++) {
          hat.trigger();
          delay(pulse);
        }
      }
    }
    kick.trigger();
    cymbal.trigger();
  }
}