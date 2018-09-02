//
//  Date.h
//  assignment 5
//
//  Created by kaveh on 11/14/2013.
//  Copyright (c) 2013 kaveh. All rights reserved.
//

#ifndef __assignment_5__Date__
#define __assignment_5__Date__

#include <iostream>

using namespace std;

class Date
{
public:
    Date(int, int, int);
    Date();
    ~Date();
    bool operator<=(Date);
    bool operator>=(Date);
    
    void print();
    
private:
    int month;
    int day;
    int year;
};

#endif /* defined(__assignment_5__Date__) */
