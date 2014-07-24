/*File: Gaddis Chapter 6 Problem 4
 * Author: Nnamdi Kalu
 * Created on July 22, 2014, 12:05 PM
 * Purpose: Fouth problem of 5th homework assignment
 */

//System Prototypes
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constant

//Function Prototypes
  int square(int); 
  float square(float); 
//Execution Begins Here
int main(int argc, char** argv) {
    
       //declare variables
       int userInt;  
       float userFloat; 
      
       //format output to 2 decimal places
       cout << fixed << showpoint << setprecision(2);
       
       //user command prompt
       cout << "Enter an integer and a floating-point value: "; 
       //input command
       cin >> userInt >> userFloat; 
       
       //user input prompt, call square function
       cout << "Here are their squares: ";  
       //input command prompt
       cout << square(userInt) << " and " << square(userFloat);  
       
       return 0; 
} 



 

int square(int number)  

{  
    return number * number;  

}  


float square(float number) 

{ 
    return number * number; 
}

 

