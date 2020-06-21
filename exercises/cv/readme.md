## Brief Detour into Computer Vision

+ Computer vision is an interdisciplinary field that deals with how computers can be made for gaining high-level understanding from digital images or videos. From the perspective of engineering, it seeks to automate tasks that the human visual system can do. ([wikipedia](https://en.wikipedia.org/wiki/Computer_vision)]

+ There are of course many ways to apply CV. I went over a few examples today including:
	+ Frame Differencing: Checking for differences between successive frames, which we can call "movemvent"
	+ Background subtraction: Taking the original background photo and comparing it to new frames, which works like frame differencing, only background subtraction will detect someone who is standing still inside the frame of the webcam
	+ Facial detection: What it sounds like!
	+ Brightest point tracking: Finding the pixel in the image that has the brightest pixel color and returning its pixel coordinates

+ We applied these techniques to physical computing by passing values from Processing to Arduino. Check out the sketch folders.