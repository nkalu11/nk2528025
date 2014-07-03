/*File: Gaddis Chapter 3 Problem 7
 * Author: Nnamdi Kalu
 *Created on June 26, 2014, 10:40 AM
 *Gaddis 7thED Chapter 2 Problem 6
 * Purpose Problem 7 in Gaddis 7thED Chapter 3
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
     
    //Variable to be assigned value for cookies eaten
    float cookies;
  
    //Prompt to input the ammount of cookies eaten
    cout<<"How many cookies did you eat"<<endl;
    cin>>cookies;

    //Variable to calculate calories consumed
    //from the ammount of cookies inputed
    float calate= cookies*75;
    
    //Presentation of results (ammount of cookies eaten)
    cout<<"You ate "<<calate<<" calories."<<endl;
   
    //Exit stage right 

    return 0;
}

