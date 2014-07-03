/*File: Gaddis Chapter 3 Problem 2
 * Author: Nnamdi Kalu
 *Created on June 26, 2014, 10:40 AM
 *Gaddis 7thED Chapter 2 Problem 6
 * Purpose Problem 2 in Gaddis 7thED Chapter 3
 */

#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Variables to be used throughout the application
    //classa= Class A ticket
    //classb= Class B ticket
    //classc= Class C ticket
    
    float classa, classb, classc;
    
    //App description to the user
    cout<<"Softball Ticket Sales"<<endl;

    //Command prompt to input the desired 
    //ammount of class A tickets
    cout<<"How many Class A tickets would";
    cout<<" you like to purchase?"<<endl;
    cin>>classa;
    
    //Command prompt to input the desired 
    //ammount of class B tickets
    cout<<"How many Class B ticket will";
    cout<<" you like to purchase?"<<endl;
    cin>>classb;

    ////Command prompt to input the desired 
    //ammount of class C tickets
    cout<<"How many Class C ticket will";
    cout<<" you like to purchase?"<<endl;
    cin>>classc;
    
    //Variables to be used throughout the application
    float classad= classa*15.00; //Ammount spent on Class A ticket
    float classbd= classb*12.00; //Ammount spent on Class B ticket
    float classcd= classc*9.00;  //Ammount spent on Class C ticket


    //Variable for total ammount from softball ticket purchase
    float totsals= classad+classbd+classcd;

    //Presentation of result
    cout<<"Total Income generated is $";
    std::cout<<fixed<<showpoint<<setprecision(2)<<totsals<<endl;

    //Exit stage right

    return 0;
}

