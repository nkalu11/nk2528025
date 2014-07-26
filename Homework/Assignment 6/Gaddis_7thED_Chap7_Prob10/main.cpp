/* File: Gaddis 7thED Chap7 Prob10
 * Author: Nnamdi Kalu
 * Created on July 25, 2014, 4:40 PM
 * Purpose homework problem 10
 */


//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants
const int NUM_EMPLOYEES = 5;  
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

      
    //declare variables
    int hours[NUM_EMPLOYEES];    
    float payRate[NUM_EMPLOYEES]; 
    
    //output for user input
    cout << "Enter the hours worked by " << NUM_EMPLOYEES 
            << " employees and their\n"  
            << "hourly pay rates.\n"; 
    //for loop to determine based on arguments passed on to it, the hours
    //the emplyee salary
    for (int index = 0; index < NUM_EMPLOYEES; index++) 
    {
        cout << "Hours worked by employee #" << (index+1) << ": "; 
        cin >> hours[index]; 
        cout << "Hourly pay rate for employee #" << (index+1) << ": ";
        cin >> payRate[index];  
    }  
    
    //output 
    cout << "Here is the gross pay for each employee:\n"; 
    cout << fixed << showpoint << setprecision(2); 
    //for loop to determine gross pay
    for (int index = 0; index < NUM_EMPLOYEES; index++)  
    {  
        double grossPay = hours[index] * payRate[index];
        cout << "Employee #" << (index + 1); 
        cout << ": $" << grossPay << endl; 
    } 
    return 0; 
}


