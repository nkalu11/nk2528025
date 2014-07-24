/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on August 20, 2013, 2:45 PM
 */

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {


    //declare variables
    int num, total=0;
    
    //Input command prompt
    cout<<"Input a 4 digit number"<<endl;
    cin>>num;
    
    //declare variables
    int div= 1000;
    int num1= (num/div) % 10;
    
    //while loop to print astericks based on number input
    while (div>0)
    {
       num1--;
       total = num1;
    
    cout<<num1;
    
    while (num1>0);
    { 
        cout<<"*"<<endl;
        num1--;
    }   
    
    (div= div/10);
    }



 
    
    return 0;
}
