/*File: Gaddis 7thEd Chap5 Problem4
 * Author: Nnamdi Kalu
 * Created on July 10, 2014, 12:46 PM
 * Purpose: The fourth homework problem for the 4th assignment
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

    //declare variables
    int days;
    float total= 0.0;
    
    
    //Print user command prompt as well as input variable
    cout<<"For how many days do you have sales figures?"<<endl;
    cin>>days;
    
    //Accumulation for the amount
    for (int count = 1; count <= days; count++)
    {
        float sales;
        cout<<"Enter the sales for day "<<count<<":"<<endl;
        cin>>sales;
        total += sales;
    }
    
    //Display results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"the total sales are $"<<total<<endl;
    
    //exit stage right
    
    
    
    return 0;
}

