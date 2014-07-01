/*File: 
 * Author: Nnamdi Kalu
 *Created on June 26, 2014, 10:40 AM
 *Gaddis 7thED Chapter 2 Problem 6
 * Purpose Problem 6 in Gaddis 7thED Chapter 2
 */

//System Level Libraries

#include <iostream>

using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {

    //FIrst item is $12.95
    float Item1= 12.95;
    //Second item is $24.95
    float Item2= 24.95;
    //Third item is $6.95
    float Item3= 6.95;
    //fourth item is $14.95
    float Item4= 14.95;
    //Fifth item is $3.95
    float Item5= 3.95;
    
    //Sum of all items
    float subtotl= Item1+Item2+Item3+Item4+Item5;
    
    //Sales tax
    float saltax= .06*subtotl;
    
    //Sales tax added to the subtotal
    float total= saltax+subtotl;
    
    //print "Subtotal" and the subtotal
    cout<<"Subtotal"<<endl;
    cout<<subtotl<<endl;
    
    //print "Sales Tax" and the sales tax
    cout<<"Sales Tax"<<endl;
    cout<<saltax<<endl;
    
    //print "Total" and show the total 
    cout<<"Total"<<endl;
    cout<<total<<endl;
    return 0;
}

