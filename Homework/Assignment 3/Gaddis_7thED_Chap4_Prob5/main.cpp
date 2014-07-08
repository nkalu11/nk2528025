/*  File:Gaddis 7thED chapter 4 Problem 5
 * Author: Nnamdi Kalu
 * Created on July 7, 2014, 10:19 PM
 * Purpose: 5th problem of the third homework assignment
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
    float tescore;
    
    //user input commands
    cout<<"Enter your test score here";
    cout<<" in order to receive a letter grade."<<endl;
    
   
    cin>>tescore;
   
    //determine output based on if statement
    if (tescore < 0 || tescore > 100)
    {
    cout<<setprecision(2)<<fixed;
    cout<<tescore<<" is an invalid score!"<<endl;
    cout<<"rerun the program and enter a valid test score."<<endl;
    }
    else
    {
        if (tescore <60)
            cout<<"your letter grade is an F."<<endl;
        else if (tescore <70)
            cout<<"your letter grade is an D."<<endl;
        else if (tescore <80)
            cout<<"your letter grade is an C."<<endl;
        else if (tescore <90)
            cout<<"your letter grade is an B."<<endl;
        else if (tescore <=100)
            cout<<"your letter grade is an A."<<endl;
    }
   
    //exit stage right
    
    return 0; 
    
}

