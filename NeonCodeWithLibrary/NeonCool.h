#include "Arduino.h"

#ifndef NeonCool_h
#define NeonCool_h

class neonCool {
    public:
	//methods
  	 neonCool(void);    
    void swipe(void);
    void perOfVis(int,int,int,int);    
    //members
    int pins[];
    int numOfNeons;
};

#endif
