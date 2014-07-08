/*  File:Gaddis 7thED chapter 4 Problem 4
 * Author: Nnamdi Kalu
 * Created on July 7, 2014, 10:19 PM
 * Purpose: 4th problem of the third homework assignment
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

    //declare variable
    float grade;
    cin>>grade;
    
    //determine output based on if statement
    if (grade < 60)
        cout<<"Your grade is an F."<<endl;
    else if (grade < 70)
        cout<<"Your grade is a D."<<endl;
    else if (grade < 80)
        cout<<"Your grade is a C."<<endl;
    else if (grade < 90)
        cout<<"Your grade is a B!"<<endl;
    else if (grade <= 100)
        cout<<"Your grade is an A"<<endl;
    else 
        cout<<"You can't have earned more than 100 points!"<<endl;
    
    //exit stage right
    
    return 0;
}

