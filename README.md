




Be sure to add the library contents to your path - correctly before trying to run the sketch project.


I want to explain a method I wrote called:


perOfVis(int startLed,int endLed, int skipBy, int offSet)


Its basically the foundation of pretty much any effect you want to do: 


(including the "swipe()" method written as an example)


so the parameters are neat:


startLed, is the beginning strip you want to affect, and endLed is the last one, so if startLed = 3 and endLed = 5; then just that segment, lights 3 - 5 are the only ones that will be maintain persistance of vision.


the parameter skipBy is a number that represents how many LED's you are going to skip to maintain persistance of vision, so if you put in skipBy=1 every other LED starting after the number specified by startLED will be skipped. 


And finally offSet is used to determine which of the lights you wish to start from from within the range specified for a POS effect.


This is useful say if you want to make your pattern appear to "shift" a pattern down the strip, you can specify an offset put it on a timer and let it loop and bam there you go:

