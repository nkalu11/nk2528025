/*File: Gaddis 7thEd Chap5 Problem10
 * Author: Nnamdi Kalu
 * Created on July 10, 2014, 12:46 PM
 * Purpose: The tenth homework problem for the 4th assignment
 */

//System Libraries

#include <iostream>
#include <cmath>


using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv) {

    //declare Variables
    float value;
    char choice;
    
    //Print command prompt for input
    cout<<"Enter a number"<<endl;
    cin>>value;
    
    //Print Command Prompt for input
    cout<<"This program will raise "<< value;
    cout<<" to the powers of 0 through  10."<<endl;
    
    
    
    //Output as well as for  for continuation of
    //raising number to power from 1-10
    for(int count= 0; count <=10; count++)
    {
        cout<<value<<" raised to the power of ";
        cout<< count<<" is "<<pow(value, count)<<endl;
        cout<<"To discontinue type in 'Q', or ";
        cout<<"type in any other key to continue."<<endl;
        cin>>choice;
        
        
        if(choice == 'q' || choice == 'Q')
            break;
    }
    
    
    
    return 0;
}

