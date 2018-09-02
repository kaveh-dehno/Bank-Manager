//
//  notsufficientfund.h
//  assignment 5
//
//  Created by kaveh on 11/25/2013.
//  Copyright (c) 2013 kaveh. All rights reserved.
//

#ifndef __assignment_5__notsufficientfund__
#define __assignment_5__notsufficientfund__

#include <iostream>
#include <stdexcept>

using namespace std;

class notsufficientfund : public runtime_error
{
public:
    notsufficientfund();
    
private:
    
};

#endif /* defined(__assignment_5__notsufficientfund__) */
