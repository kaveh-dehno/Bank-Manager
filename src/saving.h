//
//  saving.h
//  assignment 5
//
//  Created by kaveh on 11/15/2013.
//  Copyright (c) 2013 kaveh. All rights reserved.
//

#ifndef __assignment_5__saving__
#define __assignment_5__saving__

#include <iostream>
#include "account.h"
#include "client.h"

using namespace std;

class saving :public account
{
public:
    saving(double, double, client *);
    saving();
    ~saving();
    int getsavinginterest();
    
    void setsavinginterest(double);
    void print();
    
    
private:
    int interest;
};
#endif /* defined(__assignment_5__saving__) */
