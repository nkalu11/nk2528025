/*File: Gaddis Chapter 6 Problem 1
 * Author: Nnamdi Kalu
 * Created on July 22, 2014, 12:05 PM
 * Purpose: First problem of 5th homework assignment
 */


//System Prototypes
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constant

//Function Prototypes
  void calculateretail(float, float);
 
//Execution Begins Here
int main(int argc, char** argv) {

    
    //Declare variables
    float whsale, markup;
    
    
    //input command prompt to user
    cout<<"Input the Wholesale value of your product, then "<<endl;
    cout<<"input the markup percentage of your product."<<endl;
    //input
    cin >> markup >> whsale;
    
    //call function
    calculateretail(whsale, markup);
    
    
    
    return 0;
}



void calculateretail(float num1, float num2)
{
    //if else to determine whether number is positive or negative
    //then determines output based on this
    if(num1<0|| num2<0)
    {
        cout<<"Error, input a positive number"<<endl;
    }
    else
    {
    cout<<"The marked up amount is: $"<<(num1*num2)+num2<<endl;
    }
}