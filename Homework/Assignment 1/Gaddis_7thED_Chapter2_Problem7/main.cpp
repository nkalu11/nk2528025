/* File: Gaddis 7thED Chapter2 Problem 7
 * Author: Nnamdi Kalu
 * Created on June 26, 2014, 12:04 PM
 * Purpose 7th homework problem from Gaddis chapter 2
 */

//System Level Libraries

#include <iostream>

using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {

    //the car can travel 350 miles
    float distnce= 350;
    
    //car has 12 gallons of gas
    float gas= 12;
    
    //Divide distance traveled by amount of gasoline in the car 
    float MPG= distnce/gas;
    
    //Print "MPG" and show the MPG
    cout<<"MPG"<<endl;
    cout<<MPG<<endl;
    return 0;
}

