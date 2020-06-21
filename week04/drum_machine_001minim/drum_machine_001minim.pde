// for this sketch to work, you'll need to install the "Minim" library
// Sketch -> Import Library -> Search for "Minim"

/**
  * This sketch demonstrates how to use the <code>loadSample</code> method of <code>Minim</code>. 
  * The <code>loadSample</code> method allows you to specify the sample you want to load 
  * with a <code>String</code> and optionally specify what you want the buffer size of the 
  * returned <code>AudioSample</code> to be. Minim is able to load wav files, au files, aif
  * files, snd files, and mp3 files. When you call <code>loadSample</code>, if you just 
  * specify the filename it will try to load the sample from the data folder of your sketch. 
  * However, you can also specify an absolute path (such as "C:\foo\bar\thing.wav") and the 
  * file will be loaded from that location (keep in mind that won't work from an applet). 
  * You can also specify a URL (such as "http://www.mysite.com/mp3/song.mp3") but keep in mind 
  * that if you run the sketch as an applet you may run in to security restrictions 
  * if the applet is not on the same domain as the file you want to load. You can get around 
  * the restriction by signing all of the jars in the applet.
  * <p>
  * An <code>AudioSample</code> is a special kind of file playback that allows
  * you to repeatedly <i>trigger</i> an audio file. It does this by keeping the
  * entire file in an internal buffer and then keeping a list of trigger points.
  * <code>AudioSample</code> supports up to 20 overlapping triggers, which
  * should be plenty for short sounds. It is not advised that you use this class
  * for long sounds (like entire songs, for example) because the entire file is
  * kept in memory.
  */

//For more information about Minim and additional features, 
// visit http://code.compartmental.net/minim/

import ddf.minim.*;

Minim kick;
AudioSample player;

void setup() {
  
  kick = new Minim(this);
  // load .wav from the data folder
  //audio file should be 8 or 16 bit
  player = kick.loadSample("kick2.aif");
}

void draw() {
}

void keyPressed() {
  if (key == 32) { 
    //the code in this block will execute whenever we hit the space bar
    //since kick is an instance of AudioSample, it has a "trigger" method
    //call the trigger method to hear the kick drum
    player.trigger(); 
  }
}

// EXERCISE: How would you load another sound file called "snare" from the data folder?