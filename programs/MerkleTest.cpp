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

  // transaction objects to insert 
  Transaction t("Obi-Wan Kenobi", "Yoda", "$44.52", "07/18/2020" );
  Transaction u("Leia Organa", "Han Solo", "$102.38", "06/20/2020" );
  Transaction v("Anakin Skywalker", "Padme Amadala", "$12.57", "09/12/2017" );
  Transaction w("Ashoka Tano", "Mace Windu", "$5.99", "12/01/2013" );
  Transaction x("Obi-Wan Kenobi", "Luke Skywalker", "$87.55", "03/23/2019"); // transaction to insert


  // inserting initial tree
  MerkleTree<Transaction> TransactionTree;
  std::cout << "Transaction tree before addition: " << std::endl;
  TransactionTree.insert( v, v.getDate() );
  TransactionTree.insert( w, w.getDate() );
  TransactionTree.insert( u, u.getDate() );
  TransactionTree.insert( t, t.getDate() );
  std::cout << TransactionTree << std::endl;

  // adding final transaction
  std::cout << "Transaction tree after addition: " << std::endl <<std::endl;
  TransactionTree.insert( x, x.getDate() );
  std::cout << TransactionTree << std::endl;





}
