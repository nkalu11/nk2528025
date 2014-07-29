/* File:  Project 2
 * Author: Nnamdi Kalu
 * Created on July 27, 2014, 7:48 PM
 * Second Project
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants
const int SALARY=10;

//Function Prototypes
void doyouSmoke (int &);
void whatyearBorn(int &); 
void married(int &);
void height(int &);
void job(int &);
void payAverage(float [], const int, int &);
//Execution Begins here
int main(int argc, char** argv) {

    
    int players, age, lifespan=100;
    float year;
    
    cout<<"Welcome to the life span game"<<endl;
    cout<<"Please enter the number of people who are playing."<<endl;
    cin>>players;
    cin.ignore();
    
    for (int games=0; games<players; games++)
    {
        doyouSmoke(lifespan);
        whatyearBorn(lifespan);
        married(lifespan);
        height(lifespan);
        job(lifespan); 
        
        cout<<"Input your salary each year for the last 10 years"<<endl;
        
        float pay[SALARY];
        cin>> pay[0];
        cin>> pay[1];
        cin>> pay[2];
        cin>> pay[3];
        cin>>pay[4];
        cin>>pay[5];
        cin>>pay[6];
        cin>>pay[7];
        cin>>pay[8];
        cin>>pay[9];
        
        
        payAverage(pay, SALARY, lifespan);
        
       
        cout<<"Your predicted lifespan is "<<lifespan<<endl;
    } 
    
       
                    
  
    
    
    return 0;
}


void doyouSmoke (int &lifespan)
{
    string smoke;
    cout<<"Are you a daily smoker?"<<endl;
    getline(cin,smoke);
    
    if(smoke=="Yes"||smoke=="yes")
        for(int index=0; index<=15; index++)
        {
            lifespan--;
        }
    
    
}

void whatyearBorn (int &lifespan)
{
    int born;
    cout<<"What year were you born?"<<endl;
    cin>>born;
    cin.ignore();
    
    if(born<1970)
        for(int index=0; index<=5; index++)
        {
            lifespan--;
        }
    
   cout<<"Your predicted lifespan is "<<lifespan<<endl;
    
}


void married(int &lifespan)
{
    bool married=true;
    string tiedwn;
    cout<<"Are you Married?"<<endl;
    getline(cin,tiedwn);
    
    if(tiedwn!="yes"&&tiedwn!="Yes")
    { 
        married=false;
    
    }
    
    if(married){
        
        for(int index=0; index<2; index++)
        {
            ++lifespan;
        }
    }
    else{
         for(int index=0; index<=3; index++)
            lifespan--;
    }
    //problemmmmmmm
    cout<<"Your predicted lifespan is "<<lifespan<<endl;
}

void height(int &lifespan)
{
   
    float height;
    cout<<"How tall are you, in inches?"<<endl;
    cin>>height;
    cin.ignore();
    
    if(height<70)
       for(int index=0; index<=2; index++)
          {
            ++lifespan;
          }
    else
        lifespan--;
   cout<<"Your predicted lifespan is "<<lifespan<<endl;
    //problemmmmmm
}

void job(int &lifespan)
{
   
    string job;
    cout<<"Do you work in a construction site, as law "<<endl;
   cout<< "enforcement, as a first responder, or in a profession that is very stressful?"<<endl;
    cin>>job;
    getline(cin,job);
    
    if(job=="yes"&&job=="Yes")
       for(int index=0; index<=5; index++)
          {
            lifespan--; 
          }
   
   cout<<"Your predicted lifespan is "<<lifespan<<endl;
    //problemmmmmm

}  
void payAverage(float pay[], const int SALARY, int &lifespan )
{
    float avgpay, sum=0;
       
        for (int count=0; count < SALARY; count++)
            sum+=pay[count];
        
       avgpay= sum/SALARY;
       
       if(avgpay<100000)
           for(int index=0; index<=5; index++)
          {
            lifespan--; 
          }
       
       cout<<"Your pay average is "<<avgpay<<endl;
       
}