/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on August 24, 2021, 4:42 PM
 * Purpose:  Rain or Shine Problem using a 3D array
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <fstream>
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    const int row = 3; // The number of rows
    const int col = 30; // The number of columns
    string days[row][col];
    int juneR=0, julyR=0, augustR=0;
    int juneS=0, julyS=0, augustS=0, juneC=0, julyC=0, augustC=0;
    
    
    ifstream array;
    
    array.open("RainOrShine.txt");
    
    //For loop which fills the array with data from the file
    for (int rows = 0; rows < row; rows++){
        for (int cols = 0; cols < col; cols++){
            array >> days[rows][cols];
        }
    }
    
    array.close();
    
    //Output the table
    cout << "Here is the table " << endl;
    cout << "---------------------------------------------------------";
    cout << "----------" << endl;
    
    //For loop which outputs whether the day was sunny, cloudy, or rainy
    for (int rows = 0; rows < row; rows++){
        
        if (rows == 0){
            cout << "June   ";
            for (int cols = 0; cols < col; cols++){
                cout << days[rows][cols] << " ";
                string name=days[rows][cols];
                if (name == "R"){
                    juneR++;
                }
                if (name == "C"){
                    juneC++;
                }
                if (name == "S"){
                    juneS++;
                }
            }
        }
        if (rows == 1){
            cout << "July   ";
            for (int cols = 0; cols < col; cols++){
                cout << days[rows][cols] << " ";
                string name=days[rows][cols];
                if (name == "R"){
                    julyR++;
                }
                if (name == "C"){
                    julyC++;
                }
                if (name == "S"){
                    julyS++;
                }
            }
        }
        if (rows == 2){
            cout << "August ";
            for (int cols = 0; cols < col; cols++){
                cout << days[rows][cols] << " ";
                string name=days[rows][cols];
                if (name == "R"){
                    augustR++;
                }
                if (name == "C"){
                    augustC++;
                }
                if (name == "S"){
                    augustS++;
                }
            }
        }
        
        cout << endl;
        cout << endl;
    }
    
    cout << "The number of rainy days in June is " << juneR << endl;
    cout << "The number of cloudy days in June is " << juneC << endl;
    cout << "The number of sunny days in June is " << juneS << endl;
    cout << "The number of rainy days in July is " << julyR << endl;
    cout << "The number of cloudy days in July is " << julyC << endl;
    cout << "The number of sunny days in July is " << julyS << endl;
    cout << "The number of rainy days in August is " << augustR << endl;
    cout << "The number of cloudy days in August is " << augustC << endl;
    cout << "The number of sunny days in August is " << augustS << endl << endl;
    
    
    //If statements which determines which month had the most rainy days
    if (juneR > julyR && juneR > augustR){
        cout << "June had the most rainy days of the three months." << endl;
    }
    if (julyR > juneR && julyR > augustR){
        cout << "July had the most rainy days of the three months." << endl;
    }
    if (augustR > julyR && augustR > juneR){
        cout << "August had the most rainy days of the three months." << endl;
    }
        
    



    //Exit stage right or left!
    return 0;
}

    
    
    
        
    
   

            

