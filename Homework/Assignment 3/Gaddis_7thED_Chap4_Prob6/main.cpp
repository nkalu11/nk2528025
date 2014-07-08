/*  File:Gaddis 7thED chapter 4 Problem 6
 * Author: Nnamdi Kalu
 * Created on July 7, 2014, 10:19 PM
 * Purpose: 6th problem of the third homework assignment
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
    int mnumbr;
    
    //print user command inputs
    cout<<"We offer model number 100, 200, and 300 T.V.'s."<<endl;
    cout<<"Type in the model number of the T.V.";
    cout<<" you're interested in."<<endl;
    cin>>mnumbr;
    
    cout<<"That model number has the following features"<<endl;
    
    //display out put based on input (switch statement)
    switch (mnumbr)
    {
     case 300: cout<<"\tSurround sound.\n";
     case 200: cout<<"\tHigh Definition.\n";
     case 100: cout<<"\tWifi compatibility.\n";
     break;
     
        default: cout<<"\You must choose from the 100,";
                 cout<<"200, or 300 model numbers.\n";
        
    }
    
    
    return 0;
}

