//
//  account.cpp
//  assignment 5
//
//  Created by kaveh on 11/15/2013.
//  Copyright (c) 2013 kaveh. All rights reserved.
//

#include "account.h"

int account::totalacount=0;



account::account(double inter, double bal,client *who)
{
    totalacount++;
    account_number = totalacount;
    balance = bal;
    sin = who->getSIN();
    who->addacount(account_number);
    
    /*
    for (int i=0; i < 10000; i++)
    {
        if ( acountarray[i] == 0 )
        {
            acountarray[i] = account_number;
            cout << "acount number: " << account_number;
            break;
        }
    }
  */
}

account::account()
{
    account_number = 0;
    balance = 0.0;
}

account::~account()
{

}

int account::getaccountnumber()
{
    return account_number;
}

void account::incrementacoiunt()
{
    
}

int account::gettotalacount()
{
    return totalacount;
}

void account::setbalance(double money)
{
    balance = balance + money;
}

void account::withdraw(double money)
{
    balance = balance - money;
}

void account::print()
{
    cout << "\nThe acount number is: " << account_number <<
    " ,the balance is: " <<  " $ " << balance;
}

double account::getbalance()
{
    return balance;
}
