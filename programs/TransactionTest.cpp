// Authors: Bridget Goodwine & Hanjing Zhu
// Emails: bgoodwin@nd.edu & hzhu7@nd.edu
//
// test for the transaction class for the data structures final project on blockchain

#include<iostream>
#include<cstdlib>
#include "../classes/Transaction.h"
#include "../classes/hash.h"

int main() {
  std::cout << "Testing transaction class... " << std::endl << std::endl;

  Transaction t("Obi-Wan Kenobi", "Yoda", "$44.52", "07/18/2020" );
  Transaction u("Leia Organa", "Han Solo", "$102.38", "06/20/2020" );
  Transaction v("Anakin Skywalker", "Padme Amadala", "$12.57", "09/12/2017" );
  Transaction w("Ashoka Tano", "Mace Windu", "$5.99", "12/01/2013" );
  Transaction x("Obi-Wan Kenobi", "Luke Skywalker", "$87.55", "03/23/2019");

  std::cout << "Transaction 1: " << std::endl;
  std::string tString = t.getString();
  std::cout << "Get string:" << tString << std::endl;
  std::cout << "Hashed result: " << hash(tString) << std::endl;
  std::cout << "Get date: " << t.getDate() << std::endl << std::endl;

  std::cout << "Transaction 2: " << std::endl;
  // std::cout << u << std::endl;
  std::string uString = u.getString();
  std::cout << "Get string:" << uString << std::endl;
  std::cout << "Hashed result: " << hash(uString) << std::endl;
  std::cout << "Get date: " << u.getDate() << std::endl << std::endl;

  std::cout << "Transaction 3: " << std::endl;
  // std::cout << v << std::endl;
  std::string vString = t.getString();
  std::cout << "Get string:" << vString << std::endl;
  std::cout << "Hashed result: " << hash(vString) << std::endl;
  std::cout << "Get date: " << v.getDate() << std::endl << std::endl;

  std::cout << "Transaction 4: " << std::endl;
  // std::cout << w << std::endl;
  std::string wString = w.getString();
  std::cout << "Get string:" << wString << std::endl;
  std::cout << "Hashed result: " << hash(wString) << std::endl;
  std::cout << "Get date: " << w.getDate() << std::endl << std::endl;

  std::cout << "Transaction 5: " << std::endl;
  // std::cout << w << std::endl;
  std::string xString = x.getString();
  std::cout << "Get string:" << xString << std::endl;
  std::cout << "Hashed result: " << hash(xString) << std::endl;
  std::cout << "Get date: " << x.getDate() << std::endl << std::endl;

//  std::cout << "Goodbye." << std::endl;
  return 0;
}
