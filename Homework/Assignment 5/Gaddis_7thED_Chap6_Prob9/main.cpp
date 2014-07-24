/*File: Gaddis Chapter 6 Problem 9
 * Author: Nnamdi Kalu
 * Created on July 22, 2014, 12:05 PM
 * Purpose: Ninth problem of 5th homework assignment
 */


//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
void twiceNum(int &);

//Execution Begins Here
int main(int argc, char** argv) {
 
        //declare variables
        int value = 4; 
        
        //input prompt 
        cout << "In main, value is " << value << endl;  
        cout << "Now calling twiceNum..." << endl;
        //call twiceNum function
        twiceNum(value);  
        //Input prompt
        cout << "Now back in main. value is " << value << endl;
        
        return 0; 
    }  
    
    void twiceNum (int &refVar)  
    {  
        //declare variables
        refVar *= 2; 
    }

