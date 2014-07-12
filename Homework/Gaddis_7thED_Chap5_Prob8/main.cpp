/*File: Gaddis 7thEd Chap5 Problem8
 * Author: Nnamdi Kalu
 * Created on July 10, 2014, 12:46 PM
 * Purpose: The eighth homework problem for the 4th assignment
 */

//System Libraries

#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv) {
    
    //Declare variables
    float lambda;
    
    //User prompt to input wavelength
    cout<<"Input wavelength in meters"<<endl;
    cin>>lambda;
    
    //Output electromagnetic spectrum band
    if(lambda>5e0f){
        cout<<"Radio Band"<<endl;
    }else if(lambda>5e-3f){
        cout<<"MicroWave Band"<<endl;
    }else if(lambda>5e-6f){
        cout<<"InfraRed Band"<<endl;
    }else if(lambda>1e-7f){
        cout<<"Visible Band"<<endl;
    }else if(lambda>1e-9f){
        cout<<"UltraViolet Band"<<endl;
    }else if(lambda>1e-11f){
        cout<<"XRay Band"<<endl;
    }else{
        cout<<"Gamma Ray Band"<<endl;
    }

    //Exit stage right!
    return 0;
}