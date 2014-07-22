/*File: Insignifigante
 * Author: Nnamdi Kalu
 * Created on July 14, 2014, 8:11 AM
 * Purpose: First Project
 */


//System Libraries

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    
    //Declare variables
    string play, cont, answer9, answer8, answer3, start, answer1;
    int totalm=0, total=0; 
    float answer4;
    char answer5, answer6, t;
    short answer2;
    unsigned short answer7;
    
   srand(time(0));
    fstream file;
    file.open("gamehints.txt",ios::in);
    string gamehints[5];
    
    
    cout<<"Welcome to ¡Insignifigante!"<<endl;
    cout<<"Input 'Play' to play."<<endl;
    cin>>play;
    
    while (play != "Play")
    {
        cout<<"Error. Rerun the program and input 'Play'!"<<endl;
    }
   
    do
    {        
    cout<<"¡Insignifigante! trivia game!"<<endl;
    cout<<"Its topics span the globe."<<endl;
    cout<<"The game will ask you for "<<endl;
    cout<<"specific dates, as well as the names"<<endl;
    cout<<"of powerful figures from our worlds history."<<endl;
    cout<<"If you do not know the answer to a question"<<endl;
    cout<<" just guess. There are nine questions in this game"<<endl;
    cout<<" so each question is very important."<<endl;
    cout<<"Because the game is so hard, at the beginning "<<endl;
    cout<<"of each game you can input 'Hint' instead,";
    cout<<" of 'Start' to receive a randomly drawn hint."<<endl;
    cout<<"Do NOT input spaces. If you feel a question warrants"<<endl;
    cout<<"a two word response, input both words without a space in between."<<endl;
    cout<<"Remember to capitalize the first letter of";
    cout<<" each word you input."<<endl;
    cout<<"If you're still paying attention input 'Continue'."<<endl;
    cin>>cont;
    
    if (cont== "Continue")
    {
    cout<<"At the end of each game you will be given an"<<endl;
    cout<<" assessment based of your performance."<<endl;
    cout<<"The assessment may hurt, but remember this:"<<endl;
    cout<<"What doesn't kill you makes you STRONGER!"<<endl;
    cout<<"NOW GO AHEAD AND INPUT 'Start' or 'Hint'!"<<endl;
    cout<<"Goodluck!"<<endl;
    cin>>start;
    }
    if (start == "start" ||start == "Start")
    {
       cout<<"On May 4th, 1970, four students were shot and killed by ";
       cout<<"the National Guard during an anti-war protest at what American university?"<<endl;
       cin>>answer1;
            if (answer1 == "KentState" || answer1 == "Kentstate" || answer1 == "kentstate")
               {
                   total++;
               }
              else 
            {
                totalm++;
             cout<<"Wrong!!"<<endl;
            }
            cout<<"Correct: "<<total<<" Missed: "<<totalm<<endl;
    
       cout<<"In what year did the first European";
       cout<<" ship land in NORTH America??"<<endl;
       cin>>answer2;
            if (answer2 == 1497)
            {
                 total++;
            }
            else 
            {
                totalm++;
             cout<<"Wrong!!"<<endl;
            }
        cout<<"Correct: "<<total<<" Missed: "<<totalm<<endl;
       
       cout<<"Which African country gained its independence";
       cout<<" from Britain in the year 1960?"<<endl;
       cin>>answer3;
            if (answer3 == "Nigeria" || answer1 == "nigeria")
            {
                 total++;
            }
            else 
            {
                totalm++;
             cout<<"Wrong!!"<<endl;
            }
      cout<<"Correct: "<<total<<" Missed: "<<totalm<<endl;
      
       cout<<"Input the 4th significant figure of PI."<<endl;
       cin>>answer4;
            if (answer4 == 1)
               {
                   total++;
               }
              else 
            {
                totalm++;
             cout<<"Wrong!!"<<endl;
            }
        cout<<"Correct: "<<total<<" Missed: "<<totalm<<endl;
        
        cout<<"The Black Mamba is the most poisonous land snake. ";
        cout<<"Input 'T', or 'F'?(True or False)."<<endl;
        cin>>answer6;
            if (answer6 == 'F'|| answer6 == 'f')
               {
                   total++;
               }
              else 
            {
                totalm++;
             cout<<"Wrong!!"<<endl;
            }
            cout<<"Correct: "<<total<<" Missed: "<<totalm<<endl;
       
        cout<<"Human blood is blue before being oxygenated. ";
        cout<<"Input 'T', or 'F'?(True or False)."<<endl;
        cin>>answer6;
            if (answer6 == 'F'|| answer6 == 'f')
               {
                   total++;
               }
              else 
            {
                totalm++;
             cout<<"Wrong!!"<<endl;
            }
            cout<<"Correct: "<<total<<" Missed: "<<totalm<<endl;
            
         cout<<"The first atomic bomb dropped on Japan was";
         cout<<" equal to approximately how many tons of TNT?"<<endl;
         cin>>answer7;
            if (answer7 == 20000)
               {
                   total++;
               }
              else 
            {
                totalm++;
             cout<<"Wrong!!"<<endl;
            }
            cout<<"Correct: "<<total<<" Missed: "<<totalm<<endl;
            
            cout<<"What is the first name of the president ";
            cout<<"who served the longest term in American history?"<<endl;
            cin>>answer8;
            if (answer8 == "Franklin" || answer8 == "franklin")
               {
                   total++;
               }
              else 
            {
                totalm++;
             cout<<"Wrong!!"<<endl;
            }
            cout<<"Correct: "<<total<<" Missed: "<<totalm<<endl;
            
            cout<<"Which Mobile operating system featured ";
            cout<<"home screen folders and multitasking first?"<<endl;
            cout<<"IOS or Android?"<<endl;
            cin>>answer9;
            if (answer9 == "Android" || answer9== "android")
               {
                   total++;
               }
              else 
            {
                totalm++;
             cout<<"Wrong!!"<<endl;
            }
            cout<<"Correct: "<<total<<" Missed: "<<totalm<<endl;
      
           
        switch (total){
            case 9:cout<<"Congratulations, answered 9 ";
                      cout<<"correctly, you're a genius!"<<endl;
                break;
               case 8:cout<<"Congratulations, answered ";
                      cout<<"8 correct, you're a genius!"<<endl;
                break;
               case 7:cout<<"Congratulations, you answered 7 ";
                      cout<<"correct, you're a genius!"<<endl;
                break;
               case 6:cout<<"Congratulations, you answered ";
                      cout<<"6 correct, you're very intelligent!"<<endl;
                break;
               case 5:cout<<"Congratulations, you answered ";
                      cout<<"5 correct, you're average!"<<endl;
                break;
                 case 4:cout<<"Congratulations, answered ";
                      cout<<"4 correct, you're normal!"<<endl;
                break;
                 case 3:cout<<"Congratulations, answered ";
                      cout<<"3 correct, you're a moron!"<<endl;
                break;
                 case 2:cout<<"Congratulations, answered ";
                      cout<<"2 correct, you're a moron!"<<endl;
                break;
                 default:cout<<"Congratulations, you scored ";
                      cout<<"incredibly low, you're a moron!"<<endl;
                 }}
        
   
     else if (start== "hint" || start == "Hint")
    {
        
    for(int i=0;i<5;i++){
        getline(file,gamehints[i]);
    }
    
    int random = rand()%5;
    
    cout<<gamehints[random]<<endl;
    }
        
    cout<<"Do you want to play again?";
    cout<<" If yes input 'Y', if not input 'N'."<<endl;
    cin>>t;
    }
      while(t == 'Y' || t == 'y');

    return 0;
    }    