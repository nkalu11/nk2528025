/*File: Gaddis Chapter 6 Problem 5
 * Author: Nnamdi Kalu
 * Created on July 22, 2014, 12:05 PM
 * Purpose: Fifth problem of 5th homework assignment
 */

//System Prototypes
#include <iostream>
#include <iomanip>
using namespace std;


//Global Constants
 const float ADULT = 40.0;  
 const float SENIOR = 30.0;  
 const float CHILD = 20.0;  
 
//Function Prototype
void showFees(float, int);  
 
//Execution Begins Here
int main(int argc, char** argv) {


    //output user input prompt
         cout << "Testing an adult membership..."<<endl;
         cout << "Calling the showFees function with arguments "<<endl; 
         cout << ADULT << " and 10."<<endl;
         //call function
         showFees(ADULT, 10);
         
         //output user input prompt
         cout << "Testing a senior citizen membership..."<<endl;
         cout<< "Calling the showFees function with arguments "<<endl;
         cout<< SENIOR << " and 10."<<endl; 
         //call function
         showFees(SENIOR, 10);
         
         //output user input prompt
         cout << "Testing a child membership..."<<endl;  
         cout<< "Calling the showFees function with arguments "<<endl;
         cout<< CHILD << " and 10."<<endl;
         //call function
         showFees(CHILD, 10); 
         
         return 0;  
     }  
     

     void showFees(float memberRate, int months)  
     {  
         //input command prompt to user
         cout << "The total charges are $" 
              << (memberRate * months) << endl;
     }
    
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
       

