/* File: Gaddis 7thED Chap7 Prob2
 * Author: Nnamdi Kalu
 * Created on July 25, 2014, 4:40 PM
 * Purpose homework problem 2
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
      float payrate;  
      cout << "Enter the hours worked by ";  
      cout << NUM_EMPLOYEES << " employees who all\n"; 
      cout << "earn the same hourly rate.\n"; 
      
      //for loop for input of employee hours
      for (int index = 0; index < NUM_EMPLOYEES; index++)  
      {  
          cout << "Employee #" << (index + 1) << ": "; 
          cin >> hours[index]; 
      } 
      //input prompt 
      cout << "Enter the hourly pay rate for all the employees: ";  
      cin >> payrate;  
              cout << "Here is the gross pay for each employee:\n";  
      cout << fixed << showpoint << setprecision(2); 
      //for loop to calculate gross pay
      for (int index = 0; index < NUM_EMPLOYEES; index++)  
      {
          float grossPay = hours[index] * payrate;
          cout << "Employee #" << (index + 1); 
          cout << ": $" << grossPay << endl;  
      }
      return 0; 
}


 