/*
Name: Ahmed Affaan                                  
Title: main.cpp
Folder: BBC-MICRO-BIT-CHALLENGE-01                            
Date: 02/02/2022                                    
Country: Republic of Maldives                                                       
Description: Emotion Badge Program for BBC micro:bit                                       
Note: Uncomment codes to execute and comment 
them when not in use.                         
//*/

#include "MicroBit.h"

// Micro:Bit runtime initialised
MicroBit uBit;

int main()
{

  uBit.init(); //object initiated

  // Program initial scroll message
  uBit.display.scroll("EMOTION BADGE");

  //While - loop for butten implementation
  while (1)
  {
    // If - Statements passed for button specific LED commands
    //Button A specific LED commands
    if (uBit.buttonA.isPressed())
    {

      MicroBitImage happy("0,255,0,255,0\n0,255,0,255,0\n0,0,0,0,0\n255,0,0,0,255\n0,255,255,255,0\n");

      uBit.display.print(happy);
      
    }

    //Button B specific LED commands
    if (uBit.buttonB.isPressed())
    {
      
      MicroBitImage sad("0,255,0,255,0\n0,255,0,255,0\n0,0,0,0,0\n0,255,255,255,0\n255,0,0,0,255\n");

      uBit.display.print(sad);
      
    }

    //Button B (second emotion) specific LED commands
    if (uBit.buttonB.isPressed())
    {
      
      MicroBitImage angry("255,0,0,0,255\n0,255,0,255,0\n0,0,0,0,0\n255,255,255,255,255\n0,255,255,255,0\n");

      uBit.display.print(angry);
      
    }

    //Button AB specific LED commands
    if (uBit.buttonAB.isPressed())
    {
      
      MicroBitImage laugh("0,255,0,255,0\n0,255,0,255,0\n0,0,0,0,0\n255,255,255,255,255\n0,255,255,255,0\n");

      uBit.display.print(laugh);
      
    }
    
  }
  
}

