/* File:   Gaddis 7thED Chap3 Prob17
 * Author: Nnamdi Kalu
 * Created on July 1, 2014, 1:12 PM
 * purpose number 17 from chapter 3 of Gaddis
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    
    
    //Setting variables (intrate= intrest rate,
    //npay= the ammount of payments, 
    //loanamt= the ammount of the loan, 
    //payment= monthly payment on loan
    //totint= total interest paid
    float intrate;       //inputs
    unsigned int npay;   
    
    float loanamt;       //outputs
    float payment;       
    float totint;        
    
    //Printed commandeds for inputs
    cout<<"Loan Calculator"<<endl;
    cout<<"Loan amount Requested?"<<endl;
    cin>>loanamt;
    cout<<"The yearly interest rate in %"<<endl;
    cin>>intrate;
    cout<<"Number of monthly Payments"<<endl;
    cin>>npay;
    
    //calculated Outputs 
    intrate*=(1.0f/12/100);
    float temp=pow(1+intrate,npay);
    payment=intrate*temp/(temp-1)*loanamt;
    
    //total interest calculations 
    totint=npay*payment-loanamt;
    

    //Output Results for loan payment and the 
    //of the loan
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Payment = $"<<payment<<endl;
    cout<<"Cost of the Loan = $"<<totint<<endl;
    
    //Exit stage right!
    return 0;
}

