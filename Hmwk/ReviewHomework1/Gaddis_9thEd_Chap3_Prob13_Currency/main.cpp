/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on August 24, 2021, 12:48 PM
 * Purpose:  Currency Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    
    //Declare Variables
    float   YEN_PER_DOLLAR, //The amount of Yens per Dollar
            inp, //The user input
            EUROS_PER_DOLLAR, //The amount of Euros per Dollar
            yenCnv, //The conversion from Dollars to Yen
            eurCnv; //The conversion from Dollars to Euros
    
    //Initialize or input i.e. set variable values
            YEN_PER_DOLLAR = 98.93f; //There are 98.93 Yens in 1 Dollar
            EUROS_PER_DOLLAR = 0.74f; //There are 0.74 Euros in 1 Dollar
            
            cout << "Input a Dollar amount and I will convert that amount ";
            cout << "to both Yens and Euros: ";
    
    //Map inputs -> outputs
            cin >> inp; //Accepts the users input
            
            yenCnv = inp * YEN_PER_DOLLAR; //Equation for converting form Dollars to Yens
            eurCnv = inp * EUROS_PER_DOLLAR;  //Equation for converting from Dollars to Euros
    
    //Display the outputs
            cout << "Amount in Yen: " << fixed << setprecision(2) << showpoint << yenCnv << endl;
            cout << "Amount in Euros: " << fixed << setprecision(2) << showpoint<< eurCnv << endl;

    //Exit stage right or left!
    return 0;
}
