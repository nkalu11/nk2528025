/*File: Gaddis Chapter 6 Problem 3
 * Author: Nnamdi Kalu
 * Created on July 22, 2014, 12:05 PM
 * Purpose: Third problem of 5th homework assignment
 */


//System Prototypes
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constant

//Function Prototypes
void showIntro();
float getCups();
float cupsToOunces(float);
//Execution Begins Here

int main(int argc, char** argv) {

    //declare variables for cups and ounces
    float cups, ounces;
    
    cout<<fixed<<showpoint<<setprecision(1);
    
    
    //display intro screen
    showIntro();
    
    //Get cups amount
    cups= getCups();
    
    //convert cups to fluid ounces
    ounces = cupsToOunces(cups);
    
    
    //display the number of ounces
    cout<< cups<<" cups equal "
        <<ounces<<" ounces."<<endl;
    
    
    return 0;
}

void showIntro()
{
    //output to user
    cout<<"This program converts measurements"<<endl;
    cout<<"in cups to fluid ounces. For your"<<endl;
    cout<<"reference the formula is:"<<endl;
    cout<<"     1 cup = 8 fluid ounces"<<endl;
}



float getCups()
{
    //declare variables
    float numCups;
    
    //output user command prompts
    cout<<" Enter the number of cups: ";
    //input command
    cin>>numCups;
    return numCups;
}

float cupsToOunces(float numCups)
{
    //multiplying cups by 8
    return numCups* 8.0;
}