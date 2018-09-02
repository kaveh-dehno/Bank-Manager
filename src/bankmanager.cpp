//
//  bankmanager.cpp
//  assignment 5
//
//  Created by kaveh on 11/13/2013.
//  Copyright (c) 2013 kaveh. All rights reserved.
//

#include "bankmanager.h"


bankmanager::bankmanager()
{
    for (int i = 0; i < maxBranch ; i++)
    {
        branchArray[i] = new branch();

    }

    for (int i = 0; i < maxClient; i++)
    {
        clientArray[i] = new client();
    }
    

    
    for (int i=0; i < maxTransaction; i++)
    {
        transactionrecordArray[i] = new transaction();
    }
    
    for (int i=0; i < maxAcounts; i++)
    {
        acountArray[i] = new account();
    }
    
}

bankmanager::~bankmanager()
{
    
    for (int i = 0; i < maxBranch ; i++)
    {
       delete  branchArray[i];
    }

    for (int i=0; i < maxClient; i++)
    {
        delete clientArray[i];
    }
    
    for (int i=0; i < maxTransaction; i++)
    {
       delete  transactionrecordArray[i] ;
    }
    
    
    for (int i=0; i < maxAcounts; i++)
    {
        delete acountArray[i];
    }
     
    
}


void bankmanager::addbranch( branch * nam)
{
    for (int i = 0 ; i < maxBranch ; i++)
    {
        if (branchArray[i]->getbranchnumber() == 0 )
        {
            branchArray[i] = nam;
            cout << "\nbranch has been added succesfully.\n";
            break;
        }
    }
}

void bankmanager::printbranched()
{
    for (int i = 0 ; i < maxBranch ; i++  )
    {
        
        if ( branchArray[i]->getbranchnumber() != 0 )
        {
            branchArray[i]->print();
        }
        
    }
}

void bankmanager::addclient( client * Client)
{
    for (int i = 0; i < maxClient; i++)
    {
        if ( clientArray[i]->getSIN() == "defualt")
        {
            clientArray[i] = Client;
            cout << "\nClient: ";
            cout << clientArray[i]->getclientname();
            cout << " has been successfully added.\n";
            break;
        }
    }
}


void bankmanager::printclient()
{
    cout << "\nclient listing: ";
    for (int i = 0; i < maxClient ; i++)
    {
        if (clientArray[i]->getSIN() != "defualt")
        {
            clientArray[i]->print();
        }
    }
    
    cout << "\nEnd of client list.\n";
}

/*
void bankmanager::setsavinginterest( double interest)
{
    saving::setsavinginterest( interest );
}
*/



void bankmanager::addAccount(client* who, account *type)
{
    for (int i=0; i < maxClient; i++)
    {
        if ( clientArray[i]->getSIN() == who->getSIN() )
        {
            
          //  int temp = type->getaccountnumber();
         //   cout << temp;
            cout << "\nacount number: " << type->getaccountnumber();
            clientArray[i]->addacount( type->getaccountnumber() );
            for (int j=0; j < maxAcounts; j++)
            {
                
              
                if (acountArray[j]->getaccountnumber() == 0)
                {
                
                    acountArray[j]=type;
                    break;
                }
            }
            
            /*
            
            for (int j=0; j < maxAcounts; j++)
            {
                
               cout << "   " <<acountArray[j]->getaccountnumber();
                if (acountArray[j]->getaccountnumber() == 0 )
                {
                    cout << acountArray[j]->getaccountnumber();
                    cout << "    here    ";
                    account A(0.0,0.0);
                    acountArray[j] = &A;
                    break;
                }
            }
            
            
            clientArray[i]->addacount();
            
            
            for (int j=0 ; j < maxAcounts ; j++)
            {
                if ( acountArray[j]->getaccountnumber() == 0)
                {
                    
                    //   acountArray[j] = &type;
                    //   cout << "\nthe new account number is: ";
                    //   cout << acounts;
                    break;
                }
            }
            
            */
            cout << " has been added succesfully for: ";
            cout << who->getclientname();
            cout << endl;
            
        }
        
    }
}




/*
void bankmanager::addAccount(client* who, account type)
{
    for (int i=0; i < maxClient; i++)
    {
        if ( clientArray[i]->getSIN() == who->getSIN() )
        {
            
            
            
            clientArray[i]->addacount();
            
            
            for (int j=0 ; j < maxAcounts ; j++)
            {
                if ( acountArray[j]->getaccountnumber() == 0)
                {
                    
                 //   acountArray[j] = &type;
                 //   cout << "\nthe new account number is: ";
                 //   cout << acounts;
                    break;
                }
            }
             
            
            cout << "\na new account has been added succesfully for: ";
            cout << who->getclientname();
            cout << endl;
            
        }

    }
}
 */
void bankmanager::printallacounts()
{
    cout << "\nlisting all accounts: \n";
    for (int i=0; i < maxAcounts; i++)
    {
      //  cout << acountArray[i]->getaccountnumber() ;
       if( acountArray[i]->getaccountnumber() != 0)
       {      
         //  cout << acountArray[i]->getaccountnumber() << endl;
           acountArray[i]->print();
       }
    }
    
    cout <<"\nEnd of acount listing.\n";
}
/*

void bankmanager::printclientaccounts( client *who)
{
    for (int i=0; i < maxClient; i++)
    {
        if ( clientArray[i]->getSIN() == who->getSIN())
        {
            clientArray[i]->printacounts(who);
        }
    }
}

*/

void bankmanager::maketransaction(transaction *tp)
{
    if (tp->gettransactiontype() == "deposit")
    {
        
        for (int i=0; i < maxAcounts; i++)
        {
            if (acountArray[i]->getaccountnumber() == tp->getdestination() )
            {
                
                
                acountArray[i]->setbalance(tp->getamount());
                cout <<"\nsuccessful deposit.";
                acountArray[i]->print();
                
                
                for (int j=0; j< maxTransaction; j++)
                {
                    if (transactionrecordArray[j]->gettransactionNumber() == 0)
                    {
                        transactionrecordArray[j] = tp;
                        break;
                    }
                }
                break;
                
            }
        }
    }
    
    if (tp->gettransactiontype() == "withdraw")
    {
        
        for (int i=0; i < maxAcounts; i++)
        {
            if (acountArray[i]->getaccountnumber() == tp->getdestination() )
            {
                
                if (tp->getamount() > acountArray[i]->getbalance() )
                    
                    {
                        throw notsufficientfund();
                    }
                
                acountArray[i]->withdraw(tp->getamount());
                cout <<"\nsuccessful withdraw.";
                acountArray[i]->print();
                
                
                for (int j=0; j< maxTransaction; j++)
                {
                    if (transactionrecordArray[j]->gettransactionNumber() == 0)
                    {
                        transactionrecordArray[j] = tp;
                        break;
                    }
                }
                break;
                
            }
        }
    }
  
    if (tp->gettransactiontype() == "transfer")
    {
        
        for (int i=0; i < maxAcounts; i++)
        {
            if (acountArray[i]->getaccountnumber() == tp->getsource() )
            {
                if (tp->getamount() > acountArray[i]->getbalance() )
                    
                {
                    throw notsufficientfund();
                }
                
                
                cout << "\ntransfer from: " << tp->getsource();
                cout << " to: " << tp->getdestination();
                acountArray[i]->withdraw(tp->getamount());
        //        cout <<"\nsuccessful transfer.";
                acountArray[i]->print();
                
                
                for (int j=0; j< maxAcounts; j++)
                {
                    
                
                if (acountArray[j]->getaccountnumber() == tp->getdestination() )
                {
                    acountArray[j]->setbalance(tp->getamount());
                    acountArray[j]->print();
                    cout <<"\nsuccessful transfer.";
                    break;
                }
                
                }
                
                for (int j=0; j< maxTransaction; j++)
                {
                    if (transactionrecordArray[j]->gettransactionNumber() == 0)
                    {
                        transactionrecordArray[j] = tp;
                        break;
                    }
                }
                break;
                
            }
        }
    }
    
}

void bankmanager::makedeposit(int to, double money,Date d)
{
    for (int i=0; i < maxClient; i++)
    {
        if (acountArray[i]->getaccountnumber() == to )
        {
            
            
            acountArray[i]->setbalance(money);
            cout <<"\nsuccessful deposit.";
            acountArray[i]->print();
            
            
      //      deposit *a = new deposit(to,money,d);
            
            
            for (int j=0; j< maxTransaction; j++)
            {
                if (transactionrecordArray[j]->gettransactionNumber() == 0)
                {
      //              transactionrecordArray[j] = a;
                }
            }
            break;

        }
    }
}


void bankmanager::makewithdraw(int to, double money)
{
    for (int i=0; i < maxClient; i++)
    {
        if (acountArray[i]->getaccountnumber() == to )
        {
            
            
            acountArray[i]->withdraw(money);
            cout <<"\nsuccessful withdraw.";
            acountArray[i]->print();
            break;
            
        }
    }
}
/*
record transaction
{

    deposit a(from,money);
    for (int i=0; i < maxTransaction; i++)
    {
        if (transactionrecordArray[i]->gettransactionNumber() == 0)
        {
            transactionrecordArray[i] = ;
        }
    }

}

*/
 

void bankmanager::printtransactions()
{
    cout << "\nthe transctions are: ";
    for (int i=0; i < maxTransaction; i++)
    {
        if (transactionrecordArray[i]->gettransactionNumber() !=0 )
        {
            
             transactionrecordArray[i]->print();
          
        }
    }
}
 

void bankmanager::transactionsbetweebdates(int num,Date from, Date to)
{
    cout << "\ntransactions for account: " << num  << " ,from: ";
    from.print();
    cout << " ,to: ";
    to.print() ;
    for (int i=0; i<maxTransaction; i++)
    {
        if ((transactionrecordArray[i]->getsource() == num) || (transactionrecordArray[i]->getdestination()) == num)
        {
            
            
            if ( (from <= transactionrecordArray[i]->getdate()) &&
                (transactionrecordArray[i]->getdate() <=  to ))
            {
                
                transactionrecordArray[i]->print();
            }
        }
    }
}




