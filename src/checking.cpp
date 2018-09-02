//
//  checking.cpp
//  assignment 5
//
//  Created by kaveh on 11/15/2013.
//  Copyright (c) 2013 kaveh. All rights reserved.
//

#include "checking.h"

checking::checking(double inter, double bal, client *who)
:account(inter, bal,who)
{
    interest = ( inter/100 );
}

checking::checking()
{

}

checking::~checking()
{

}

void checking::print()
{

}