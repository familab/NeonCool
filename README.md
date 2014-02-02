
TO USE:

open the file "NeonCoolRevisited.ino"

- be sure that #include "NeonCoolFunctions.h" is defined with quotes, NOT <>
- be sure that in the void setup(){} function you have "initLights()" written, this does basic initial setup.
- for now, only one larger effect can be used, but you can use perOfVis as much as you want.``


Learned some things today:

The arduino when working with the neon cool shield does NOT like classes or methods or anything object oriented with this tool.
Had multiple occurences during debugging the library that the same code line by line except that one was a method of the class "neonLight" and the other
was a function defined in the .ino 

Thus the solution to keep this code as easy to use as possible was just to put the function definitions in a header file. This has a couple of advantages:

There are no path changes necessary, ideally, you should just be able to open NeonCoolRevisited/NeonCoolRevisisted.ino with the NeonCoolFunctions.h left as it is.
and there shouldn't be any issues with functions not being defined or whatever. 

All functions are defined at the beginning of the .h file, just take a look at the function prototypes and start playing around!

TODO:
I need to add in a handler so that you can use a couple of the different functions for different strobing effects. As of right now there is none, which means you
can only call one function inside of the main (unless you are using perOfVis() which is basically the only exception right now)

Also, just more cool effects, get creative!
