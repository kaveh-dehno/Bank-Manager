//
//  branch.cpp
//  assignment 5
//
//  Created by kaveh on 11/13/2013.
//  Copyright (c) 2013 kaveh. All rights reserved.
//

#include "branch.h"

int branch::totalbranch=0;

branch::branch(string namu, string addres, string phon)
:bank(namu)
{

    totalbranch++;
    address = addres;
    branch_number = totalbranch;
    phone = phon;
}

branch::branch()
:bank()
{
    address = "default branch address";
    branch_number = 0;
    phone = "default branch phone";
}

branch::~branch()
{
  //   cout << "\nbranch destructor is called.\n";
}

void branch::print()
{
    bank::printbank();
    cout << " ,has the branch id: " << branch_number << " ,its address is: " << address << " ,with phone number: " << phone << endl;
    
}

int branch::getbranchnumber()
{
    return branch_number;
}



