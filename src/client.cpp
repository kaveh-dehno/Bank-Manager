//
//  client.cpp
//  assignment 5
//
//  Created by kaveh on 11/14/2013.
//  Copyright (c) 2013 kaveh. All rights reserved.
//

#include "client.h"

double client::total_client =0;

int client::acounts=0;

client::client(string nam, string addre, Date bd, string phone, string SIN, branch* whichBranch)
:birthdate(bd),Branch(*whichBranch)
{
    total_client++;
    name = nam;
    phonenumber = phone;
    address = addre;
    socialinsurance = SIN;
    acountnumber = ++acounts;


    
 
}

client::client()
:birthdate()
{
    acountnumber = 0;
    name = "default";
    address = "default";
    socialinsurance = "defualt";
    phonenumber = "defulat";

}

client::~client()
{
    
}

void client::addacount(int num)
{
    acountnumber = num;
    
    
        /*
    for (int i=0; i < clientMaxaccount ; i++)
    {
        if ( acountclientArray[i] == 0 )
        {
            acounts++;
            acountclientArray[i] = acounts;
            for (int j=0; j < maxAccount; j++)
            {
                if (accountArray[i] == 0)
                {
                
                accountArray[j] = acounts;
           //     cout << "\nthe new account number is: ";
           //     cout << acounts;
                break;
                }
            }
         //   cout << "\nthe new account number is: ";
         //   cout << acountclientArray[i] << endl;
            break;
        }
    }
    */
}
/*
void client::printacounts(client * who)
{
    for (int i=0; i < clientMaxaccount; i++)
    {
        
        if ( acountclientArray[i]->getaccountnumber() != 0)
        {
            cout << "\nAccounts numbers under this client name: ";
            cout << acountclientArray[i]->getaccountnumber();
            
        }
    }
}
*/

string client::getSIN()
{
    return socialinsurance;
}

void client::print()
{
    cout << "\nclient name: " << name << " ,resides on: " << address << " ,was born on: ";
    birthdate.print();
    cout << " ,his phone number is: " << phonenumber <<" ,he holds the SIN: " << socialinsurance  << " ,and his branch number is: ";
    cout << Branch.getbranchnumber() << " ,his acount number is:" << acountnumber <<endl;
    
}

string client::getclientname()
{
    return name;
}

int client::getacountnumber()
{
    /*
    for( int i=0; i< maxAccount; i++)
    {
        if (<#condition#>) {
            <#statements#>
        }
    }*/
    return acountnumber;
}
/*
void account::setbalance(double money)
{
    balance = money;
}
*/