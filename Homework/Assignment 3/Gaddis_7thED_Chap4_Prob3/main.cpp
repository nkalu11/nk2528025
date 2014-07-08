/*  File:Gaddis 7thED chapter 4 Problem 3
 * Author: Nnamdi Kalu
 * Created on July 7, 2014, 10:19 PM
 * Purpose: 3rd problem of the third homework assignment
 */

//System Level Libraries

#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global constants 

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {

    //declare variables
    char recngrad, employd;
    
    //print user command inputs
    cout<<"Thank You for your interest in Nnamdi's insurance!"<<endl;
    cout<<" Y=Yes N=NO"<<endl;
    cout<<"To see if you qualify for the special interest rate ";
    cout<<"fill out the questionair"<<endl;
    
    cout<<"Are you employed?"<<endl;
    cin>>employd;
    
    //determine output based on if statement
    if (employd == 'Y')
    { cout<<"Are you a recent Grad?"<<endl;
        cin>>recngrad;
        if (recngrad == 'Y')
        {
            cout<<"You qualify for the special interest rate!=]"<<endl;
        }
        else
        {cout<<"You must have graduated college within the last 2 years";
         cout<<" to qualify for the special interest rate."<<endl;
        }
    }
    
    else
    {cout<<"You must be employed in order to ";
        cout<<"qualify for the special interest rate."<<endl;
    }
                
                
     //exit stage right
                
                
    return 0;
}

