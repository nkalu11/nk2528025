/* File:   Gaddis Chapter 2 Problem 3
 * Author: Nnamdi Kalu
 * Created on June 25, 2014, 1:32 PM
 *Purpose 3RD Homework Problem
 */

//System Level Libraries

#include <iostream>

using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {

    //The State tax
    float statax= .04;
    //The Country tax
    float coutax= .02;
    //The sum of the country and state tax
    float tax= statax+coutax;
    //The purchase amount of $52
    int purch= 52;
    //The sales tax of the purchase
    float saletax= tax* purch;
     
    //Print Simple Text
    cout<<"Total Tax On $52"<<endl;
    
    //Print Total Sales Tax
    cout<<saletax<<endl;
    
    return 0;
}

