//
//  Timer.hpp
//  dataStructures
//
//  Created by Johnson, Connor on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp
#include "Timer.hpp"
#include <time.h>
#include <assert.h>
#include <iostream>
#include <stdio.h>

class Timer
{
private:
    clock_t executionTime;
    
public:
    Timer();
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayInformation();
    long getTimeInMicoseconds();
    
};
#endif /* Timer_hpp */
