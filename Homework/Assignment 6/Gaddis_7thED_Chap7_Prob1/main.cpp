/* File: Gaddis 7thED Chap7 Prob1
 * Author: Nnamdi Kalu
 * Created on July 25, 2014, 4:40 PM
 * Purpose homework problem 1
 */


//System Libraries
#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
float avgVector(vector<int>);

//Execution Begins Here
int main(int argc, char** argv) {

    //declare variables
     vector<int> values;
     int numValues;      
     float average;     
     

     //user input prompt
  cout << "How many values do you wish to average? "; 
  cin >> numValues; 
  
  //for loop for value input
  for (int count = 0; count < numValues; count++)  
  {  
      int tempValue;  
      cout << "Enter a value: "; 
      cin >> tempValue; 
      values.push_back(tempValue);  
  }  
 
  //variable declaration
  average = avgVector(values); 
  
  //output
  cout << "Average: " << average << endl;
  return 0;  
} 

//function to average input
float avgVector (vector<int> vect)
 { 
  //declare variables 
  int total = 0;    
  float avg;      
  
  //if else statement to determine whether vales were inputted
  if (vect.empty())
  
  {  
      cout << "No values to average.\n";
      avg = 0.0;  
  }    
  else  
  {        for (int count = 0; count < vect.size(); count++)
      total += vect[count];  
          avg = total / vect.size();  
  }  
  return avg;  
}
