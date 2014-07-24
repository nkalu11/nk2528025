/*File: Gaddis Chapter 6 Problem 8
 * Author: Nnamdi Kalu
 * Created on July 22, 2014, 12:05 PM
 * Purpose: Eighth problem of 5th homework assignment
 */

#include <iostream>
#include <iomanip>

using namespace std;
//User Libraries

//Global Constants
int num = 2; 

//Function Prototypes
 void anotherFunction();
 
 //Execution Begins Here
int main(int argc, char** argv) {
     
       //User input command prompt
       cout << "In main, num is " << num << endl; 
       //call other function
       anotherFunction();  
       //output result
       cout << "Back in main, num is " << num << endl;  
       
       return 0;  
   }  
   
   
   void anotherFunction()  
   {  
       //declare variable
       int num = 50;
       //print text showing the user that its in different function
       cout << "In anotherFunction, num is " << num << endl; 
       //showing user that function has changed again
       cout << "But, it is now changed to " << num << endl; 
   }