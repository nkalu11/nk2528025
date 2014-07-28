/* 
 * File:   main.cpp
 * Author: Nnamdi
 *
 * Created on July 27, 2014, 7:48 PM
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants
const int LIFESPAN=100;
//Function Prototypes
int doyouSmoke (int &);
//Execution Begins here
int main(int argc, char** argv) {

    
    int players, age;
    string smoke;
    
    cout<<"Welcome to the life span game"<<endl;
    cout<<"Please enter the number of people who are playing."<<endl;
    cin>>players;
    
    for(int games=0; games>players; games++)
    {
        smoke=doyouSmoke();
        
        cout<<"Your predicted lifespan is"<<smoke<<endl;
        
    }
    
    
    return 0;
}


doyouSmoke (string &smoke)
{
    cout<<"Are you a daily smoker?"<<endl;
    cin>>smoke;
    
    if(smoke=="Yes"||smoke=="yes")
       LIFESPAN--;
    return LIFESPAN;
    
}