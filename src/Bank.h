//
//  Bank.h
//  assignment 5
//
//  Created by kaveh on 11/13/2013.
//  Copyright (c) 2013 kaveh. All rights reserved.
//

#ifndef __assignment_5__Bank__
#define __assignment_5__Bank__

#include <iostream>
#include <string>

using namespace std;

class bank
{
public:
    bank( string );
    bank();
    virtual ~bank();
    virtual void print()=0;
    
    void printbank();
    
private:
    string name;
};

#endif /* defined(__assignment_5__Bank__) */
