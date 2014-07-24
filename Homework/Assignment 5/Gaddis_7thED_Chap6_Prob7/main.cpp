/*File: Gaddis Chapter 6 Problem 7
 * Author: Nnamdi Kalu
 * Created on July 22, 2014, 12:05 PM
 * Purpose: Seven problem of 5th homework assignment
 */


//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
void showStatic();

//Execution Begins Here
int main(int argc, char** argv) {

       
    //for loop to test static variable
    for (int count = 0; count < 5; count++) 
        //call showStatic function
        showStatic(); 
    
    return 0;  
    }                     
    
    
    
    
    void showStatic()
    {  
        //declare variables
        static int statNum = 5;
        
        //Output result to user
        cout << "statNum is " << statNum << endl; 
        statNum++;  
    }

    
    
    
    
    


