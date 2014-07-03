/*File: Gaddis Chapter 3 Problem 9
 * Author: Nnamdi Kalu
 *Created on June 26, 2014, 10:40 AM
 *Gaddis 7thED Chapter 2 Problem 6
 * Purpose Problem 9 in Gaddis 7thED Chapter 3
 */

#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Variables 
    float loanpay, insur, gas, oil, tires, mantins;

    //Prrinted commands for variable input
    cout<<"Please enter the following ammounts from";
    cout<<"your monthly car payments"<<endl;
    cout<<"Loan Payment"<<endl;
    cin>>loanpay;
    cout<<"Insurance Payment"<<endl;
    cin>>insur;
    cout<<"Gas Payment"<<endl;
    cin>>gas;
    cout<<"Oil Payment"<<endl;
    cin>>oil;
    cout<<"Tire Payment"<<endl;
    cin>>tires;
    cout<<"Maintenance Payment"<<endl;
    cin>>mantins;

    //Math done to find total ammount 
    //spent during the year on car parts,
    //results are then assigned to variables
    float add= insur+gas+oil+tires+mantins;
    float addyear= add*12;

    //Presentation of the monthly and annual bill
    cout<<"Month Bill: $"<<add<<endl;
    cout<<"Annual Bill: $"<<addyear<<endl;
    
    //Exit stage right

    return 0;
}

