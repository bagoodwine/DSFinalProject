// Authors: Bridget Goodwine & Hanjing Zhu
// Emails: bgoodwin@nd.edu & hzhu7@nd.edu
//
// transaction class for the data structures final project on blockchain

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include<iostream>
#include<cstdlib>
#include<string>
#include<iomanip>
#include<vector>

class Transaction{

private:
  std::string receiver;
  std::string sender;
  std::string amount;
  std::string date;


public:
  // default constructor
  Transaction() : receiver(" "), sender(" "), amount("$0.00"), date("-1/-1/-1") {}

  // overloaded constructor
  Transaction( std::string r, std::string s, std::string a, std::string d ) : receiver(r), sender(s), amount(a), date(d) {}

  // copy constructor
  Transaction( const Transaction& copy ) : receiver(copy.receiver), sender(copy.sender), amount(copy.amount), date(copy.date) {}

  // function that returns the information as a string
  std::string getString (){
      std::string result;
      result.append(this->receiver);
      result += ' ';
      result.append(this->sender);
      result += ' ';
      result.append(this->amount);
      result += ' ';
      result.append(this->date);
      return result;
  }

  int getDate() {
    // string minipulation syntax sources
    // http://www.cplusplus.com/reference/string/string/operator[]/
    // https://en.cppreference.com/w/cpp/string/basic_string/stol

    std::string datestring;
    std::string dates;
    for( unsigned int i = 0; i < date.length(); i++ ) {
      if( date[i] != 47 ) {
        // if it is not a '/'
        datestring += date[i];
      }
    }

    // integer date explination: we want the transactions to be
    // inserted in chronological order, so we are turning the
    // date into an int represented as year-month-day so that the
    // earliest transactions are printed first.
    // therefore you MUST add dates with an 0 in front of 1 like 01
    // first two spots = month 0, 1
    // second two spots = day 2, 3
    // third fourth spots = year 4, 5, 6

    // add year first
    for( int i = 4; i <= 7; i++ ) {
      dates += datestring[i];
    }
    // then month
    for( int i = 2; i <= 3; i++ ) {
      dates += datestring[i];
    }
    // then day
    for( int i = 0; i <= 1; i++ ) {
      dates += datestring[i];
    }
    // cast to an int
    int d = std::stoi(dates);
    return d;
  }

  // friend opperator
  friend std::ostream& operator<<( std::ostream& output, const Transaction& t ) {
    output << "Receiver: " << t.receiver << std::endl;
    output << "Sender: " << t.sender << std::endl;
    output << "Amount: " << t.amount << std::endl;
    output << "Date: " << t.date << std::endl;

    return output;
  }

};

#endif
