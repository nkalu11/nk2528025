/* File: Gaddis 7thED Chapter 2 Problem 4
 * Author: Nnamdi Kalu
 * Created on June 25, 2014, 1:56 PM
 *Purpose Homework Problem 4
 */

//System Level Libraries


#include <iostream>

using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {

    //Cost of meal
    float meal = 44.5;
    //The tax percentage calculated from the meal 
    float tax = .0675;
    //6% *The meal cost
    float mealtax= meal*tax;
    //The cost of the meal added to the tax amount
    float mealtotal = 44.5+mealtax;
    //15% of the total cost of the meal
    float tip = .15* mealtotal;
    //The total of the meal(with tax) added to the tip
    float total = tip+mealtotal;
    
    //Print "Meal Cost" and the cost of the meal
    cout<<"Meal Cost"<<endl;
    cout<<meal<<endl;
   
    //Print "Tax Amount" and the tax amount
    cout<<"Tax Ammount"<<endl;
    cout<<mealtax<<endl;
    
    //Display "Tip" and the amount of the tip
    cout<<"Tip"<<endl;
    cout<<tip<<endl;
    
    //Display "Total Bill" and the bill total
    cout<<"Total Bill"<<endl;
    cout<<total<<endl;
    
    //Exit stage right
    return 0;
}

