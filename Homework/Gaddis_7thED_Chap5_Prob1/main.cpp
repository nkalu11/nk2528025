/*File: Gaddis 7thEd Chap5 Problem1
 * Author: Nnamdi Kalu
 * Created on July 10, 2014, 12:46 PM
 * Purpose: The first homework problem for the 4th assignment
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
    int num1=1;
    int num2;
    int sum=0; //sum is the accumulator
    
   
    cout<<"Enter a positive integer and I will display"<<endl;
    cout<<" the sum of it and all positive integers leading up to it!"<<endl;
    cin>>num2;
    
    //Make sure user enters a positive integer
    if (num2 <=0)
    {
        cout<<"Please rerun the program and enter a positive integer"<<endl;
    }
    
    //Add the integers 
    while (num1 <= num2)
    {
        sum += num1;
        num1++;
    }
    
    //Display the sum
    cout<<"the sum is "<< sum<<endl;
    
    
    return 0;
}

