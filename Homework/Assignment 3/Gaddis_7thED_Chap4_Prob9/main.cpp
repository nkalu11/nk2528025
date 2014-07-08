/*  File:Gaddis 7thED chapter 4 Problem 9
 * Author: Nnamdi Kalu
 * Created on July 7, 2014, 10:19 PM
 * Purpose: 9th problem of the third homework assignment
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
    char ch;
    
    //print command inputs
    cout<<"Enter a digit or a letter: "<<endl;
    ch =cin.get();
    
    //determine output based on iff statement
    if (ch >= '0' && ch<= '9')
        cout<<"You entered a digit"<<endl;
    else if (ch >= 'A' && ch <= 'Z')
        cout<<"You entered an uppercase letter"<<endl;
    else if (ch >= 'a' && ch <= 'z')
        cout<< "You entered a lower case letter"<<endl;
     else 
        cout<<ch<<" is not a letter or a number"<<endl;
    
    //Exit stage right
    
    return 0;
}

