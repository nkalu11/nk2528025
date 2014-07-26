/* 
 * File:   main.cpp
 * Author: Nnamdi
 *
 * Created on July 24, 2014, 2:27 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants 

//Function Prototypes
void fallingDistance();

//Execution Begins Here
int main(int argc, char** argv) {

    
  
    
    for(int i=0; i>=10; i++)
    {
    fallingDistance();
    }
    return 0;
}

void fallingDistance(){
    
    static int t;
    
     float d,g=9.8;
    
     d=.5*t*t*g;
    
    
   cout<<"The object fell "<<d<<"meters."<<endl;
   t++;
}