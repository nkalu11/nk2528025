/*File: Gaddis Chapter 6 Problem 10
 * Author: Nnamdi Kalu
 * Created on July 22, 2014, 12:05 PM
 * Purpose: tenth problem of 5th homework assignment
 */


#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

 //Function prototypes.
    void doubleNum(int &);   
    void getNum(int &);  
//Execution begins here
int main(int argc, char** argv) {
  
    //declare variable
    int value;  
    
    //call getNum and doubleNum function
    getNum(value);  
    doubleNum(value);  
    //Output the input prompt to user
    cout << "That value doubled is " << value << endl; 
    return 0; 
}  

 void getNum(int &userNum) 
 {  
     //prompt user to enter a variable 
     cout << "Enter a number: "; 
     //input
     cin >> userNum;  
 }  
 
 
void doubleNum (int &refVar)  
{  
    //declare variable
    refVar *= 2;  
}

