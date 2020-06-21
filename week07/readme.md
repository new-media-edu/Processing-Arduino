# Week 07 - 

[Pirate Pad](http://piratepad.net/ep/pad/view/ro.B8MdXW-fXTZ/latest)

## Artists & Projects

+ [Tristan Perich](https://vimeo.com/45225412)

## Concepts

+ Function list
	+ [delayMicroseconds](https://www.arduino.cc/reference/en/language/functions/time/delaymicroseconds/)
	+ [delay](https://www.arduino.cc/reference/en/language/functions/time/delay/)

+ [Basic Sound](http://www.instructables.com/id/How-to-use-a-Buzzer-Arduino-Tutorial/)
	+ Works just like an LED, code-wise
		+ Except with a speaker, bringing the pin HIGH pushes the speaker pin out, and bringing it LOW brings it back in. Producing even complex sounds out of a speaker is simply a matter of doing this thousands of times per second.
		+ Running the Blink sketch with a speaker instead of an LED will make a popping sound at the interval you set in inside of delay()
	+ Producing a high frequency noise requires a low delay, which makes the speaker cone move more frequently. To delay by small amounts we need to use delayMicroseconds() instead of delay()

+ See the arduino_examples for a few variations on producing sound in code

## Exercises

+ Produce a "laser" sound using a for loop
+ Try producing different sounds using code. Experiment with randomness, for loops, different increment/decrement numbers, multiple speakers, having variables for both the for loop and the delayMicroseconds, etc.
+ Try to imagine a sound (a simple one) and then attempt to create it

## Homework

+ Create a 2-question quiz for Arduino. You should propose a question as well as an answer for each. Put these in a folder in your repo's top level (ie, not inside "class notes" or something) and call it "quiz2_proposal". Your questions should just be written as comments in your answer files. To see what I mean, take a look at the "[quiz2_proposal](quiz2_proposal)" folder. I created 2 examples for you!

+ Your questions should be sufficiently different than mine. Remember, this is meant to help you study for the real quiz. Don't take the easy way out.