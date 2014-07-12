/*File: Gaddis 7thEd Chap5 Problem2
 * Author: Nnamdi Kalu
 * Created on July 10, 2014, 12:46 PM
 * Purpose: The second homework problem for the 4th assignment
 */

//System Libraries

#include <iostream>

using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

   //declare variables 
   float ocean;
    
   float num1=1;
    
   //use while to find the raise in height 
   //ocean each year for the next 25 years
   //Then display it
    while (num1 <30)
    {
      ocean=  num1 * .0015;
      num1++;
      cout<<"The ocean has risen to "<< ocean<<" this year."<<endl;
      
    }
    
    
    
    
    
    return 0;
}

