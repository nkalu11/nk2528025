/*  File:Gaddis 7thED chapter 4 Problem 7
 * Author: Nnamdi Kalu
 * Created on July 7, 2014, 10:19 PM
 * Purpose: 7th problem of the third homework assignment
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
    int choice;
    int months;
    float charges;
    
    //declare variables
    const float ADULT=40.0,
                SENIOR=30.0,
                CHILD=20.0;
    
    //declare variables
    const int ADULT_CHOICE = 1,
              CHILD_CHOICE = 2,
              SENIOR_CHOICE = 3,
              QUIT_CHOICE = 4;
    
    //Print user command inputs
    cout<<"Health Club Membership Menu"<<endl;
    cout<<"1. Standard Adult Membership"<<endl;
    cout<<"2. Child Membership"<<endl;
    cout<<"3. Senior Citizen Membership."<<endl;
    cout<<"4. Quit the Program"<<endl;
    cin>>choice;
    
    
    cout<<fixed<<showpoint<<setprecision(2);
    //determine output based on if statement
    if (choice == 'Adult')
    {
        cout<<"For how many months?"<<endl;
    cin>>months;
    charges = months * ADULT;
    cout<<"The total charges are"<<charges<<endl;
    }
    
    
    else if (choice == CHILD_CHOICE)
    {
        cout<<"For how many months"<<endl;
        cin>>months;
        charges = months * CHILD;
        cout<<"The total charges are $"<<charges<<endl;
        
    }
            
    
    else if (choice == SENIOR_CHOICE)
    {
        cout<<"For how many months"<<endl;
        cin>>months;
        charges = months * SENIOR;
        cout<<"The total charges are $"<<charges<<endl;
   
        
    }
    
    else if (choice == QUIT_CHOICE)
    {
        cout<<"Program ending"<<endl;
        
    }
    
   
    
    else if (choice == CHILD_CHOICE)
    {
        cout<<"The valid choices are 1 through 4. Run the ";
        cout<<"program again and select one of those"<<endl;
        
    }
    
    //exit stage right
    
    return 0;
}

