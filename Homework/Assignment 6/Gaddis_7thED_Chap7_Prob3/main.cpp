/* File: Gaddis 7thED Chap7 Prob3
 * Author: Nnamdi Kalu
 * Created on July 25, 2014, 4:40 PM
 * Purpose  homework problem 3
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants
const int NUM_LETTERS = 10; 
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

       //declare variables
       char letters[NUM_LETTERS] = {'A', 'B', 'C', 'D', 'E', 
       'F', 'G', 'H', 'I', 'J'};  
       
       //output 
       cout << "Character" << "\t" << "ASCII Code\n"; 
       cout << "---------" << "\t" << "----------\n"; 
       //for loop to control output
       for (int count = 0; count < NUM_LETTERS; count++) 
       { 
           cout << letters[count] << "\t\t"; 
           cout << static_cast<int>(letters[count]) << endl; 
       } 
       return 0; 
}
    
  