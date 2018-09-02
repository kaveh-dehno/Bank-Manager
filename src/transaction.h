//
//  transaction.h
//  assignment 5
//
//  Created by kaveh on 11/20/2013.
//  Copyright (c) 2013 kaveh. All rights reserved.
//

#ifndef __assignment_5__transaction__
#define __assignment_5__transaction__

#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

class transaction
{
public:
    transaction(int,int,double,string,Date );
    transaction();
    ~transaction();
    
    int gettransactionNumber();
    string gettransactiontype();
    int getsource();
    double getamount();
    int getdestination();
    void print();
    Date getdate();
    
private:
    static double  totaltransaction;
    double   transactionNumber;
    double          Amount;
    int             source;
    int             destination;
    string          transactiontype;
    Date            transdate;
};

#endif /* defined(__assignment_5__transaction__) */
