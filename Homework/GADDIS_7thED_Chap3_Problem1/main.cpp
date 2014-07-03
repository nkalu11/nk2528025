/*File: Gaddis Chapter 3 Problem 1
 * Author: Nnamdi Kalu
 *Created on June 26, 2014, 10:40 AM
 *Gaddis 7thED Chapter 2 Problem 6
 * Purpose Problem 1 in Gaddis 7thED Chapter 3
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Vriables for milles that can be driven on
    // a full tank and the ammount of gas that a care can hold
    float milsdrv, fultank;
    cout<<"Type in the distance your car can travel on a full tank"<<endl;
    cin>>milsdrv;
    
    //Command prompt to input gas tank limit
    cout<<"Type in the ammount of gas your car can hold"<<endl;
    cin>>fultank;
    
    //Variable for determined mpg through division
    float mpg = milsdrv/fultank;

    //Presentation of resuls
    cout<<"Your car drives "<<mpg<<" miles per gallon"<<endl;
   
    //Exit stage right 

    return 0;
}

