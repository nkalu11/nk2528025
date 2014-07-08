/*  File:Gaddis 7thED chapter 4 Problem 1
 * Author: Nnamdi Kalu
 * Created on July 7, 2014, 10:19 PM
 * Purpose: 1st problem of the third homework assignment
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

    //declare variable
    int number;
    cout<<"Enter a number and I will tell you if it";
    cout<<" even or odd" <<endl; 
    cin>>number;
    
    //determine whether variable is even or odd
    if(number % 2 ==  0)
        cout<<number<<" is and even number!"<<endl;
     
    else 
        cout<<number<<" is and odd number."<<endl;
        
    //Exit stage right
    
    return 0;
}

