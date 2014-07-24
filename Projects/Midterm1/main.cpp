/* 
 * File:   main.cpp
 * Author: Nnamdi
 *
 * Created on July 15, 2014, 7:51 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    
    //Declare variables
    int  d, total=0;
    
    //Prompt user to input desired amount of lines
    cout<<"How many lines do you want to output?"<<endl;                                                                                     
    cin>>d;
    
    //Decrement output number backwards to 1
    do
    {   
       cout<<setw(d)<<d<<endl;
       d--;
       total = d;
    }while (total > 0);
    
    
    
    
    return 0;
}

