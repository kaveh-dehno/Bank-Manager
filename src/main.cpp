//
//  main.cpp
//  Bank Manager:
//  This program acts as a Bank Manager. It can perform the following functions:
// 		* Add Branches
//		* Add Clients
//		* Add Accounts to clients
//		* Add Transactions
//		* Catches transactions with not enough sufficient funds
//		* Using Inheritance, Polymorphism, and Encapsulation for proper coding
//
//		* Running main.cpp with demonstrate this program with predefined inputs
//
//  Created by Kaveh Dehno on 11/13/2013.
//  Copyright (c) 2013 Kaveh Dehno. All rights reserved.
//

#include <iostream>
#include "bankmanager.h"
#include "branch.h"
#include "client.h"
#include "Date.h"
#include "account.h"
#include "checking.h"
#include "transaction.h"
#include "deposit.h"

using namespace std;

int main()
{

cout << "\n//  This program acts as a Bank Manager. It can perform the following functions:";
cout << "\n 		* Add Branches";
cout << "\n		* Add Clients";
cout << "\n		* Add Accounts to clients";
cout << "\n		* Add Transactions";
cout << "\n		* Catches transactions with not enough sufficient funds";
cout << "\n		* Using Inheritance, Polymorphism, and Encapsulation for proper coding";
cout << "\n";
cout << "\n		* Running main.cpp with demonstrate this program with predefined inputs. // \n";


    bankmanager dude;
    
    
    branch *one = new branch("RBC", "6000 guy", "514-111-1111");
    branch *two = new branch("RBC", "2121 st marc", "514-222-2222");
    
    client *kaveh = new client("kaveh", "du fort", Date(1,1,2001), "514-333-3333", "111", one);
    client *alberto = new client ("alberto", "laval", Date(2,2,2002), "514-444-4444", "222", two);
    
    dude.addbranch(one);
    dude.addbranch(two);
    
    dude.printbranched();
    

    dude.addclient(kaveh);
    dude.addclient(alberto);
    
    dude.printclient();
    
    
    
    saving *kavehzeropercent = new saving(0.0,0.0,kaveh);
    checking *kavehonepercent = new checking(1.0,1.1,kaveh);
    checking *kavehtwopercent = new checking(2.0,2.2,kaveh);
    saving *albertozeropercent = new saving(0.0,3.3,alberto);
    checking *albertoonepercent = new checking(1.0,4.4,alberto);
    checking *albertotwopercent = new checking(2.0,5.5,alberto);

    kavehzeropercent->account::print();
    kavehonepercent->account::print();
    kavehtwopercent->account::print();
    albertozeropercent->account::print();
    albertoonepercent->account::print();
    albertotwopercent->account::print();
    
    
    
    dude.addAccount(kaveh, kavehzeropercent);
    dude.addAccount(kaveh, kavehonepercent);
    dude.addAccount(kaveh, kavehtwopercent);
    
    dude.addAccount(alberto, albertozeropercent);
    dude.addAccount(alberto, albertoonepercent);
    dude.addAccount(alberto, albertotwopercent);
    
    dude.printallacounts();
 
  //  dude.printclientaccounts( kaveh );
    Date a(3,3,2003),b(1,1,2001),c(2,2,2002),d(1,1,2000),e(5,5,2005);
   
 //   throw;
    
    
    transaction *d1 = new transaction(0,3,100.0,"deposit",a);
    transaction *d2 = new transaction(0,3,130.0,"withdraw",b);
    transaction *d3 = new transaction(2,1,30.0,"transfer",c);
    
    try
    {
        dude.maketransaction(d1);
        dude.maketransaction(d2);
    }
    

     catch (notsufficientfund &notsuffund)
    {
        cout << "\n!!!!!!!!   exeption occured    !!!!!!!!" << notsuffund.what();
        
    }
    
    try
    {
        dude.maketransaction(d3);
    }
    
    
    catch (notsufficientfund &notsuffund)
    {
        cout << "\n!!!!!!!!   exeption occured    !!!!!!!!" << notsuffund.what();
 //       throw;
    }
    
//    throw;
    
  //  deposit d(3,20.0,b);
  //  deposit *deposit1 = new deposit(1, 20.0,b);
    
        dude.printtransactions();
    
    dude.transactionsbetweebdates(3, d, c);
    
//    dude.makedeposit(1, 20.0,a);
//    dude.makedeposit(2, 40.0,b);
//    dude.makedeposit(3, 60.0,c);
    
    
    
//    dude.makewithdraw(1, 10.0);
//    dude.makewithdraw(2, 20);
//    dude.makewithdraw(3, 30);
    
    
 //   dude.printtransactions();
    
    
    cout << "\nEnd of the program.\n";
    return 0;
}

