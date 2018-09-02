//
//  Date.cpp
//  assignment 5
//
//  Created by kaveh on 11/14/2013.
//  Copyright (c) 2013 kaveh. All rights reserved.
//

#include "Date.h"

Date::Date(int dy, int mn,int yr)
{
    day = dy;
    month = mn;
    year = yr;
}

Date::Date()
{
    day = 1;
    month = 1;
    year = 1900;
}

Date::~Date()
{

}

void Date::print()
{
    cout << day << "/" << month << "/" << year ;
    
}

bool Date::operator<=(Date which)
{
    if ((day <= which.day ) && (month <= which.month) && (year <= which.year) )
    {
        return true;
    }
    return false;
}

bool Date::operator>=(Date which)
{
    if ((day >= which.day ) && (month >= which.month) && (year >= which.year) )
    {
        return true;
    }
    return false;
}
