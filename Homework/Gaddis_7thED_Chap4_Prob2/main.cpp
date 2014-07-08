/*  File:Gaddis 7thED chapter 4 Problem 2
 * Author: Nnamdi Kalu
 * Created on July 7, 2014, 10:19 PM
 * Purpose: 2nd problem of the third homework assignment
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

    //Declare variable 
    float num1, num2;
    
    //print user commands for input
    cout<<"Enter a number."<<endl;
    cin>>num1;
    
    //print user commands for input
    cout<<"Enter another number."<<endl;
    cin>>num2;
    
    //declare variable for average
    float average = num1 / num2;
    
    //determine output based on if statement
    if (num2 == 0)
    {
        cout<<"It is impossible to dived a number by 0!"<<endl;
        cout<<"Rerun the program Please!"<<endl;
    }
        
    else 
    {cout<<num1<<"/"<<num2<<endl;
        cout<<"=";
        cout<<average<<endl;
        
    //exit stage right
    }
    
    
    
    return 0;
}

