/*  File:Gaddis 7thED chapter 4 Problem 12
 * Author: Nnamdi Kalu
 * Created on July 7, 2014, 10:19 PM
 * Purpose: 12th problem of the third homework assignment
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
    int numbr;
    float radius, side1, side2 , length, height;
    
    float areacrc = (radius * radius)* 3.14;
    float arearec = side1 * side2;
    float areatri = length * height;
    
    //print user command inputs
    cout<<"Geometry calculator"<<endl;
    cout<<"1. Calculate the area of a Circle"<<endl;
    cout<<"2. Calculate the area of a Rectangle"<<endl;
    cout<<"3. Calculate the area of a Triangle"<<endl;
    cout<<"4. Quit"<<endl;
    cin>>numbr;
    
    //determine outputs based on if statement
       if (numbr = '1')
       {
        cout<<"Input the radius"<<endl;
        cin>> radius;
        cout<<"The are of the circle is "<< areacrc<<endl;
       }
    else if (numbr == '2')
        {
        cout<<"Input the side lengths"<<endl;
        cin>> side1;
        cin>> side2;
        cout<<"The area of the rectangle is "<< arearec<<endl;
        }
    else if (numbr == '3')
     {
        cout<<"Input the side and height"<<endl;
        cin>> length;
        cin>> height;
        cout<<"The are of the triangle is "<<areatri<<endl;    
     }
     
    else if (numbr == '4')
     {
        cout<<"Quit"<<endl;
     }
   
    else 
    {
        cout<<numbr<<" is an invalid input, rerun the program."<<endl;
    }
   
    //exit stage right
    
    return 0;
}

