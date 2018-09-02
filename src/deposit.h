//
//  deposit.h
//  assignment 5
//
//  Created by kaveh on 11/20/2013.
//  Copyright (c) 2013 kaveh. All rights reserved.
//

#ifndef __assignment_5__deposit__
#define __assignment_5__deposit__

#include <iostream>
#include "Date.h"

#include "transaction.h"

class deposit : public transaction
{
public:
    deposit(int ,double ,Date );
    deposit();
    ~deposit();
    
    
private:

    
};

#endif /* defined(__assignment_5__deposit__) */
