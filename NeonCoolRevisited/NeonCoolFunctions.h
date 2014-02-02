#include "Arduino.h"


#ifndef NeonCool_h
#define NeonCool_h

// 
const int pins[] = {4,5,6,7,8,9,10,11,12,13};
int numOfNeons=10;
uint32_t time = millis();

// usable functions:

// run this in the setup
void initLights(void);

// startLed and endLed specify the range of LED's you wish to affect
// skipBy determines how many led's to "skip" within the range of the first
// parameters
// offSet sets how many LEDs from the beginning of the range that the pattern you have specified
// will begin.

// this function is the foundation for all other patterns and neat tricks that we can make
// Feel free to experiment with it!
void perOfVis(int startLed,int endLed, int skipBy, int offSet);

void swipe(void);

void stream(void);








void initLights(void){
    for(int i = 0; i<10; i++){
    pinMode(pins[i],OUTPUT);
  }

  for(int i = 0; i<10; i++){
    digitalWrite(pins[i],HIGH);
  }
}


void perOfVis(int startLed,int endLed, int skipBy, int offSet){
  int k;
  for(int i=(startLed-1);i<endLed;  i+=skipBy){
    k=(i+offSet)%numOfNeons;
    digitalWrite(pins[k],LOW); 
    delay(3); 
    digitalWrite(pins[k],HIGH); 
    delay(1); 
  }  

}

void swipe(void){
  time = (millis()%10000);

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

void stream(void){
    time = (millis()%400);
  if(time < 100){
   perOfVis(1,10,5,0);
  }
  else if(time >100 && time<200){
    perOfVis(1,10,5,1);
  }
  else if(time >200 && time <300){
    perOfVis(1,10,5,2); 
  }
  
  else if(time >300 && time < 400){
    perOfVis(1,10,5,3);  
  }
  
  else {
    perOfVis(1,10,5,4);
  }  
}


#endif
