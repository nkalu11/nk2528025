/* File: Gaddis 7thED Chapter 5 Prob3
 * Author: Nnamdi Kalu
 * Created on July 9, 2014, 10:56 AM
 * Purpose The 3rd problem from assignment 4
 */

#include <iostream>
#include <ctime>

//System Libraries
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here
int main(int argc, char** argv) {

    //Declare Variables
    int begin = time(0);
    int num= 1;
    int num1;
    
    //Print user commands as well as 
    //display the purpose of the program
    cout<<"Type in a number and I will square";
    cout<<" every integer up until that number."<<endl;
    cout<<"I will also show you the amount of";
    cout<<" time the program took to run."<<endl;
    cin>>num1;
    cout<<"--------------------------------"<<endl;
    cout<<"Number"<<"\t\t"<<"Number squared"<<endl;
    
    //While loop responsible for squaring 
    //every number up until the integer typed in
    while (num <= num1)
    {
        int square = num*num;
        cout<<num<<"\t\t"<<(square)<<endl;
        num++;
    }
    //This code displays the amount of time the program took to run
    cout<<endl<<"Time took:  "<<time(0)-begin   <<"secs"<<endl;


    //Exit stage right


    
    
    return 0;
}