/*File: Gaddis Chapter 6 Problem 2
 * Author: Nnamdi Kalu
 * Created on July 22, 2014, 12:05 PM
 * Purpose: Second problem of 5th homework assignment
 */


//System Prototypes
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constant

//Function Prototypes
float maxNum(float,float,float,float);

void getSales(float &);
//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare variables
    float n1, n2, n3, n4, max;
    
    
    //Inform user of programs purpose, then demand the user input the values
    cout<<"This program compares the total sales made by the Northeast,"<<endl;
    cout<<"Southeast, Northwest, and Southwest divisions of the company"<<endl;
    
    
    //input command prompt also calls getSales function
    cout<<"Input sales for the Northeast division."<<endl;
     getSales(n1);
    
    cout<<"Input sales for the Southeast division."<<endl;
    getSales(n2);
    
    
    cout<<"Input sales for the Northwest division."<<endl;
    getSales(n3);
    
    cout<<"Input sales for the Southwest division."<<endl;
    getSales(n4);
    
    
    
   
    //Determine which is the greatest
    max=maxNum(n1,n2,n3,n4);
    cout<<"Max sales = "<<max<<endl;
    
    
    
     
    return 0;
}

  
    void getSales(float &sales)
    {
        //if else to determine whether number is positive or negative
        //then determine output
        if (sales<0)
            cout<<"Error, please input positive numbers only"<<endl;
        else
            cin>>sales;
        
    }
    
    
   float maxNum(float n1,float n2,float n3,float n4)
   {
       //find the largest number
    float max=n1;
    if(n2>max)max=n2;
    if(n3>max)max=n3;
    if(n4>max)max=n4; 
    return max;
   }
