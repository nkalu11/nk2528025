/*File: Gaddis Chapter 3 Problem 3
 * Author: Nnamdi Kalu
 *Created on June 26, 2014, 10:40 AM
 *Gaddis 7thED Chapter 2 Problem 6
 * Purpose Problem 3 in Gaddis 7thED Chapter 3
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
   
    //Variables 
    int books;
    int months;
    float permonth;
    
    //Output of Input commands and input
    cout<<"How many books have you read this year?"<<endl;
    cin>>books;
    cout<<"How many months did it take to read them?"<<endl;
    cin>>months;
    
    //Output of the rate of boks read per month
    permonth= static_cast<float>(books)/months;//Conversion of int to float
    cout<<"You've read "<< permonth<< " books per month."<<endl;

    //Exit stage right
    
    return 0;
}

