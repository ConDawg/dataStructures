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
    
    LinkedListTester linkTest;
    linkTest.testListBasics();
    linkTest.testListWithData();
//    findMaxandMin();
//
//    testArray();
//    Timer codeTimer;
//    codeTimer.startTimer();
//    cout << "Look! Code! On the screen!" << endl;
//    codeTimer.stopTimer();
//    codeTimer.displayInformation();
//    codeTimer.resetTimer();
//    codeTimer.startTimer();
//
//    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/cjoh9027/Documents/C++/dataStructures/dataStructures/Data/crime.csv");
//
//    for(int index = 200; index < 216; index ++)
//    {
//        cout << index << " is " << myData[index] << endl;
//    }
//    
//
//    codeTimer.stopTimer();
//    codeTimer.displayInformation();
//
}

void Controller :: testArray()
{
    Array<int>connorArray(7);
    
    connorArray[0] = 123;
    connorArray.setAtIndex(0, 321);
    
    cout << connorArray[0] << endl;
}


void Controller :: findMaxandMin()
{
    Timer searchTimer;
    searchTimer.startTimer();
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/cjoh9027/Documents/C++/dataStructures/dataStructures/Data/crime.csv");
    
    int minIndex = 0;
    int maxIndex = 0;
    
    for (int index = 1; index < myData.size(); index ++)
    {
        if (myData [minIndex] >  myData [index])
        {
            minIndex = index;
        }
        else if (myData [maxIndex] < myData [index])
        {
            maxIndex = index;
        }
    }
    searchTimer.stopTimer();
    cout << "The smallest Crime stat at " << minIndex << " and it is: " << myData[minIndex] << endl;
    cout << "The largest Crime stat is at " << maxIndex << myData[maxIndex] << endl;
    searchTimer.displayInformation();
}

