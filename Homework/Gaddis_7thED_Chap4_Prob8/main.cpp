/*  File:Gaddis 7thED chapter 4 Problem 8
 * Author: Nnamdi Kalu
 * Created on July 7, 2014, 10:19 PM
 * Purpose: 8th problem of the third homework assignment
 */

//System Level Libraries

#include <iostream>
#include <iomanip>


using namespace std;

//User Libraries

//Global constants 

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    
    //declare variable
    const float MIN_INCOME = 350000.0;
    const int MIN_YEARS =5;
    
    //declare variable
    float income;
    int years;
    
    //print command inputs
    cout <<"what is your annual income"<<endl;
    cin>>income;
    
    //print command inputs
    cout<<"How many years have you worked at ";
    cout<<"your current job"<<endl;
    cin>> years;
    
    //determine output based on if statement
    if (!(income >= MIN_INCOME || years > MIN_YEARS))
    {
      cout<<"You must earn at least $"
      << MIN_INCOME <<" or have been "
      <<"employed more than "<< MIN_YEARS
      <<" years"<<endl;
    }
        
    else
        cout<< "You qualify"<<endl;
    
    //exit stage right
    return 0;
}

