/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on August 31, 2021, 10:57 AM
 * Purpose:  Binary String Search
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void sortArray(string[], int);
void swap(string &, string &);
int binarySearch(string [], int, string);


//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    // Array with the names
    const int NUM_NAMES = 20;
    string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                        "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                        "Taylor, Terri", "Johnson, Jill",
                        "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
                        "James, Jean", "Weaver, Jim", "Pore, Bob",
                        "Rutherford, Greg", "Javens, Renee",
                        "Harrison, Rose", "Setzer, Cathy",
                        "Pike, Gordon", "Holland, Beth"};
    
    
    //Initialize or input i.e. set variable values
    sortArray(names, NUM_NAMES);
    
    string input;
    cout << "Input a name you would like me to search for: ";
    getline(cin, input); //Takes in the user input and puts it in a variable
  
    int results = binarySearch(names, NUM_NAMES, input);
    
    //If the name was found
    if (results != -1){
        cout << names[results] << " was found." << endl;
    }
    //If the name was not found
    else {
        cout << input << " was not found." << endl;
    }


    //Exit stage right or left!
    return 0;
}

//Function which sorts the array
void sortArray (string array[], int ARRAY_SIZE)
{
    int minIdx;
    string minVal;
    
    for (int strtIdx = 0; strtIdx < (ARRAY_SIZE-1); strtIdx++){
        minIdx = strtIdx;
        minVal = array[strtIdx];
        for (int index = strtIdx + 1; index < ARRAY_SIZE; index++){
            if (array[index] < minVal){
                minVal = array[index];
                minIdx = index;
            }
        }
        swap(array[minIdx], array[strtIdx]);
    }
}

//Second function which helps sort the array by swapping values
void swap (string &x, string &y)
{
    string temp = x;
    x = y;
    y = temp;
}

//Function which searches through the sorted array for the inputted name
int binarySearch(string array[], int array_size, string input)
{
    int first = 0,
        last = array_size - 1,
        middle,
        position = -1;
    bool found = false;
    
    while (!found && first <= last)
    {
        middle = (first + last)/2;
        
        if(array[middle] == input)
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > input) //If value is in lower half
            last = middle-1;
        else
            first = middle + 1; //If value is in upper half
    }
    return position;
}
