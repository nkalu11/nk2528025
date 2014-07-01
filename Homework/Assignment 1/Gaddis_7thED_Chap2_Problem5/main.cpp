/* File: Gaddis 7thED Chapter2 Problem 5
 * Author: Nnamdi Kalu
 * Created on June 26, 2014, 10:18 AM
 * 5TH Homework Problem Chapter 2 
 */


//System Level Libraries 

#include <iostream>

using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {

    //The first number in the sequence is 28
    float fir= 28;
    
    //The second number in the sequence is 32
    float sec= 32;
    
    //The third number in the sequence is 37
    float thir= 37;
    
    //The fourth number in the sequence is 24
    float fort= 24;
    
    //The fifth number in the sequence is 33
    float fift= 33;
    
    //This is the sum of all of the above numbers
    unsigned short sum= fir+sec+thir+fort+fift;
    
    //Print simple text
   cout<<"Average"<<endl; 
    
   //This is the average of all the above numbers
    unsigned short average= sum/5;
    cout<<average<<endl;
    
    //Exit stage right
    
    return 0;
}

