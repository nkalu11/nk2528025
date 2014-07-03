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
    float classa= 15.00; //classa= Class A ticket
    float classb= 12.00; //classb= Class A ticket
    float classc= 9.00;  //classc= Class A ticket
    
    //App description to the user
    cout<<"Softball Ticket Sales"<<endl;

    //Command prompt to input the desired 
    //ammount of class A tickets
    cout<<"How many Class A ticket will";
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
    
    
    //Variable for total ammount from softball ticket purchase
    float totsals= classa+classb+classc;

    //Presentation of result
    cout<<"Total Income generated is $";
    std::cout<<fixed<<showpoint<<setprecision(2)<<totsals<<endl;

    //Exit stage right

    return 0;
}

