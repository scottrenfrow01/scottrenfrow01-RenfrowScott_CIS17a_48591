/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on August 24, 2021, 12:19 PM
 * Purpose:  Celsius to Farenheit Problem
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
    float   celsius, //Temperature in degrees celsius
            frnht, //Temperature in degrees farenheit
            ratio, //A conversion ratio
            frzTmp; //The temperature in farenheit at which water freezes
            
    
    //Initialize or input i.e. set variable values
    frzTmp=32;
    ratio=1.8f;
    
    cout<<"Celsius to Farenheit Converter"<<endl;
    cout<<"Input a temperature in Celsius:";
    
    //Map inputs -> outputs
    cin>>celsius; //Accepts the user input 
    
    frnht=(celsius*ratio)+frzTmp; //Equation to convert from celsius into farenheit
    
    //Display the outputs
    cout<<"The temperature is "<<frnht<<" degrees farenheit"; //Outputs the conversion

    //Exit stage right or left!
    return 0;
}
