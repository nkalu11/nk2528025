/* File: Gaddis 7thED Chap7 Prob7
 * Author: Nnamdi Kalu
 * Created on July 25, 2014, 4:40 PM
 * Purpose homework problem 7
 */


//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;
//User Libraries

//Global Constants

const int ARRAY_SIZE = 7;  
//Function Prototypes
void doubleArray(int [], int);

void showValues(int [], int);  
//Execution Begins Here
int main(int argc, char** argv) {

    //declare variables
     int set[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7};  
     
     //user input prompt as well as function call
     cout << "The array's values are:\n"; 
     showValues(set, ARRAY_SIZE);  
     
     //function call
     doubleArray(set, ARRAY_SIZE);  
     //output and function call
     cout << "After calling doubleArray the values are:\n";  
     showValues(set, ARRAY_SIZE);  
     
     return 0;  
}  

//function to double array
void doubleArray(int nums[], int size) 
{  
    //for loop to call function
    for (int index = 0; index < size; index++) 
        nums[index] *= 2; 
}  

//function to output results
void showValues(int nums[], int size)  
{  
    for (int index = 0; index < size; index++) 
        cout << nums[index] << " ";  
     cout << endl; 
}

    
    
 