/*File: Gaddis Chapter 3 Problem 6
 * Author: Nnamdi Kalu
 *Created on June 26, 2014, 10:40 AM
 *Gaddis 7thED Chapter 2 Problem 6
 * Purpose Problem 6 in Gaddis 7thED Chapter 3
 */

#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
     
    //inputs
    float adultics; 
    float chiltic;
    
    //outputs
    float gbp;
    float nbp;
    
    //Inputs and Input commands
    cout<<"Wheels Of Fury"<<endl;
    cout<<"How Many Adult Tickets Where sold?"<<endl;
    cin>>adultics;
    cout<<"How Many Children Tickets Where Sold"<<endl;
    cin>>chiltic;
    
    //Outputs 
    cout<<"Adult Tickets Sold :"<<adultics<<endl;
    cout<<"Children Tickets Sold :"<<chiltic<<endl;
    
    //Varibles for simple addition of tickets sold
    float adticsa= adultics*6;
    float chiltsa= chiltic*3;
    float gticcomb= adticsa+chiltsa;
    float nticomb= gticcomb*.20;
    float amntpay= gticcomb* .80;

    //Final outputs 
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Gross Box Office Profits $"<<gticcomb<<endl;
    cout<<"Net Box Office Profits $"<<nticomb<<endl;
    cout<<"Ammount Paid $"<<amntpay<<endl;
    
    //Exit stage right

    return 0;
}

