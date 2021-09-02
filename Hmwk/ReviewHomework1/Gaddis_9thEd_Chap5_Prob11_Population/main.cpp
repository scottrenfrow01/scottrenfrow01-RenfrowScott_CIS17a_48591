/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on August 24, 2021, 1:53 PM
 * Purpose:  Population Problem
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
    float   strtPop, //The starting population of organisms
            fnlPop, //The final population of organisms
            popInc, //The average daily increase in population size as a percent
            count, //A counter used in the while loop
            days; //The number of days to capture the data
    
    //Initialize or input i.e. set variable values
    cout << "This program can predict the population of a group of animals" << endl;
    cout << "given the starting population, average population increase, and " << endl;
    cout << "the number of days." << endl;
    cout << "--------------------------------------------------------------" << endl;
    
    cout << "Enter the starting population: ";
    cin >> strtPop; //Accepts user input
    cout << endl;
    cout << "Enter the average population increase as a percentage: ";
    cin >> popInc; //Accepts user input
    cout << endl;
    cout << "Enter the number of days: ";
    cin >> days; //Accepts user input
    cout << endl;
    
    
    //Map inputs -> outputs
    count = days;
    
    //A while loop for input validation
    while (strtPop < 2 || popInc < 0 || days < 1){
        cout << "Input is invalid please input the data again" << endl;
        cout << "Enter the starting population: ";
        cin >> strtPop;
        cout << endl;
        cout << "Enter the average population increase as a percentage: ";
        cin >> popInc;
        cout << endl;
        cout << "Enter the number of days: ";
        cin >> days;
        cout << endl;
    }
    
    //A while loop that calculates the final population
    while (count > 0){
        fnlPop = (strtPop * (popInc/100)) + strtPop; //Final population equation
        strtPop = fnlPop; //Set the starting population to the new final population
        count--; //Decrement the count
    }
    
    //Display the outputs
    cout << "After " << days << " days the final population is " << fnlPop << " organisms." << endl;


    //Exit stage right or left!
    return 0;
}
