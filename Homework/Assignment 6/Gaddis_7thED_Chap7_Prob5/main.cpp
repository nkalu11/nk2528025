/* File: Gaddis 7thED Chap7 Prob5
 * Author: Nnamdi Kalu
 * Created on July 25, 2014, 4:40 PM
 * Purpose homework problem 5
 */

//System Libraries
#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    //declare variables
      vector<int> hours;
      vector<float> payRate; 
      int numEmployees;       
      int index;              
     
     //user input prompt as well as input
      cout << "How many employees do you have? ";  
      cin >> numEmployees;  
      cout << "Enter the hours worked by " << numEmployees; 
      cout << " employees and their hourly rates.\n"; 
      
      //for loop to calculate each employee salery
      for (index = 0; index < numEmployees; index++)  
      { 
           int tempHours;  
           float tempRate; 
          
           
           cout << "Hours worked by employee #" << (index + 1);  
           cout << ": ";  
           cin >> tempHours;  
           hours.push_back(tempHours);     
           cout << "Hourly pay rate for employee #";  
           cout << (index + 1) << ": "; 
           cin >> tempRate;  
           payRate.push_back(tempRate); 
      }
       
     //output and for loop to calculate gross pay
   cout << "Here is the gross pay for each employee:\n"; 
   cout << fixed << showpoint << setprecision(2); 
   for (index = 0; index < numEmployees; index++) 
   {  
       float grossPay = hours[index] * payRate[index];  
       cout << "Employee #" << (index + 1); 
       cout << ": $" << grossPay << endl;  
   } 
   return 0;  
}
    
    
    
    
    
    
    
    
    
  