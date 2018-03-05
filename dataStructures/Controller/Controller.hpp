//
//  Controller.hpp
//  dataStructures
//
//  Created by Johnson, Connor on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <stdio.h>
#include <vector>
#include "Tools/Timer.hpp"
#include "FileController.hpp"
#include "/Users/cjoh9027/Documents/C++/dataStructures/dataStructures/Model/Structures/Linear/Array.hpp"
#include "../Testers/ArrayTester.hpp"
#include "/Users/cjoh9027/Documents/C++/dataStructures/dataStructures/Testers/LinkedListTester.hpp"
#include "/Users/cjoh9027/Documents/C++/dataStructures/dataStructures/Testers/TestingStacksAndQueues.hpp"
#include "/Users/cjoh9027/Documents/C++/dataStructures/dataStructures/Testers/RecursionTester.hpp"

class Controller
{
private:
    void findMaxandMin();
    void testArray();
    
public:
    void start();

};
#endif /* Controller_hpp*/
