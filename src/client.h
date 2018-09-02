//
//  client.h
//  assignment 5
//
//  Created by kaveh on 11/14/2013.
//  Copyright (c) 2013 kaveh. All rights reserved.
//

#ifndef __assignment_5__client__
#define __assignment_5__client__

#include <iostream>
#include <string>
#include "Date.h"
#include "branch.h"
#include "account.h"

using namespace std;

class client
{
public:
    client(string, string , Date,string,string,branch* );
    client();
    ~client();
    
    void print();
    void addacount(int);
//    void printacounts(client *);
//    void setbalance(double);
    
    string getSIN();
    string getclientname();
    int getacountnumber();

    
private:
    string name;
    Date birthdate;
    string phonenumber;
    string address;
    string socialinsurance;
    static double total_client;
    branch Branch;
    
    static const int clientMaxaccount = 100;
    int acountclientArray[ clientMaxaccount ];
    static int acounts;
    static const unsigned int maxAccount = 1000000;
    int    accountArray[ maxAccount ];
    int acountnumber;
};
#endif /* defined(__assignment_5__client__) */
