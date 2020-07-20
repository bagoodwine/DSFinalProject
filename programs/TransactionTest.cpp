// Authors: Bridget Goodwine & Hanjing Zhu
// Emails: bgoodwin@nd.edu & hzhu7@nd.edu
//
// test for the transaction class for the data structures final project on blockchain

#include<iostream>
#include<cstdlib>
#include "../classes/Transaction.h"

int main() {
  std::cout << "Testing transaction class... " << std::endl << std::endl;

  Transaction t("Obi-Wan Kenobi", "Yoda", "$44.52", "7/18/2020" );
  std::cout << "Transaction 1: " << std::endl;
  std::cout << t << std::endl;

  std::string tString = t.getString();
  std::cout << "Convert to one string: \n" << tString << std::endl;


  Transaction u("Leia Organa", "Han Solo", "$102.38", "6/20/2020" );
  std::cout << "Transaction 2: " << std::endl;
  std::cout << u << std::endl;
  std::string uString = u.getString();
  std::cout << "Convert to string: \n" << uString << std::endl;

  Transaction v("Anakin Skywalker", "Padme Amadala", "$12.57", "9/12/2017" );
  std::cout << "Transaction 3: " << std::endl;
  std::cout << v << std::endl;
  std::string vString = t.getString();
  std::cout << "Convert to string: \n" << vString << std::endl;

  Transaction w("Ashoka Tano", "Mace Windu", "$5.99", "12/1/2013" );
  std::cout << "Transaction 4: " << std::endl;
  std::cout << w << std::endl;
  std::string wString = w.getString();
  std::cout << "Convert to string: \n" << wString << std::endl;


  std::cout << "Goodbye." << std::endl;
  return 0;
}
