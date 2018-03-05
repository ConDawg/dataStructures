//
//  RecursionTester.hpp
//  dataStructures
//
//  Created by Johnson, Connor on 3/5/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef RecursionTester_hpp
#define RecursionTester_hpp

#include <stdio.h>
#include <string>
#include "../Controller/Tools/Timer.hpp"

using namespace std;

class RecursionTester
{
private:
    int fib(int start);
    string mystery(string word);
public:
    void testRecursionNumebers();
    void testRecursionString();
    
};

#endif /* RecursionTester_hpp */
