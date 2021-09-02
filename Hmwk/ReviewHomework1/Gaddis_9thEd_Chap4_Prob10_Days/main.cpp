
/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on August 24, 2021, 1:12 PM
 * Purpose:  Days in a Month
 */

//System Libraries
#include <iostream>  //Input/Output Library

using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    short   mnthInp, //The inputted month integer
            yrInp; //The inputted year integer
    
    //Initialize or input i.e. set variable values
    cout << "This program can tell you how many days were in a certain month." << endl;
    cout << "Enter a month (1-12): " << endl;
    cin >> mnthInp; //Accepts the user input 
    cout << "Enter a year: " << endl;
    cin >> yrInp; //Accepts the user input
    
    //Map inputs -> outputs
    

    
    //Display the outputs
    //If the month inputted is January, March, May, July, August, October, or December
    if (mnthInp == 1 || mnthInp == 3 || mnthInp ==5 || mnthInp == 7 || mnthInp == 8 || mnthInp == 10 || mnthInp == 12){
        cout << "There are 31 days in that month." << endl;
    }
    //If the month inputted is April, June, September, or November
    if (mnthInp == 4 || mnthInp == 6 || mnthInp ==9 || mnthInp == 11){
        cout << "There are 30 days in that month." << endl;
    }
    //If the month inputted is February
    if (mnthInp == 2){
        //If the year is divisible by 100 and 400
        if (yrInp % 100 == 0 && yrInp % 400 == 0){
            cout << "There are 29 days in that month" << endl;
        }
        //If the year is divisible by 4
        if (yrInp % 100 != 0 && yrInp % 4 == 0){
            cout << "There are 29 days in that month." << endl;
        }
        else{
            cout << "There are 28 days in that month." << endl;
        }
    }

    //Exit stage right or left!
    return 0;
}
