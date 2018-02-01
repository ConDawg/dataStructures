//
//  Controller.cpp
//  dataStructures
//
//  Created by Johnson, Connor on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

void Controller :: start()
{
    Timer codeTimer;
    codeTimer.startTimer();
    cout << "Look! Code! On the screen!" << endl;
    codeTimer.stopTimer();
    codeTimer.displayInformation();
    codeTimer.resetTimer();
    codeTimer.startTimer();

    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/cjoh9027/Documents/C++/dataStructures/dataStructures/Data/crime.csv");

    for(int index = 200; index < 216; index ++)
    {
        cout << index << " is " << myData[index] << endl;
    }
    
    
    codeTimer.stopTimer();
    codeTimer.displayInformation();
    
}
