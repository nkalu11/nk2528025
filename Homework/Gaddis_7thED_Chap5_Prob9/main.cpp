/*File: Gaddis 7thEd Chap5 Problem9
 * Author: Nnamdi Kalu
 * Created on July 10, 2014, 12:46 PM
 * Purpose: The ninth homework problem for the 4th assignment
 */


//System Libraries

#include <iostream>
#include <iostream>


using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv) {

    //Declare variables
    int year =1, yerate, yrate;
    
    //Input prompt
    cout<<"Enter the year amount of years you've";
    cout<<" been a member of this country club"<<endl;
    
            
    //Calculate the amount due each year
    while ( year <= 6)
    {
        
        int yerate= year * .04;
        int yrate = yerate * 2500;
        int t = yrate + 2500;
        year++;
        
        cout<<"For year "<< year<< " the club membership will cost $";
        cout<<t<<endl;
    }
    
    //Exit Stage Right
    
    return 0;
}

