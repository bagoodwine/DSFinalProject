// Authors: Bridget Goodwine & Hanjing Zhu
// Emails: bgoodwin@nd.edu & hzhu7@nd.edu
//
// merkle tree class for the data structures final project on blockchain

#ifndef MERKLETREE_H
#define MERKLETREE_H

#include "MerkleNode.h"
#include "Transaction.h"
#include "hash.h"

#include<iostream>
#include<cstdlib>

template<class T>
class MerkleTree{

private:
  // tree root node
  MerkleNode<T> *root;

  // private insert method caled by public insert method
  void insert( MerkleNode<T>*& currPtr, MerkleNode<T>* prevPtr, T& value, const int& t, char& side ) { // removed const before T to be able to preform getString func

    // create new node with the value
    //MerkleNode<T> *newNode = new MerkleNode<T>( i );

    // if curr pointer is null, this is the location
    // set the pointer to the new value
    char temp = 'x';
    if( currPtr == NULL ) {
      currPtr = new MerkleNode<T>(value, t );
      std::string tString = value.getString();
      tString = hash(tString);
      //std::cout << tString << std::endl;

      if( side == 'r' ) {
        if( prevPtr != NULL ) {
        //  std::cout << "Right child" << std::endl;
          prevPtr->hashRight = tString;
        }
      }
      else if( side == 'l' ){
        if( prevPtr != NULL ) {
        //  std::cout << "Left child" << std::endl;
          prevPtr->hashLeft = tString;
        }
        else {
          //std::cout << "Left child BUT root" << std::endl;
        }

      }
      if( prevPtr == NULL ) {
        std::cout << std::endl;
      }
      return;
    }

    // if the TIMESTAMP is less than the current data, recurse left
    else if( t < currPtr->timestamp ) {
      temp = 'l';
      //std::cout << "Prev ptr = " << prevPtr << std::endl;
      insert( currPtr->left, currPtr, value, t, temp );
    }

    // if the TIMESTAMP is greater than the current data, recurse right
    else if( t > currPtr->timestamp ) {
      temp = 'r';
      //std::cout << "Prev ptr = " << prevPtr << std::endl;
      insert( currPtr->right, currPtr, value, t, temp );
    }
    else {
      std::cout << "Something went wrong..." << std::endl;
    }
  }

public:

  // default constructor
  MerkleTree() : root(NULL) {}

  //destructor
  ~MerkleTree() {
    // recursivly delete MerkleTree
    //deleteTree( root );
  }

  // public insert method calls the private one
  void insert( T& value, const int& t ) { // removed const from T
    // value = the transaction
    // t = the timestamp
    char side = 'l';
    MerkleNode<T>* prev = NULL;
    insert( root, prev, value, t, side );
  }

  void printInOrder( std::ostream& output, const MerkleNode<T>* currNode ) const {

    // return if currNode = NULL
    if( currNode == NULL ) {
      return;
    }

    // recursivly call left child
    printInOrder( output, currNode->left );
    output << "Transaction: " << std::endl;
    output << currNode->value << "At timestamp = " << currNode->timestamp << std::endl;
    output << "Left hash = " << currNode->hashLeft << std::endl;
    output << "Right hash = " << currNode->hashRight << std::endl;
    // recursvily call right child
    printInOrder( output, currNode->right );
  }

  friend std::ostream& operator<<( std::ostream& output, const MerkleTree<T>& theTree) {
    output << "Transactions in order: ";
    theTree.printInOrder( output, theTree.root );
    return output;
  }

};

#endif
