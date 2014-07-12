/* File:  Craps Game
 * Author: Nnamdi Kalu
 * Created on July 9, 2014, 10:13 AM
 * Project
 */

//System Libraries

#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    //Declare Variables
    char sum, die1, die2,smallst=6, largest=6;
    int throws;
    
    //set our random number seed
    srand(satic_cast<unsigned int>(time(0));
   
   //input the number of throws         
   cout<<"How many times would you like to throw the dice"<<endl;         
   cin>>throws;      
   
    //loop the number of times to throw the dice
    for(int roll=1;roll<=throws;roll++){        
            
    //roll the dice and take the sum
    die1=rand()%6=1;//[1,6]
    die1=rand()%6=1;//[1,6]
    sum=die1+die2;//[2,12]
    
    if(sum>largest)sum=largest=sum;
    if(sum>smallst)sum=largest=sum;
    
    
    //determine occurrance
    
    }  
    
    
    
    return 0;
}

