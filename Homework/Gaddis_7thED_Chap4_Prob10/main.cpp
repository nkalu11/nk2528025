/*  File:Gaddis 7thED chapter 4 Problem 10
 * Author: Nnamdi Kalu
 * Created on July 7, 2014, 10:19 PM
 * Purpose: 10th problem of the third homework assignment
 */


//System Level Libraries


#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global constants 

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {

    //declare variables
    const float PRICE_A=249.0,
                PRICE_B=299.0;
    
    //set up string variable
    string partNum;
    
    //User commands for input
    cout<<"The stereo part numbers are: "<<endl;
    cout<<"Boom Box: part number S-29A"<<endl;
    cout<<"Shelf Model: part number S-29B"<<endl;
    cout<<"Enter the part number of your desired stereo."<<endl;
    cin>>partNum;
     
    //determine price of the model
    cout<< fixed << showpoint << setprecision(2);
    if (partNum == "S-29A")
        cout<<"The price is $"<< PRICE_A << endl;
     else if (partNum == "S-29B")
        cout<<"The price is $"<< PRICE_B <<endl;
     else
        cout<< partNum << " is not a valid part number."<<endl;
    
    
    //exit stage right
    
    return 0;
}

