//
//  account.h
//  assignment 5
//
//  Created by kaveh on 11/15/2013.
//  Copyright (c) 2013 kaveh. All rights reserved.
//

#ifndef __assignment_5__account__
#define __assignment_5__account__

#include <iostream>
#include <string>
#include "client.h"

class client;

using namespace std;



class account
{
public:
    account(double,double,client *);
    account();
    ~account();
    
    void print();
    void incrementacoiunt();
    void setbalance(double);
    void withdraw(double);
    double getbalance();
    
    int getaccountnumber();
    int gettotalacount();
    
    
private:
    static int totalacount;
    int account_number;
    
    static const int maxacount = 1000000;
    int acountarray[10000];
    double   balance;
    string  sin;
 //   static const int manageracount = 1;
    
};
#endif /* defined(__assignment_5__account__) */
