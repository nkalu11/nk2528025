/*File: Gaddis Chapter 3 Problem 4
 * Author: Nnamdi Kalu
 *Created on June 26, 2014, 10:40 AM
 *Gaddis 7thED Chapter 2 Problem 6
 * Purpose Problem 4 in Gaddis 7thED Chapter 3
 */

#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Varibales to be asigned test values
    int test1, test2, test3, test4, test5;


   //Prompt to enter test score values
   cout<<"Type in 5 homework test scores"<<endl;
   cin>>test1>>test2>>test3>>test4>>test5;

   //Variable for added test score values
   int addtest= test1+test2+test3+test4+test5;

   //Average calculated for the test score values
   int average = addtest*(2.0e-1);

   //Presentation of results
   cout<<"Your average test score is: "<< average<<"%."<<endl;
    
   //Exit stage right

    return 0;
}

