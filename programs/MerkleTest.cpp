// Authors: Bridget Goodwine & Hanjing Zhu
// Emails: bgoodwin@nd.edu & hzhu7@nd.edu
//
// merkle tree node for the data structures final project on blockchain

#include<iostream>
#include<cstdlib>

#include "../classes/Transaction.h"
#include "../classes/MerkleNode.h"
#include "../classes/MerkleTree.h"

int main() {

/*  MerkleTree<char> theTree;
  theTree.insert( 'a', 1 );
  theTree.insert( 'c', 3 );
  theTree.insert( 'b', 2 );
  theTree.insert( 'd', 4 );
  theTree.insert( 'e', 5 );
  std::cout << theTree << std::endl; */

  Transaction t("Obi-Wan Kenobi", "Yoda", "$44.52", "7/18/2020" ); // fourth
  Transaction u("Leia Organa", "Han Solo", "$102.38", "6/20/2020" ); // third
  Transaction v("Anakin Skywalker", "Padme Amadala", "$12.57", "9/12/2017" ); // second
  Transaction w("Ashoka Tano", "Mace Windu", "$5.99", "12/1/2013" ); // first
  std::cout << "Hello :)" << std::endl; 
  MerkleTree<Transaction> TransactionTree;
  TransactionTree.insert( t, 4 );
  TransactionTree.insert( u, 3 );
  TransactionTree.insert( v, 2 );
  TransactionTree.insert( w, 1 );
  std::cout << TransactionTree << std::endl;




}
