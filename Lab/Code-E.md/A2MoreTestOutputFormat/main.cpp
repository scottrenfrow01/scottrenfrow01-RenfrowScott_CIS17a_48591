/* 
 * Author: Scott Renfrow
 * Date: September 14, 2021, 4:45 PM
 * Purpose: Run and examine the input and output
 */

//System Libraries - Post Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed here when needed
    
    //Declare variables or constants here
    //7 characters or less
    float a, //input 1
          b, //input 2
          c, //input 3
          d; //input 4
        
    //Initialize or input data here
    cin>>a>>b>>c>>d;
    
    //Display initial conditions, headings here
    
    //Process inputs  - map to outputs here
    cout<<fixed;
    cout<<setw(9)<<setprecision(0)<<a<<setw(10)<<setprecision(1)<<a<<setw(10)<<setprecision(2)<<a<<endl;
    cout<<setw(9)<<setprecision(0)<<b<<setw(10)<<setprecision(1)<<b<<setw(10)<<setprecision(2)<<b<<endl;
    cout<<setw(9)<<setprecision(0)<<c<<setw(10)<<setprecision(1)<<c<<setw(10)<<setprecision(2)<<c<<endl;
    cout<<setw(9)<<setprecision(0)<<d<<setw(10)<<setprecision(1)<<d<<setw(10)<<setprecision(2)<<d;
    //Format and display outputs here
    
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}
