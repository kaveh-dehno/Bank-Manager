//
//  transaction.cpp
//  assignment 5
//
//  Created by kaveh on 11/20/2013.
//  Copyright (c) 2013 kaveh. All rights reserved.
//

#include "transaction.h"

double transaction::totaltransaction = 0;

transaction::transaction(int from, int to,double money,string tp,Date d)
{
    transactionNumber = ++totaltransaction;
    source = from;
    destination = to;
    Amount = money;
    transactiontype = tp;
    transdate = d;
}

transaction::transaction()
{
    transactionNumber = 0;
    source = 0;
    destination = 0;
    Amount = 0.0;
}

transaction::~transaction()
{

}

int transaction::gettransactionNumber()
{
    return transactionNumber;
}

string transaction::gettransactiontype()
{
    return transactiontype;
}

int transaction::getsource()
{
    return source;
}

double transaction::getamount()
{
    return Amount;
}

int transaction::getdestination()
{
    return destination;
}

void transaction::print()
{
    cout << "\n the transaction is a " << transactiontype << " ,from: " << source << " ,to: " << destination << " ,on: " ;
    transdate.print();
}

Date transaction::getdate()
{
    return transdate;
}