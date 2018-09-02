//
//  bankmanager.h
//  assignment 5
//
//  Created by kaveh on 11/13/2013.
//  Copyright (c) 2013 kaveh. All rights reserved.
//

#ifndef __assignment_5__bankmanager__
#define __assignment_5__bankmanager__

#include <iostream>
#include <string>
#include "bank.h"
#include "branch.h"
#include "client.h"
#include "account.h"
#include "saving.h"
#include "transaction.h"
#include "deposit.h"
#include "notsufficientfund.h"

using namespace std;

class bankmanager
{
public:
    bankmanager();
    ~bankmanager();
    
    void addbranch(branch *);
    void printbranched();
    void addclient(client *);
    void printclient();
    void addAccount(client* ,account *);
    void setsavinginterest(double);
    void printclientaccounts(client*);
    void makedeposit(int,double,Date);
    void makewithdraw(int, double);
    void printtransactions();
    void maketransaction(transaction *);
    void transactionsbetweebdates(int,Date,Date);
    
    void printallacounts();
    
    
private:
    static const int maxBranch = 100;
    static const int maxClient = 2000;
    static const int maxAcounts=10000;
    static const unsigned int maxTransaction = 10000;
    
    branch          *branchArray[ maxBranch ];
    client          *clientArray[ maxClient ];
    account         *acountArray[ maxAcounts ];
    transaction     *transactionrecordArray[ maxTransaction ];
    
};

#endif /* defined(__assignment_5__bankmanager__) */
