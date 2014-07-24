/* 
 * File:   main.cpp
 * Author: teachers
 *
 * Created on July 17, 2014, 1:08 PM
 */

 
#include <iostream>
using namespace std;
 
int main()
{
//variable declarations
char package;
int hours;
double costA = 14.95, costB = 24.95, costC = 29.95;
 
//output user prompt to input their package
cout << "Which package does the customer use (A, B, or C,)? ";
cin >> package;

//Prompt user to specify how many
//hours they used the service for
cout << "How many hours did the customer use last month? ";
cin >> hours;
 
 //Set output accuracy to 2 places 
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);
 
//switch statement to select package
switch (package)
{
case 'a':
case 'A': 
//If user selects a
//Determine how many hours user used and calculate their bill   
if (hours <= 5)
costA = 19.95; 
else if (hours > 5)
//output bill if there's no overdraft >5hours
costA = (.75 *(hours - 5) + (costA));
cout << "The charges are $" << costA << endl; 
//calculate bill for overdraft  >20 
if ((costA > 19.95)||(costA > 24.95))
costB = (1.00 *(hours - 20) + (costB));
costB = costA + costB; 
cout << "By switching to Package B you would save $"
<< costB << endl;
//Output the amount of money that would be saved with each package
costC = costA - costC;
cout << "By switching to Package C you would save $"
<< costC << endl;
break; 

case 'B':
case 'b': 
//If user chooses b 
//Determine how many hours user used and calculate their bill    
if (hours <= 15)
costB = 24.95; 
else if (hours > 15)
costB = (.75 *(hours - 15) + (costB));
//output the bill if there is no overdraft >15
cout << "The charges are $" << costB << endl;
if (costB > 24.95)
costB = costB - costC;
//output possible savings
cout << "By switching to Package C you would save $"
<< costB << endl; 
break; 
case 'C':
case 'c': 
//if user chooses package c this is their bill 
if (hours <= 744)
costC = 29.95;
cout << "The charges are $" << costC << endl;
break;

//If user inputs wrong package
default:
//Prompt user to input one of the listed packages only
cout << "Enter only A, B, or C for the package.\n"
<< "Please re-enter package: ";
cin >> package; 
}
 
return 0;
}