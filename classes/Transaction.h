// Authors: Bridget Goodwine & Hanjing Zhu
// Emails: bgoodwin@nd.edu & hzhu7@nd.edu
//
// transaction class for the data structures final project on blockchain

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include<iostream>
#include<cstdlib>
// include SHA-256 here as well?

class Transaction{

private:
  std::string reciever;
  std::string sender;
  double ammount;
  int day;
  int month;
  int year;

public:
  // default constructor
  Transaction() : reciever(" "), sender(" "), ammount(0), day(-1), month(-1), year(-1) {}

  // overloaded constructor
  Transaction( std::string r, std::string s, double a, int d, int m, int y ) : reciever(r), sender(s), ammount(a), day(d), month(m), year(y) {}

  // copy constructor
  Transaction( const Transaction& copy ) : reciever(copy.reciever), sender(copy.sender), ammount(copy.ammount), day(copy.day), month(copy.month), year(copy.year) {}

  // function that returns the information as a string

  // hash function

  // getter / setter methods 

};

#endif
