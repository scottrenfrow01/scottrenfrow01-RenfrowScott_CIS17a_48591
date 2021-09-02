/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on August 24, 2021, 2:47 PM
 * Purpose:  Celsius Temperature Table
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
float celsius (float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float   farnht, //The temperature in farenheit
            clsius; //The temperature in celsius
            
    cout << "This program converts temperatures from farenheit to celsius." << endl;
    cout << "---------------------------------------------------------------" << endl;
    cout << "Farenheit              Celsius" <<endl;
    
    //For loop which starts at 0 and goes all the way to 20 
    for (int farnht = 0; farnht <= 20; farnht++){
        clsius = celsius(farnht); //Jumps to the celsius function
        cout << farnht << "                     "; //Outputs the farenheit value
        cout << clsius << endl; //Outputs the celsius value
    }
    
    
    //Initialize or input i.e. set variable values

    
    //Map inputs -> outputs

    
    //Display the outputs


    //Exit stage right or left!
    return 0;
}

//Function which calculates the celsius value given the farenheit value
float celsius (float farnht){
    return (5.0f/9.0f) * (farnht-32);
}
