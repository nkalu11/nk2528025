/* 
 * File:   main.cpp
 * Author: Nnamdi
 *
 * Created on July 26, 2014, 11:59 AM
 */

#include <iostream>

using namespace std;
//Global constants
const int SIZE=5;
int main(int argc, char** argv) {

    
    int firstArray[SIZE]={5,10,15,20,25};
    int secondArray[SIZE]={5,10,15,20,25};
    int thirdArray[SIZE]={5,10,15,20,25};
    bool arraysEqual= true;
    
    
    
   
        if(firstArray[0] != secondArray[0]|| thirdArray[0]!= secondArray[0] ||firstArray[0]!=thirdArray[0]
                &&firstArray[4] != secondArray[4]|| thirdArray[4]!= secondArray[4] ||firstArray[4]!=thirdArray[4])
            arraysEqual=false;
    
    
    
    if (arraysEqual)
    {
        cout<<"The arrays are equal"<<endl;
    }
    else
        cout<<"The arrays are not equal"<<endl;
    
    
    
    
    
    
    return 0;
}

