/*File: Gaddis Chapter 6 Problem 6
 * Author: Nnamdi Kalu
 * Created on July 22, 2014, 12:05 PM
 * Purpose: Sixth problem of 5th homework assignment
 */



//System Prototypes
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

void displayStars(int = 10, int = 1);
//Execution Begins Here
int main(int argc, char** argv) {
 {  
     //call functions
   displayStars(); 
   cout << endl;
   displayStars(5); 
   cout << endl;
   displayStars(7, 3); 
   
   return 0;  
}  


 void displayStars(int cols, int rows)  
 {    
     //for loop to initialize for loop
 }
   for (int down = 0; down < rows; down++)
 {   
       for (int across = 0; across < cols; across++) 
       {
           //for loop to output stars
       cout << "*";  
       cout << endl; 
       }
 }  
 }

