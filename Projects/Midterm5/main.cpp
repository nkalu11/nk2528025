/* 
 * File:   main.cpp
 * Author: teachers
 *
 * Created on July 17, 2014, 1:08 PM
 */

 
#include <iostream> 
#include <iomanip> 

using namespace std; 

int main() 
{ 
    //Declare constant variables
    const int   STD_HRS      = 40;
    const float DOUBOVR_MULT = 2;
    const float TRPOVER_MULT = 3;
  
    //Output to 2 decimal places
   cout << fixed << showpoint;
   cout << setprecision(2);
  
   //Declare variables                  
   float hours, rate, regular, overtime;
   int hou, triptim;
   //regular= straight time, overtime= double time,
   //triptim= triple time, hou= decremented hours
   //hours = hours worked, rate= rate of pay
   
   
   //Prompt user to input hours worked
   cout << "Enter hours worked: "<<endl;
   cin  >> hours;
   
   //Prompt user to enter the rate
   cout << "Enter rate: "<<endl;
   cin  >> rate;
   
   
   
   //Determine the pay for straight time
   if ( hours <= STD_HRS )
   {
      regular  = hours * rate;
      overtime = 0.0;
   }
   //determine pay for double time
   else if (hours <= 50 )
   {
      regular  = STD_HRS * rate;
      overtime = (hours - STD_HRS) * rate * DOUBOVR_MULT;
   }
   //determine pay for triple time
   else 
   {
      regular  = STD_HRS * rate;
      
      triptim = (hours - STD_HRS-10) * rate * TRPOVER_MULT;
      
      while( hours>10)
      {   hours--;
          hou = hours;  
      }
          overtime = ((hou) * rate * DOUBOVR_MULT)+triptim;
   } 
   
   //Add up and output the pay for the user
   float pay;
   pay = regular + overtime;
   cout << "Pay: $" << pay << endl;
   
   
   
   return 0;
}
