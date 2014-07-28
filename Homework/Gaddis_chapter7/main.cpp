/* 
 * File:   main.cpp
 * Author: Nnamdi
 *
 * Created on July 26, 2014, 5:28 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    
    const int NUM_EMPLOYERS=5;
    int hours [NUM_EMPLOYERS];
    float pay [NUM_EMPLOYERS];
    
    
    cout<<"Enter the hours worked by "<<NUM_EMPLOYERS<<endl;
    cout<<" employees and the amount of pay"<<endl;
    
    for(int count; count< NUM_EMPLOYERS; count++)
    {
        cout<<"enter the hours worked by employee "<<count+1<<"."<<endl;
        cin>>hours[count];
        cout<<"enter the pay for employee "<<count+1<<"."<<endl;
        cin>>pay[count];
    }
    
    cout <<fixed<<showpoint<<setprecision(2);
    for(int count; count <NUM_EMPLOYERS; count++)
    {
        cout<<"this is the gross pay for employee"<<count+1<<endl;
        float grosspay= hours[count]*pay[count];
        cout<<"Gross pay for employee #"<<count+1<<endl;
        cout<<" is :$"<<grosspay<<endl;
    }
    
    
    
    return 0;
}

