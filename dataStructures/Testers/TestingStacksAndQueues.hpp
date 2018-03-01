//
//  TestingStacksAndQueues.hpp
//  dataStructures
//
//  Created by Johnson, Connor on 2/28/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef TestingStacksAndQueues_hpp
#define TestingStacksAndQueues_hpp

#include <stdio.h>
#include "/Users/cjoh9027/Documents/C++/dataStructures/dataStructures/Model/Structures/Linear/LinkedList.hpp"
#include "/Users/cjoh9027/Documents/C++/dataStructures/dataStructures/Controller/FileController.hpp"
#include "/Users/cjoh9027/Documents/C++/dataStructures/dataStructures/Controller/Tools/Timer.hpp"
#include "/Users/cjoh9027/Documents/C++/dataStructures/dataStructures/Model/Structures/Linear/Queue.hpp"
#include "/Users/cjoh9027/Documents/C++/dataStructures/dataStructures/Model/Structures/Linear/Stack.hpp"
#include "/Users/cjoh9027/Documents/C++/dataStructures/dataStructures/Model/Structures/Linear/List.hpp"
#include <iostream>

using namespace std;

class TestingStacksAndQueues
{
public:
    void stackVersusList();
    void stackVersusQueue();
    void queueVersusList();
    
};


#endif /* TestingStacksAndQueues_hpp */
