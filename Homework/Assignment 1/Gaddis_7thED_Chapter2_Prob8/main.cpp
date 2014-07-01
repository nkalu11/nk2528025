/* File: Nnamdi Kalu
 * Author: Nnamdi Kalu
 * Created on June 26, 2014, 12:18 PM
 * Purpose 8th problem from Gaddis 7th ED chapter 2 (prob#12)
 */

//System Level Libraries

#include <iostream>

using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {

    //Th highway mpg of the car
    float highmpg= 26.8;
    
    //The city mpg of the car
    float citympg= 21.5;

    //The amount of gas in the gas tank
    float gastank= 20;
    
    //The total mpg for both highway and road
    float summpg= highmpg+citympg;
    
    //The average mpg for highway and road
    float avrmpg= summpg/2;
    
    //the milage the vehicle can travel 
    float avrmil= avrmpg*20;
    
    //Print "Miles per-gallon traveled for both highway and city" 
    //and the average milage traveled by the vehicle 
    cout<<"Average miles traveled by the vehicle."<<endl;
    cout<<avrmil<<endl;
    
    //exit stage right
    
    return 0;
}

