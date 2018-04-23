//
//  N_AryTreeNode.hpp
//  dataStructures
//
//  Created by Johnson, Connor on 4/23/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef N_AryTreeNode_hpp
#define N_AryTreeNode_hpp


#include <vector>
#include "Node.hpp"
using namespace std;

template <class Type>
class N_AryTreeNode : public node<Type>
{
private:
    vector<N_AryTreeNode<Type>*> nodes;
    N_AryTreeNode<Type>* root;
    
public:
    N_AryTreeNode<Type>();
    ~N_AryTreeNode<Type>();
    N_AryTreeNode<Type>(Type data);
    
    vector<N_AryTreeNode<Type>*> getNodes();
    N_AryTreeNode<Type> * getRoot();
    int getChildCount();
    
    void setRoot<N_AryTreeNode<Type> * root);
    void addChild(Type data);
};
    
template <class Type>
N_AryTreeNode<Type> :: N_AryTreeNode()
{
        
}
    
template <class Type>
N_AryTreeNode<Type> :: N_AryTreeNode(Type data) : Node<Type>(data)
{
        
}
    
template <class Type>
{
    for (int index = nodes.size() - 1; index >= 0; index --)
    {
        delete nodes[index];
    }
}
#endif /* N_AryTreeNode_hpp */
