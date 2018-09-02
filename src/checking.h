//
//  checking.h
//  assignment 5
//
//  Created by kaveh on 11/15/2013.
//  Copyright (c) 2013 kaveh. All rights reserved.
//

#ifndef __assignment_5__checking__
#define __assignment_5__checking__

#include <iostream>
#include "account.h"

class checking : public account
{
public:
    checking(double,double,client *);
    checking();
    ~checking();
    
    void print();
    
private:
    double interest;
};

#endif /* defined(__assignment_5__checking__) */
