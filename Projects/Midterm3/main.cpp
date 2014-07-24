/* 
 * File:   main.cpp
 * Author: teachers
 *
 * Created on July 17, 2014, 7:21 AM
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //Declare variables
    unsigned short input; 
    int pin;
    
    //Prompt user to input the debit pin code
    cout<<"Please enter debit card pin number!(1234)"<<endl;
    cin>>pin;
    
    //Determine if the pin is correct or not
    if(pin == 1234)
    {
        //Declare variables
    unsigned short input2, input3, input4, amninp;
    unsigned short inibal, inptcrd;
    int totl=0;
    
    //Prompt user to input the initial balance]
    cout<<"What was the initial balance of the card?"<<endl;
    cin>>inibal;
   
    //output initial value
    cout<<"Initial balance on card was $"<<inibal<<"."<<endl;
    
    //Ask user how many times they added to card this month
    cout<<"How many times did you add cash to your debit card this month?."<<endl;
    cin>>inptcrd;
    
    //Accumulator to add all credits inputed
    for (int count = 1; count <= inptcrd; count++ )
    {
        cout<<"Please enter the amounts you added to your card."<<endl;
        cin>>amninp;
                totl += amninp;
    }
    
    //Declare variables
    int totbal= totl+inibal;
    
    //Output The total amount originally on card
    cout<<"The total balance on the card was $"<<totbal<<"."<<endl;
    
    //Prompt user to input the amounts spent that month 
    cout<<"Input the amounts spent this month."<<endl;
    cin>>input2>>input3>>input4;
    
    //Declare variables
    int total = input2+input3+input4;
    int difference = totbal-total;
    
    //Output the users balance
    cout<<"Your balance is $"<<difference<<"."<<endl;
    
    //If the user over drafted tell them that 
    //$27.75 will be deducted from their account
    //Add 27.75 to the balance on the card
    if(difference<0)
    {
        
        cout<<"Because you've overdrawn, an additional fee of";
        cout<<" $27.75 has been charged to your account."<<endl;
        short neblance = difference - 27.75;
        cout<<"The resulting balance is $"<<neblance<<"."<<endl;
    }
        //If user inputed wrong pin, have them re-input
    }
    else
    {
        cout<<"You've entered the wrong pin number."<<endl;
        cout<<"Rerun the program and input the correct pin number."<<endl;
    }
    
    return 0;
}
