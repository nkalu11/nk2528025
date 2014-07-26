/* File: Gaddis 7thED Chap7 Prob9
 * Author: Nnamdi Kalu
 * Created on July 25, 2014, 4:40 PM
 * Purpose homework problem 9
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

        //declare variable
        vector<int> values; 
        //value popping through vector
        values.push_back(1);  
        values.push_back(2);  
        values.push_back(3);  
        //output results as well as value popping fro vector
        cout << "The size of values is " << values.size() << endl;  
        cout << "Popping a value from the vector...\n"; 
        values.pop_back();  
        cout << "The size of values is now " << values.size() << endl; 
       //output
        cout << "Popping a value from the vector...\n";  
        values.pop_back();  
        cout << "The size of values is now " << values.size() << endl; 
       //output
        cout << "Popping a value from the vector...\n"; 
        values.pop_back(); 
        cout << "The size of values is now " << values.size() << endl; 
        
        return 0; 
}

    
    
