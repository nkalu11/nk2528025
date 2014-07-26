/* File: Gaddis 7thED Chap7 Prob 8
 * Author: Nnamdi Kalu
 * Created on July 25, 2014, 4:40 PM
 * Purpose homework problem 8
 */


//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants
const int COLS = 4;   
const int TBL1_ROWS = 3; 
const int TBL2_ROWS = 4; 
//Function Prototypes
void showArray(const int [][COLS], int);
//Execution Begins Here
int main(int argc, char** argv) {

        //declare variables
        int table1[TBL1_ROWS][COLS] = {{1, 2, 3, 4}, 
        {5, 6, 7, 8},
        {9, 10, 11, 12}};  
        int table2[TBL2_ROWS][COLS] = {{10, 20, 30, 40},  
        {50, 60, 70, 80}, 
        {90, 100, 110, 120},  
        {130, 140, 150, 160}};  
        
        //output as well as input
        cout << "The contents of table1 are:\n";  
        showArray(table1, TBL1_ROWS);  
        cout << "The contents of table2 are:\n"; 
        showArray(table2, TBL2_ROWS);  
        return 0; 
          }  
    //function determine the contents of both tables
    void showArray(const int array[][COLS], int rows) 
    {  
        for (int x = 0; x < rows; x++)  
        {  
            for (int y = 0; y < COLS; y++)  
            {  
                cout << setw(4) << array[x][y] << " "; 
            }  
            cout << endl;  
        } 
    }
    
    
    
    
    

