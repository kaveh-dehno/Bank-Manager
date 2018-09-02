//
//  saving.cpp
//  assignment 5
//
//  Created by kaveh on 11/15/2013.
//  Copyright (c) 2013 kaveh. All rights reserved.
//

#include "saving.h"

saving::saving(double inter, double bal, client *who)
:account(inter,bal,who)
{
    interest = 0;
}

saving::saving()
{

}

saving::~saving()
{

}

int saving::getsavinginterest()
{
    return interest;
}

void saving::setsavinginterest(double Interest)
{
    interest = Interest;
}

void saving::print()
{

}