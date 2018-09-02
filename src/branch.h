//
//  branch.h
//  assignment 5
//
//  Created by kaveh on 11/13/2013.
//  Copyright (c) 2013 kaveh. All rights reserved.
//

#ifndef __assignment_5__branch__
#define __assignment_5__branch__

#include <iostream>
#include <string>
#include "Bank.h"

using namespace std;

class branch : public bank
{
public:
    branch(string, string, string);
    branch();
    virtual ~branch();
    virtual void print();
    
    int getbranchnumber();

    
private:
    string address;
    int branch_number;
    string phone;
    static int totalbranch;
    
};

#endif /* defined(__assignment_5__branch__) */
