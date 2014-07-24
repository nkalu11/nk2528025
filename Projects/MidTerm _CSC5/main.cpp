//Nnamdi Kalu
//July 18th, 2014
//Mid-term menu

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();

//Execution begins here
int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1: problem1();break;
        case 2: problem2();break;
        case 3: problem3();break;
        case 4: problem4();break;
        case 5: problem5();break;
        case 6: problem6();break;
            default:;
        };
    }while(inN<7);
    return 0;
}

//Menu Function
void Menu(){
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 5"<<endl;
    cout<<"Type 6 for problem 6"<<endl;
    cout<<"Type 7 to exit \n"<<endl;
}

//Choose problem number function
int getN(){
    int inN;
    cin>>inN;
    return inN;
}

//Solution to problem 1
void problem1(){
    //Declare variables
    int  d, total=0;
    
    //Prompt user to input desired amount of lines
    cout<<"How many lines do you want to output?"<<endl;                                                                                     
    cin>>d;
    
    //Decrement output number backwards to 1
    do
    {   
       cout<<setw(d)<<d<<endl;
       d--;
       total = d;
    }while (total > 0);
    
}

//Solution to problem 2
void problem2(){
   
    //declare variables
    int num, total=0;
    
    //Input command prompt
    cout<<"Input a 4 digit number"<<endl;
    cin>>num;
    
    //declare variables
    int div= 1000;
    int num1= (num/div) % 10;
    
    //while loop to print astericks based on number input
    while (div>0)
    {
       num1--;
       total = num1;
    
    cout<<num1;
    
    while (num1>0);
    { 
        cout<<"*"<<endl;
        num1--;
    }   
    
    (div= div/10);
    }
}

//Solution to problem 3
void problem3(){
    
   //Declare variables
    unsigned short input; 
    int pin;
    
    //Prompt user to input the debit pin code
    cout<<"Please enter debit card pin number!(1234)"<<endl;
    cin>>pin;
    
    //Determine if the pin is correct or not
    if(pin == 1234)
    {
        //Declare variables
    unsigned short input2, input3, input4, amninp;
    unsigned short inibal, inptcrd;
    int totl=0;
    
    //Prompt user to input the initial balance]
    cout<<"What was the initial balance of the card?"<<endl;
    cin>>inibal;
   
    //output initial value
    cout<<"Initial balance on card was $"<<inibal<<"."<<endl;
    
    //Ask user how many times they added to card this month
    cout<<"How many times did you add cash to your debit card this month?."<<endl;
    cin>>inptcrd;
    
    //Accumulator to add all credits inputed
    for (int count = 1; count <= inptcrd; count++ )
    {
        cout<<"Please enter the amounts you added to your card."<<endl;
        cin>>amninp;
                totl += amninp;
    }
    
    //Declare variables
    int totbal= totl+inibal;
    
    //Output The total amount originally on card
    cout<<"The total balance on the card was $"<<totbal<<"."<<endl;
    
    //Prompt user to input the amounts spent that month 
    cout<<"Input the amounts spent this month."<<endl;
    cin>>input2>>input3>>input4;
    
    //Declare variables
    int total = input2+input3+input4;
    int difference = totbal-total;
    
    //Output the users balance
    cout<<"Your balance is $"<<difference<<"."<<endl;
    
    //If the user over drafted tell them that 
    //$27.75 will be deducted from their account
    //Add 27.75 to the balance on the card
    if(difference<0)
    {
        
        cout<<"Because you've overdrawn, an additional fee of";
        cout<<" $27.75 has been charged to your account."<<endl;
        short neblance = difference - 27.75;
        cout<<"The resulting balance is $"<<neblance<<"."<<endl;
    }
        //If user inputed wrong pin, have them re-input
    }
    else
    {
        cout<<"You've entered the wrong pin number."<<endl;
        cout<<"Rerun the program and input the correct pin number."<<endl;
    }
}

//Solution to problem 4
void problem4(){

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
costB = costA - costB; 
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
 
}

//Solution to problem 5
void problem5(){
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
   
}

//Solution to problem 6
void problem6(){
    
    //Declare variables
    int a, n, b;
    float ex=1,x, powx=1,perc_err, factorial; 
    
    //Prompt the user to input n value
    cout<<"Enter an integer n to specify ";
    cout<< "how many terms will be used in the sequence"<<endl;
    cin>>n;
    //Prompt user to input the x value
    cout<<"Enter the value x for e to the x"<<endl;
    cin>>x;
    
    //accumulator to determine the percent error and e^xx value 
       for (b=0; b < n-1; b++) 
       {
           factorial = 1;
           
           for (a=0; a < b+1; a++)
           {   
            factorial= factorial * (a=1);
            powx = powx * x;  
           ex = ex + powx/factorial;
           }
       
    perc_err = ((-1*(2.71828182845904523536028747135266249-ex))/2.718281828);
    cout<<"The percent error is "<<perc_err<<"%"<<endl;
    cout<<setprecision(35);
    cout<<"For "<<n<<" terms, the e ^ x value is "<<ex<<endl;
       }
}

//Exit Comment
void def(int inN){
    cout<<"You typed "<<inN<<" to exit the program"<<endl;
}