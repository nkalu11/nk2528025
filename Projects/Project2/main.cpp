/* File:  Project 2
 * Author: Nnamdi Kalu
 * Created on July 27, 2014, 7:48 PM
 * Purpose: Second Project
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <fstream>
#include <cstdlib>
using namespace std;
//User Libraries

//Global Constants
const int SALARY=10;
const int COLS=14;
const int ROWS=6;
//Function Prototypes
void doyouSmoke (int &);
void whatyearBorn(int &); 
void married(int &);
void height(int &);
void job(int &);
void symptoms(int &);
void payAverage(float [], const int, int &);
void grandParents(int &);
void healthCare(int &);
void junkfood(int &);
void wearSeatbelt(int &);
void calories(int &);
//Execution Begins here
int main(int argc, char** argv) {

    //Set random selection of lines from "Deathday" file
    srand(time(0));
    fstream file;
    file.open("Deathday.txt",ios::in);
    string Deathday[5];
    
    //Declare variables
    int players, age, lifespan=100, t; 
    
    //Simple output of text to show title and explain the game
    cout<<"Welcome to the LIFESPAN game!"<<endl;
    cout<<"This game is simple to play. You will answer questions"<<endl;
    cout<<"about your lifestyle and in the the"<<endl;
    cout<<"end you will be given a prediction of how long you will live!"<<endl;
    cout<<"You will even be given a prediction of the exact day on which"<<endl;
    cout<<"you will die. Input numbers or letters when necessary."<<endl;
    cout<<"Questions that do not ask for number input will require input of 'yes' or 'no'."<<endl;
    cout<<"Please enter the number of people who are playing."<<endl;
    //User input
    cin>>players;
    cin.ignore();
   
    //For loop that decides how many times 
    //to run he game based on how many players there are
    for (int games=0; games<players; games++)
    {
        //Simple output of who the current player is
        cout<<"PLAYER :"<<games+1<<endl;
        
        //Calling all functions as well as sending and receiving the value of "lifespan"
        doyouSmoke(lifespan);
        cout<<"  "<<endl;
        whatyearBorn(lifespan);
        cout<<"  "<<endl;
        married(lifespan);
        cout<<"  "<<endl;
        height(lifespan);
        cout<<"  "<<endl;
        job(lifespan); 
        cout<<"  "<<endl;
        symptoms(lifespan);
        cout<<"  "<<endl;
        junkfood(lifespan);
        cout<<"  "<<endl;
        healthCare(lifespan);
        cout<<"  "<<endl;
        wearSeatbelt(lifespan);
        cout<<"  "<<endl;
        grandParents(lifespan);
        cout<<"  "<<endl;
        calories(lifespan);
        cout<<"  "<<endl;
        
        //simple output to prompt user to input their salary over last decade
        cout<<"Input your salary each year for the last 10 years"<<endl;
        
        //array variables to store the users salaries
        float pay[SALARY];
        cin>>pay[0];
        cin>>pay[1];
        cin>>pay[2];
        cin>>pay[3];
        cin>>pay[4];
        cin>>pay[5];
        cin>>pay[6];
        cin>>pay[7];
        cin>>pay[8];
        cin>>pay[9];
        
        //This block Of code searches the array for negative numbers
        //It will output and error message if it finds one
        if(pay[0]<0||pay[1]<0||pay[2]<0||pay[3]<0
        ||pay[4]<0||pay[5]<0||pay[6]<0||pay[7]<0||pay[8]<0||pay[9]<0)
        {cout<<"Error! Input positive numbers only. Rerun the program"<<endl;}
        //Call the payAvergae function and send the array values as well as the 
        //value of "lifespan"
        payAverage(pay, SALARY, lifespan);
       //used to space out the output
     cout<<"  "<<endl;
     //output of the results from game
     cout<<"Player "<<games+1<<": You will live to be "<<lifespan<<" years old."<<endl;
    
    cout<<"  "<<endl;
    //Input prompt in order to randomly print line from "Deathday" file at end of game
    cout<<"If you would like to know what day of the week you will die, input '1'."<<endl;
    cin>>t;//input
    cin.ignore();
    //do while loop for displaying value from "Deathday"  file
    do{
    int random = rand()%5;
    for(int i=0;i<5;i++){
        getline(file,Deathday[i]);
    } 
    //prints out random day of week, selected from a file,
    //that user will die
    cout<<Deathday[random]<<endl;
    //incrementer to end do-while loop
    t++;
    file.close();}
    while(t<2);
    } 
    
   
    return 0;
}

//Function to determine whether user smokes or not and whether to decrement 
//lifespan variable based on the information received
void doyouSmoke (int &lifespan)
{
    //declare variable
    string smoke;
    //user input prompt
    cout<<"Are you a daily smoker?"<<endl;
    //user input
    getline(cin,smoke);
    
    //if statement to determine whether to decrement lifespan variable or not
    if(smoke=="Yes"||smoke=="yes")
        //for loop decrementer
        for(int index=0; index<=15; index++)
        {
            lifespan--;
        }
 
}

//Function to determine what year user was born whether to decrement 
//or increment lifespan variable based on the information received
void whatyearBorn (int &lifespan)
{
    //declare variables
    int born;
    //user input prompt
    cout<<"What year were you born?"<<endl;
    //user input
    cin>>born;
    cin.ignore();
    
    //if statement to determine whether to decrement lifespan variable or not
    if(born<1970)
        //for loop decrementer
        for(int index=0; index<=5; index++)
        {
            lifespan--;
        }
   
}

//Function to determine whether user is married or not and whether to decrement 
//or increment lifespan variable based on the information received
void married(int &lifespan)
{
    //declare variables
    bool married=true;
    string tiedwn;
    //user input prompt
    cout<<"Are you Married?"<<endl;
    getline(cin,tiedwn);
    
    //if statement for returning boolean value to married variable
    if(tiedwn!="yes"&&tiedwn!="Yes")
    { 
        married=false;
    
    }
    
    //if else statement to determine whether to decrement or increment 
    //lifespan variable
    if(married){
        //for loop incrementer
        for(int index=0; index<2; index++)
        {
            ++lifespan;
        }
    }
    else{
        //for loop decrementer
         for(int index=0; index<=3; index++)
            lifespan--;
    }
   
    
}

//Function to determine height and whether to decrement 
//or increment lifespan variable based on the information received
void height(int &lifespan)
{
   //declare variables
    float height;
    //user input prompt
    cout<<"How tall are you, in inches?"<<endl;
    //user input
    cin>>height;
    cin.ignore();
    //if else statement to determine whether ti increment or decrement 
    //lifespan variable or not
    if(height<70)
        //for loop incrementer
       for(int index=0; index<=2; index++)
          {
            ++lifespan;
          }
    else
        //decrementer
        lifespan--;
   
    
}

//Function to determine whether user has a stressful job or not and whether to decrement 
//lifespan variable based on the information received
void job(int &lifespan)
{
    //declare variables
    string job;
    //user input prompt
    cout<<"Do you work in a construction site, as law "<<endl;
    cout<< "enforcement, as a first responder, or "<<endl;
    cout<< "in a profession that is very stressful?"<<endl;
    //user input
    cin>>job;
    getline(cin,job);
    
    //if statement to determine whether job equals yes
    if(job=="yes"&&job=="Yes")
        //for loop to decrement lifespan
       for(unsigned short index=0; index<=5; index++)
          {
            lifespan--; 
          }
   
  
} 

//Function to determine if user wears a experiences listed symptoms and whether to decrement 
//lifespan variable based on the information received
void symptoms(int &lifespan)
{
    //declare variables
    string aches;
    
    //Two dimensional array to store characters
    char table[ROWS][COLS]= 
    { "HotFlashes", "Indigestion", "Soreness", "Insomnia","Depression", "ChestPains"};
    
    cout<<"  "<<endl;
    //array variables
    cout<<table[0]<<" "<<table[1]<<" "<<table[2]<<" "<<table[3]<<" "<<table[4]<<" "<<table[5]<<"."<<endl;
    cout<<"  "<<endl;
    //user input prompt
    cout<<"Do you experience any of the above symptoms on a daily or weekly basis?"<<endl;
    //user input
    getline(cin,aches);
    
    //if statement to determine whether to decrement lifespan variable
    if(aches=="Yes"||aches=="yes")
        //for loop to decrement lifespan
       for(int index=0; index<=2; index++)
          {
            lifespan--;
          }
  
}

//Function to determine users pay average and whether to decrement 
//lifespan variable based on the information received
void payAverage(float pay[], const int SALARY, int &lifespan )
{
    //declare variables
    float avgpay, sum=0;
    short index=0; 
    
    //user input prompt
    cout<<"It is said that the more money you have the longer you'll live."<<endl;
        //for loop for accumulation of users total salary
    for (int count=0; count < SALARY; count++)
            sum+=pay[count];
        
       //declare variable
       avgpay= sum/SALARY;
       
       //if statement to determine whether lifespan should be incremented or decremented
       if(avgpay<100000)
           //while loop to decrement lifespan
           while (index<=5)
          {
            lifespan--; 
            index++;
          }
       //formatted output of the users salary
       cout<<fixed<<showpoint<<setprecision(2);
       cout<<"Your average salary over the last decade was $"<<avgpay<<"."<<endl;
}

//Function to determine how long users grandparents lived and whether to decrement 
//lifespan variable based on the information received
void grandParents(int &lifespan)
{
    //declare variables
    int plifespan, glifespan;
    //user input prompt 
    cout<<"Input both ages your grandparents (on your moms side)  have lived to."<<endl;
    //user input
    cin>>plifespan;
    cin>>glifespan;
    cin.ignore();
    
    int plifeavg= (plifespan+glifespan)/2;
    
    //if else statement to determine whether to increment or decrement lifespan variable
    if(plifeavg<85)
       lifespan++;
           
    else
        lifespan--;
          
    
   
}  

//Function to determine if user has health care plan and whether to decrement 
//or increment lifespan variable based on the information received
void healthCare(int &lifespan)
{
    //declare variables
    int healthplan;
    
    //user input prompt
    cout<<"Do you have a health care plan?"<<endl;
    cout<<"input '1' for yes or '2' for no."<<endl;
    //user input
    cin>>healthplan;
    
    //switch statement to determine whether lifespan should incremented or decremented 
    switch(healthplan)
    {          //for loop to increment lifespan variable
        case 1: for(unsigned short index=0; index<=15; index++)
          {
            lifespan++; 
          }        
    
    default : for(unsigned short index=0; index<=15; index++)
            //for loop to decrement lifespan
            lifespan--; 
          } 
   
} 

//Function to determine users junk food habits whether to decrement 
//lifespan variable based on the information received
void junkfood(int &lifespan)
{
    //declare variables
    int fastfood;
    //User input prompt
    cout<<"How often a week do you consume fast-food or junk food?"<<endl;
    cout<<"For example, anything at a drive through restaurant or Cheetos."<<endl;
   //user input
    cin>>fastfood;
    cin.ignore();
    
    //if statement that decides whether to increment or decrement lifespan variable
    if (fastfood>10)
        //for loop decrementer
       for(unsigned short index=0; index<=7; index++)
          {
            lifespan--; 
          }
   
  
}

//Function to determine whether user wears a seat belt or not and whether to decrement 
//or increment lifespan variable based on the information received
void wearSeatbelt(int &lifespan)
{
   //Declare variables
    string seatbelt;
    
    //User input prompt
    cout<<"Do you always wear a seat belt while in a vehicle ('yes' or 'no'.)?"<<endl;
    //user input
    cin>>seatbelt;
    cin.ignore();
    
    //if else statement for determining whether to increment or decrement lifespan variable
    if(seatbelt=="Yes"||seatbelt=="yes")
        //for loop incrementer
       for(unsigned short index=0; index<=3; index++)
          {
            lifespan++; 
          }
    else
        //for loop decrementer
        for(unsigned short index=0; index<=8; index++)
          {
            lifespan--; 
          }
    
}

//Function to determine users daily calorie intake and whether to decrement 
//lifespan variable based on the information received
void calories(int &lifespan)
{
   //Declare variables
    int calories;
    cout<<"How many calories do you consume every day?"<<endl;
    cin>>calories;
    
    //If statement to determine whether lifespan 
    //should decremented due to calorie intake
    if(calories>2500)
        //for loop decrementer
       for(unsigned short index=0; index<=3; index++)
          {
            lifespan--; 
          }
    
}