/* File: Gaddis 7thED Chap3 Problem 1
 * Author: Nnamdi Kalu
 *Created on June 30, 2014, 9:28 AM
 * Purpose Second Homework Assignment Chapter 3 problem 1
 */

//System Level Libraries

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here
int main(int argc, char** argv) {
    
    int length, width, area;
    
    cout<<"This Program Calculates the Area of a";
    cout<<"rectangle."<<endl;
    cout<<"What is the length of the rectangle?"<<endl;
    cin>> length;
    cout<<"What is the width of the rectangle?"<<endl;
    cin>> width;
    
    area = length* width;
    cout<<"The area of the rectangle is" <<area<<"/n.";
    return 0;
}

