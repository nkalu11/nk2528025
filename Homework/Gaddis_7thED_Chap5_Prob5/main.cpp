/*File: Gaddis 7thEd Chap5 Problem5
 * Author: Nnamdi Kalu
 * Created on July 10, 2014, 12:46 PM
 * Purpose: The fifth homework problem for the 4th assignment
 */

#include <iostream>
#include <iomanip>

//System Libraries
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes


//Execution Begins Here
int main(int argc, char** argv) {

    //Declare Variables
    int game = 1, points, total=0;
    
    //Print command prompts, display text input
    cout<<"Enter the number of points your team has earned";
    cout<<" so far in the season."<<endl;
    cout<<"Then enter '-1' when finished"<<endl;
    cout<<"Enter points for the game "<<game<<" here."<<endl;
    cin>>points;
    
    //While loop for points accumulation
    while (points != -1)
    {
        total += points;
        game++;
        cout<<"Enter the points for game "<<game<< ": ";
        cin>>points;
    }
    
    //Display results
    cout<<"The total points are "<< total<<". "<<endl;
    
    
    
    
    
    return 0;
}

