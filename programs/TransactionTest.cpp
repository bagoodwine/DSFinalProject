// Authors: Bridget Goodwine & Hanjing Zhu
// Emails: bgoodwin@nd.edu & hzhu7@nd.edu
//
// test for the transaction class for the data structures final project on blockchain

#include<iostream>
#include<cstdlib>
#include "../classes/Transaction.h"

int main() {
  std::cout << "Testing transaction class... " << std::endl << std::endl;

  Transaction t("Obi-Wan Kenobi", "Yoda", (double)44.52, 7, 18, 2020 );
  std::cout << "Transaction 1: " << std::endl;
  std::cout << t << std::endl;

  Transaction u("Leia Organa", "Han Solo", (double)102.38, 6, 20, 2020 );
  std::cout << "Transaction 2: " << std::endl;
  std::cout << u << std::endl;

  Transaction v("Anakin Skywalker", "Padme Amadala", (double)12.57, 9, 12, 2017 );
  std::cout << "Transaction 3: " << std::endl;
  std::cout << v << std::endl;

  Transaction w("Ashoka Tano", "Mace Windu", (double)5.99, 12, 1, 2013 );
  std::cout << "Transaction 4: " << std::endl;
  std::cout << w << std::endl;

  
  std::cout << "Goodbye." << std::endl;
  return 0;
}
