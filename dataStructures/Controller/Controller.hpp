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
#include "../Model/Structures/Array.hpp"
#include "../Testers/ArrayTester.hpp"

class Controller
{
private:
    void findMaxandMin();
    void testArray();
    
public:
    void start();

};
#endif /* Controller_hpp*/
