/* File: Gaddis 7thED Chap7 Prob6
 * Author: Nnamdi Kalu
 * Created on July 25, 2014, 4:40 PM
 * Purpose homework problem 6
 */


//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants
const int NUM_DIGITS = 7;
bool testPIN(const int [], const int [], int);
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

       //declare variables
       int pin1[NUM_DIGITS] = {2, 4, 1, 8, 7, 9, 0}; 
       int pin2[NUM_DIGITS] = {2, 4, 6, 8, 7, 9, 0}; 
       int pin3[NUM_DIGITS] = {1, 2, 3, 4, 5, 6, 7}; 
       
       // if statement to test if pins are different from pin1. 
       if (testPIN(pin1, pin2, NUM_DIGITS)) 
           cout << "ERROR: pin1 and pin2 report to be the same.\n";  
       else  
           cout << "SUCCESS: pin1 and pin2 are different.\n"; 
       
       if (testPIN(pin1, pin3, NUM_DIGITS))  
           cout << "ERROR: pin1 and pin3 report to be the same.\n"; 
       else 
           cout << "SUCCESS: pin1 and pin3 are different.\n";  
       
       if (testPIN(pin1, pin1, NUM_DIGITS))  
           cout << "SUCCESS: pin1 and pin1 report to be the same.\n";  
       else  
           cout << "ERROR: pin1 and pin1 report to be different.\n"; 
       return 0;  
}    
       
 //function to test pin and return a boolean value
 bool testPIN(const int custPIN[], const int databasePIN[], int size) 
{ 
 for (int index = 0; index < size; index++) 
{       if (custPIN[index] != databasePIN[index])
    return false; 
}    
 return true; 
}
    
    
    
 


