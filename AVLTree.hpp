//
//  AVLTree.hpp
//  dataStructures
//
//  Created by Johnson, Connor on 4/17/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef AVLTree_hpp
#define AVLTree_hpp

#include "BinarySearchTree.hpp"

template <class Type>
class AVLTree : public BinarySearchTree<Type>
{
private:
    BinaryTreeNode<Type> * leftRotation (BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightRotation (BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * leftRightRotation (BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> *  rightLeftRotation(BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> *  balanceSubTree (BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * insertMode(BinaryTreeNode <Type> * parent);
    BinaryTreeNode<Type> *  removeNode(BinaryTreeNode <Type> * parent);
    
    int heightDifference(BinaryTreeNode<Type> * parent);
    
public:
    AVLTree();
    
    void insert(Type itemToInsert);
    void remove(Type value);
};;


template<class Type>
int AVLTree<Type> :: heightDifference(BinaryTreeNode<Type> * node)
{
    int balance;
    int leftHeight = this->calculateHeight(node->getLeftNode());
    int rightHeight = this->calculateHeight(node->getRightNode());
    balance = leftHeight - rightHeight;
    return balance;
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: leftRotation (BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changeNode;
    changeNode = parent -> getLeftNode();
    
    parent -> setLeftChild(parent);
    
    return changeNode;
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: rightRotation (BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->getRightNoce();
    
    parent ->setRightChild(changedNode->getLeftNode());
    
    changedNode->setLeftChild(parent);
    
    return changedNode;
}




















#endif /* AVLTree_hpp */