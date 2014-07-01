/* File: Gaddis 7thED Chap3 Problem 1
 * Author: Nnamdi Kalu
 *Created on June 30, 2014, 9:28 AM
 * Purpose Second Homework Assignment Chapter 3 problem 1
 */

//System Level Libraries

#include <iostream>
#include <iomanip>



using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here
int main(int argc, char** argv) {

    
   //This Program averages test scores for user
    
    int score1, score2, score3;
    double average;
    cout<<"enter 3 test scores and i will average them: ";
    cin>> score1, score2, score3;
    
    average=(score1 + score2 + score3)/3.0;
    cout<<fixed<<showpoint<<setprecision(1);
    cout<<"your average is "<< average <<endl;
    
    if (average > 95)
        cout<<"congratulations! thats a high score!"<<endl;
    
   
    
    
    return 0;
}

