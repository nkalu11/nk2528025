/* 
 * File:   main.cpp
 * Author: Nnamdi
 *
 * Created on July 26, 2014, 12:50 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

//Global Constants 
const int size=2;
 
int main(int argc, char** argv) {

    
    int barTender[size];
    int goldTooth[size];
    bool isitTrue= true;
    
    cout<<"Please input 2 values"<<endl;
    
    cin>>goldTooth[0];
    cin>>barTender[0];
    cin>>goldTooth[1];
    cin>>barTender[1];
    
    if (goldTooth[0] > barTender[0])
    {
        isitTrue=false;
    }
    
    
    if(isitTrue)
    {
        cout<<"cool"<<endl;
    }
    else
        cout<<"your good"<<endl;
  
    
  
    
    
    
    return 0;
}

