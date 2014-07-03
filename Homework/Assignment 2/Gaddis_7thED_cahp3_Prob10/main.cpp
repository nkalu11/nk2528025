/*File: Gaddis Chapter 3 Problem 10
 * Author: Nnamdi Kalu
 *Created on June 26, 2014, 10:40 AM
 *Gaddis 7thED Chapter 2 Problem 6
 * Purpose Problem 10 in Gaddis 7thED Chapter 3
 */

#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Variables for Fahrenheit and Celsius
    float F, C;
    
    //Output for program details and input command
    cout<<"This program converts temperatures from";
    cout<<"Celsius to Fahrenheit!"<<endl;
    cout<<"Please enter the temperature in Celsius."<<endl;
    cin>>C;
   
    //Variable for conversion of Fahrenheit to Celsius
    float temp= ((1.8)*C) +32;
  
    //Presentation of the converted temperature from 
    //Fahrenheit to Celsius 
    cout<<"The temperature is "<<temp<<" degrees";
    cout<<" Fahrenheit!"<<endl;
  
    //Exit stage right

    return 0;
}

