// Authors: Bridget Goodwine & Hanjing Zhu
// Emails: bgoodwin@nd.edu & hzhu7@nd.edu
//
// merkle tree node for the data structures final project on blockchain

#include<iostream>
#include<cstdlib>

#include "../classes/MerkleNode.h"
#include "../classes/MerkleTree.h"

int main() {

  MerkleTree<int> theTree;
  theTree.insert( 1, 4 );
  theTree.insert( 2, 3 );
  theTree.insert( 3, 5 );

  std::cout << theTree << std::endl;
  std::cout << ":)" << std::endl;

}
