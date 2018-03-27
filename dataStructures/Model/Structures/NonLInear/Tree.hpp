//
//  Tree.hpp
//  dataStructures
//
//  Created by Johnson, Connor on 3/27/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Tree_hpp
#define Tree_hpp

#include "/Users/cjoh9027/Documents/C++/dataStructures/dataStructures/Model/Node/BinaryTreeNode.hpp"
template<class Type>
class Tree
{
protected:
    BinaryTreeNode<Type> * root;
public:
    virtual int getSize() = 0;
    virtual int getHeight() = 0;
    virtual bool isComplete() = 0;
    virtual bool isBalacnced() = 0;
    virtual void insert (Type data) = 0;
    virtual bool contains(Type data) = 0;
    virtual void remove (Type data) = 0;
    virtual void inOrderTraversal() = 0;
    virtual void preOrderTraversal() = 0;
    virtual void postOrderTraversal() = 0;
};





#endif /* Tree_hpp */
