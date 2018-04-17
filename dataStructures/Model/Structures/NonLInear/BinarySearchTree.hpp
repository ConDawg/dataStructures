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
void destroyTree(BinaryTreeNode<Type> * node);

template <class Type>
BinarySearchTree<Type> :: ~BinarySearchTree()
{
    destroyTree(this->root);
}
template <class Type>
void BinarySearchTree<Type> :: destroyTree(BinaryTreeNode<Type> * node)
{
    if(node!=nullptr)
    {
        destroyTree(node->getLeftNode());
        destroyTree(node->getRightNode());
        delete node;
    }
}

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
BinarySearchTree<Type> :: BinarySearchTree()
{
    this->root = nullptr;
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


template <class Type>
void BinarySearchTree<Type> :: remove(Type getRidOfMe)
{
    if(this->root == nullptr)
    {
        cout << "Empty tree so no removal" << endl;
    }
    else
    {
        BinaryTreeNode<Type> * current = this->root;
        BinaryTreeNode<Type> * previous = nullptr;
        bool hasBeenFound = false;
        
        while (current != nullptr && !hasBeenFound)
        {
            if (current->getData() == getRidOfMe)
            {
                hasBeenFound = true;
            }
            else
            {
                previous = current;
                if(getRidOfMe < current->getData())
                {
                    current = current->getLeftNode();
                }
                else
                {
                    current = current->getRightNode();
                }
            }
        }
        
        if(current == nullptr)
        {
            cerr << "Item not found, removal unsuccessful" << endl;
        }
        else if(hasBeenFound)
        {
            if(current == this->root)
            {
                removeNode(this->root);
            }
            else if(getRidOfMe < previous->getData())
            {
                removeNode(previous->getLeftNode());
            }
            else
            {
                removeNode(previous->getRightNode());
            }
        }
    }
}

template <class Type>
void BinarySearchTree<Type> :: removeNode(BinaryTreeNode<Type> * removeMe)
{
    BinaryTreeNode<Type> * current;
    BinaryTreeNode<Type> * previous;
    BinaryTreeNode<Type> * temp;
    
    previous = removeMe->getRootNode();
    
    if(removeMe->getRightNode() == nullptr && removeMe->getLeftNode() == nullptr)
    {
        temp = removeMe;
        removeMe = nullptr;
        
        if(previous!= nullptr && removeMe->getLeftNode() == nullptr)
        {
            temp = removeMe;
            removeMe = nullptr;
            
            if(previous != nullptr && removeMe->getData() < previous->getData())
            {
                previous->setLeftNode(removeMe);
            }
            
            else if(previous != nullptr && removeMe->getData() > previous->getData())
            {
                previous->setRightNode(removeMe);
            }
            
            delete temp;
        }
        else if (removeMe->getLeftNode() == nullptr)
        {
            temp = removeMe;
            removeMe = removeMe ->getRightNode();
            if(previous != nullptr && removeMe->getData() < previous->getData())
            {
                previous->setLeftNode(removeMe);
            }
            else if(previous != nullptr && removeMe->getData() > previous->getData())
            {
                previous->setRightNode(removeMe);
            }
            removeMe->setRoodNode(previous);
            delete temp;
        }
        
        else
        {
            current = getRightMostChild(removeMe->getLeftNode());
            
            previous = current->getRootNode();
            removeMe->setData(current->getData());
            
            if(previous == nullptr)
            {
                removeMe->setLeftNode(current->getLeftNode());
            }
            else
            {
                previous->setRightNode(current->getLeftNode());
            }
            if(current->getLeftNode() != nullptr)
            {
                current->getLeftNode()->setRootNode(removeMe);
            }
            delete current;
            
        }
    }
    if(removeMe == nullptr|| removeMe->getRootNode() == nullptr)
    {
        this->root = removeMe;
    }
}

template <class Type>
BinaryTreeNode<Type> * BinarySearchTree<Type> :: getLeftMostChild(BinaryTreeNode <Type> * startingNode)
{
    BinaryTreeNode<Type> * currentNode  = startingNode;
    BinaryTreeNode<Type> * previous = nullptr;
    while (currentNode != nullptr)
    {
        previous = currentNode;
        currentNode = currentNode->getLeftNode();
    }
    return previous;
}

template <class Type>
BinaryTreeNode<Type> * BinarySearchTree<Type> :: getRightMostChild(BinaryTreeNode <Type> * startingNode)
{
    BinaryTreeNode<Type> * currentNode  = startingNode;
    BinaryTreeNode<Type> * previous = nullptr;
    while (currentNode != nullptr)
    {
        previous = currentNode;
        currentNode = currentNode->getRightNode();
    }
    return previous;
}

template <class Type>
Type BinarySearchTree<Type> :: findMaximum()
{
    assert(this->root != nullptr);
    return getRightMostChild(this->root)->getData();
}

template <class Type>
Type BinarySearchTree<Type> :: findMinimum()
{
    assert(this->root != nullptr);
    return getLeftMostChild(this->root)->getData();
}









#endif /* BinarySearchTree_hpp */
