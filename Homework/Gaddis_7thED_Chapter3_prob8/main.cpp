/*File: Gaddis Chapter 3 Problem 8
 * Author: Nnamdi Kalu
 *Created on June 26, 2014, 10:40 AM
 *Gaddis 7thED Chapter 2 Problem 6
 * Purpose Problem 8 in Gaddis 7thED Chapter 3
 */

#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
 
   //Variable for the cost of replacing a home
   float homecos;
    
   //Command to input "homecos" value
   cout<<"What is the replacement cost of your home?"<<endl;
   cin>>homecos;
    
   //Variable for the minimum recommended home insurance
   float minins= homecos*.80;
   
   //Presentation of recommended insurance plan
   cout<<fixed<<showpoint<<setprecision(2);
   cout<<"It is recommended that you buy atleast";
   cout<<" $"<<minins<<" insurance."<<endl;

   //Exit stage right

    return 0;
}

