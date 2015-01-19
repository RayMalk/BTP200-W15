// Modular Example
// transaction.cpp

#include <iostream>
using namespace std;
#include "transaction.h"

// prompts for and accepts Transaction data

void enter(struct Transaction* tr)
{

     cout << "Enter the account number: ";
     cin  >> tr->acct;
     cout << "Enter the account type (d debit, c credit): ";
     cin  >> tr->type;
     cout << "Enter the amount: ";
     cin  >> tr->amount;
}

// displays Transaction data

void display(const struct Transaction* tr)
{

     cout << "Account: " << tr->acct;
     cout << ((tr->type == 'd') ? "\nDebit $" : "\nCredit $") << tr->amount; 
     cout << endl;
}
