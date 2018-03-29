//
//  BinarySearchTree.hpp
//  dataStructures
//
//  Created by Johnson, Connor on 3/29/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp

#include "Tree.hpp"
#include <iostream>
using namespace std;

template <class Type>
class BinarySearchTree : public Tree<Type>
{
protected:
    
    int calculateSize(BinaryTreeNode<Type> * startNode);
    int calculateHeight(BinaryTreeNode<Type> * startNode);
    bool isBalanced(BinaryTreeNode<Type> * startNode);
    bool isComplete(BinaryTreeNode<Type> * startNode, int index, int size);
    
    void inOrderTraversal(BinaryTreeNode<Type> * inStart);
    void preOrderTraversal(BinaryTreeNode<Type> * preStart);
    void postOrderTraversal(BinaryTreeNode<Type> * postStart);
    
    BinaryTreeNode<Type> * getRightMostChild(BinaryTreeNode<Type> * current);
    BinaryTreeNode<Type> * getLeftMostChild(BinaryTreeNode<Type> * current);

    void removeNode(BinaryTreeNode<Type> * removeMe);
    
public:
    
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinaryTreeNode<Type> * getRoot();
    void setRoot(BinaryTreeNode<Type> * root);
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    void demoTraversalSteps(BinaryTreeNode<Type> * node);
    
    int getSize();
    int getHeight();
    //return -1
    bool isComplete();
    bool isBalanced();
    //return false
    
    bool contains(Type value);
    void insert(Type value);
    void remove(Type value);
    
    Type findMinimum();
    Type findMaximum();
    void demo();
};


template<class Type>
void BinarySearchTree<Type> :: insert (Type itemToInsert)
{
    BinaryTreeNode<Type> * insertMe = new BinaryTreeNode<Type>(itemToInsert);
    BinaryTreeNode<Type> * previous = nullptr;
    BinaryTreeNode<Type> * current = this->root;
    
    if(current == nullptr)
    {
        this->root = insertMe;
    }
    else
    {
        while(current != nullptr)
        {
            previous = current;
            if(itemToInsert < current->getData())
            {
                current = current->getLeft();
            }
            else
            {
                cerr<< "Item exists already" << endl;
                delete insertMe;
                return;
            }
        }
        
        if (previous -> getData() > itemToInsert)
        {
            previous->setLeftNode(insertMe);
        }
        else
        {
            previous->setRightNode(insertMe);
        }
        insertMe->setRootNode(previous);
    }
}

template<class Type>
int calculateSize(BinaryTreeNode<Type> * startNode)
{
    return -1;
}

template<class Type>
int calculateHeight(BinaryTreeNode<Type> * startNode)
{
    return -1;
}


template<class Type>
bool isBalanced(BinaryTreeNode<Type> * startNode)
{
    return false;
}


template<class Type>
 bool isComplete(BinaryTreeNode<Type> * startNode, int index, int size)
{
    return false;
}

template<class Type>
 void inOrderTraversal(BinaryTreeNode<Type> * inStart)
{
    
}


template<class Type>
 void preOrderTraversal(BinaryTreeNode<Type> * preStart)
{
    
}



template<class Type>
 void postOrderTraversal(BinaryTreeNode<Type> * postStart)
{
    
}


template<class Type>
  BinaryTreeNode<Type> * getRightMostChild(BinaryTreeNode<Type> * current)
{
    
}


template<class Type>
BinaryTreeNode<Type> * getLeftMostChild(BinaryTreeNode<Type> * current)
{
    
}


template<class Type>
void removeNode(BinaryTreeNode<Type> * removeMe)
{
    
}

template<class Type>
BinarySearchTree<Type> :: BinarySearchTree()
{
    this->root = nullptr;
}

template<class Type>
BinarySearchTree<Type> :: ~BinarySearchTree()
{
    
}

template<class Type>
  BinaryTreeNode<Type> * getRoot()
{
    
}


template<class Type>
void setRoot(BinaryTreeNode<Type> * root)
{
    
}


template<class Type>
void BinarySearchTree<Type> :: inOrderTraversal()
{
    inOrderTraversal(this->root);
}

template<class Type>
void BinarySearchTree<Type> :: inOrderTraversal(BinaryTreeNode<Type> * inStart)
{
    if(inStart != nullptr)
    {
        inOrderTraversal(inStart->getLeft());
        cout << inStart->getData() << endl;
        inOrderTraversal(inStart->getRight());
    }
}

template <class Type>
void BinarySearchTree<Type> :: demo()
{
    demoTraversalSteps(this->root);
}

template <class Type>
void BinarySearchTree<Type> :: demoTraversalSteps(BinaryTreeNode<Type> * start)
{
    if(start != nullptr)
    {
        (cout << "check if left is here") << endl;
        demoTraversalSteps(start->getLeft());
        cout << "at root" << endl;
        cout << "check if right is here" << endl;
        demoTraversalSteps(start->getRight());
    }
}

template<class Type>
void BinarySearchTree<Type> :: preOrderTraversal()
{
    preOrderTraversal(this->root);
}


template<class Type>
void BinarySearchTree<Type> ::  postOrderTraversal()
{
    posetOrderTraversal(this->root);
}

template<class Type>
 void demoTraversalSteps(BinaryTreeNode<Type> * node)
{
    
}

template<class Type>
 int getSize()
{
    return -1;
}

template<class Type>
int getHeight()
{
    return -1;
}

template<class Type>
bool isComplete()
{
    return false;
}

template<class Type>
bool isBalanced()
{
    return false;
}

template<class Type>
bool contains(Type value)
{
    return false;
}

template<class Type>
void insert(Type value)
{
    
}

template<class Type>
void remove(Type value)
{
    
}

template<class Type>
Type findMinimum()
{
    
}

template<class Type>
Type findMaximum()
{
    
}












#endif /* BinarySearchTree_hpp */
