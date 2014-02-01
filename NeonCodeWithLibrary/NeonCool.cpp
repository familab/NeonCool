 #include "Arduino.h" 
 #include "NeonCool.h"
 
  neonCool::neonCool(){
 	int pins[] = {4,5,7,8,9,10,11,12,13};
 	int numOfNeons=9;
  }
 
// This method is the foundation of any patterns you might want to make,
// where the parameters startLed and endLed specify a range of what LED's you wish to affect
// skipBy just jumps led's in increments of the value you pass too it. So for example say you you are working
// in a range of 10 leds and you pass 2 as skipBy, then every other led is active so 5 would appear active
// The final parameter offset is used to essentially shift whatever pattern you have specified from the startLed, 
// so for example say we are in the same situation as above, startLed=1 endLed=10 and skipBy=2. If we loop so that 
// offSet = 0 and then 1 then we will see a pattern that appears to turn on every other light for offset=0, 
// and then turn on the shifts to the leds that were off when offset=1 

 void neonCool::perOfVis(int startLed,int endLed, int skipBy, int offSet){
     int k;
     for(int i=(startLed-1);i<endLed;  i+=skipBy){
         k=(i+offSet)%numOfNeons;
        digitalWrite(pins[k],LOW); 
        delay(3); 
        digitalWrite(pins[k],HIGH); 
        delay(1); 
     } 
 
 // swipe shows you how to string perOfVis methods together to create affects, note you cannot use 
 
 void neonCool::swipe(void){
 	  uint32_t time = (millis()%10000);


	  if( time<1000 ){
	    perOfVis(1,1,1,0);
	  }
	  else if( time > 1000 && time < 2000 ){
	    perOfVis(1,2,1,0);
	  }
	  else if( time > 2000 && time < 3000 ){
	    perOfVis(1,3,1,0);
	  }
	  else if( time > 3000 && time < 4000){
	    perOfVis(1,4,1,0); 
	  }  
	  else if( time > 4000 && time < 5000 ){
	    perOfVis(1,5,1,0);
	  }
	  else if( time > 5000 && time < 6000 ){
	    perOfVis(1,6,1,0);
	  }
	  else if( time > 6000 && time < 7000){
	    perOfVis(1,7,1,0); 
	  }
	  else if( time > 7000 && time < 8000){
	    perOfVis(1,8,1,0); 
	  }
	  else if( time > 8000 && time < 9000){
	     perOfVis(1,9,1,0); 
	  }
	  else {  
	    perOfVis(1,10,1,0);
	  }
  }
 
  
        
  }


