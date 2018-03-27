//
//  GraphTester.hpp
//  dataStructures
//
//  Created by Johnson, Connor on 3/23/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef GraphTester_hpp
#define GraphTester_hpp

#include <iostream>
#include "/Users/cjoh9027/Documents/C++/dataStructures/dataStructures/Model/Structures/NonLInear/Graph.hpp"

class GraphTester
{
private:
    Graph<string> puzzle;
    void setup();
    void compareTraversals();
    void findCheapestTraveral();
public:
    void testGraphs();
    
};





















#endif /* GraphTester_hpp */
