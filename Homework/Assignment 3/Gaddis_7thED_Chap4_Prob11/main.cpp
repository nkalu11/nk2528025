/*  File:Gaddis 7thED chapter 4 Problem 11
 * Author: Nnamdi Kalu
 * Created on July 7, 2014, 10:19 PM
 * Purpose: 11th problem of the third homework assignment
 */

#include <iostream>
#include <iomanip>

//System Level Libraries

using namespace std;

//User Libraries

//Global constants 

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
//this program uses two numbers withe name number
    
    //Define variable named number
    int number;
    
    //command user to input number value
    cout<<"Enter a number greater than 0: ";
    cin>>number;
    if (number> 0)
    {
        int number; //another variable named number
        cout<<"Now enter another number: "<<endl;
        cin>>number;
        cout<<"The second number you entered was "
                <<number<< endl;
    }
    
    //displays numbers <0
    cout<< "Your first number was "<< number<< endl;
                
    //exit stage right
    
    return 0;
}

