//
//  Bank.cpp
//  assignment 5
//
//  Created by kaveh on 11/13/2013.
//  Copyright (c) 2013 kaveh. All rights reserved.
//

#include "Bank.h"

bank::bank(string nam)
{
    name = nam;
}

bank::bank()
{
    name = "default bank name";
}

bank::~bank()
{
   // cout << "\nbank destructor is called\n";
}

void bank::printbank()
{
    cout << name;
}
