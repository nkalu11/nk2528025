/*File: Gaddis 7thEd Chap5 Problem7
 * Author: Nnamdi Kalu
 * Created on July 10, 2014, 12:46 PM
 * Purpose: The seventh homework problem for the 4th assignment
 */



//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv) {
    //Declare variables
    int nPer;//Compounding periods years
    float fV,pV,i;//Future Value/Present value $'s, interest in percent

    //Command prompts and inputs displayed
    cout<<"Current Balance in $'s"<<endl;
    cin>>pV;
    cout<<"Interest rate in %"<<endl;
    cin>>i;
    cout<<"Number of compounding periods in Years"<<endl;
    cin>>nPer;
    
    //Loop to calculate the future value
    fV=pV;
    i*=(1.0f/100);//Convert to decimal fraction
    for(int year=1;year<=nPer;year++){
        fV*=(1+i);
    }
    
    //Compare the power function and loop result
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Future Value using a loop = $"<<fV<<endl;
    cout<<"Future Value using a pow  = $"<<pV*pow(1+i,nPer)<<endl;
    
    //Exit stage right!
    return 0;
}

