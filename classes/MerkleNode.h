// Authors: Bridget Goodwine & Hanjing Zhu
// Emails: bgoodwin@nd.edu & hzhu7@nd.edu
//
// merkle tree node for the data structures final project on blockchain

#ifndef MERKLENODE_H
#define MERKLENODE_H

#include <cstdlib>
#include<iostream>

template<class T>
struct MerkleNode {

  // data
  T value; // data -> i.e. the transaction class object
  MerkleNode<T>* left, *right;
  std::string hashLeft;
  std::string hashRight;
  int timestamp; // this will be year+month+date in integer form

  // default constructor
  MerkleNode<T>() : value(), left(NULL), right(NULL), hashLeft(" "), hashRight(" "), timestamp(-1) {}

  // overloaded constructor
  MerkleNode<T>(T valueIn, int tIn ) : value(valueIn), left(NULL), right(NULL), hashLeft(" "), hashRight(" "), timestamp(tIn) {}

  void setRight( std::string r ) {
    hashRight = r; 
  }

  void setLeft( std::string r ) {
    hashLeft = r;
  }

  friend std::ostream& operator<<( std::ostream& output, const MerkleNode<T>& theNode) {
    output << "The Merkle Node: ";
    //theTree.printInOrder( output, theTree.root );
    output << theNode.value;
    output << "Hash left = " << theNode.hashLeft << std::endl;
    output << "Hash right = " << theNode.hashRight << std::endl;
    //output << "Pointer left = " << left << std::endl;
    //output << "Pointer right = " << right << std::endl;
    output << "Timestamp = " << theNode.timestamp << std::endl;
    return output;
  }

};

#endif
