/* File: Gaddis 7thED Chap7 Prob4
 * Author: Nnamdi Kalu
 * Created on July 25, 2014, 4:40 PM
 * Purpose homework problem 4
 */


//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants
const int NUM_DIVS = 3;      
const int NUM_QTRS = 4;     
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

      //Declare Variables
      float sales[NUM_DIVS][NUM_QTRS]; 
      float totalSales = 0;          
      int div, qtr;                     
      //User input prompt
      cout << "This program will calculate the total sales of\n";  
      cout << "all the company's divisions.\n"; 
      cout << "Enter the following sales information:\n\n"; 
     
      
     // Loop to calculate sales
      for (div = 0; div < NUM_DIVS; div++) 
      { 
          for (qtr = 0; qtr < NUM_QTRS; qtr++)  
          {  
              cout << "Division " << (div + 1);  
              cout << ", Quarter " << (qtr + 1) << ": $";  
              cin >> sales[div][qtr]; 
          }
          cout << endl; 
  
      }  
      
      //loop to add sales based on quarter
      for (div = 0; div < NUM_DIVS; div++)  
      {
          for (qtr = 0; qtr < NUM_QTRS; qtr++)  
              totalSales += sales[div][qtr];  
      } 
     //Output results
      cout << fixed << showpoint << setprecision(2);  
      cout << "The total sales for the company are: $";  
      cout << totalSales << endl; 
      return 0;  
}
    









