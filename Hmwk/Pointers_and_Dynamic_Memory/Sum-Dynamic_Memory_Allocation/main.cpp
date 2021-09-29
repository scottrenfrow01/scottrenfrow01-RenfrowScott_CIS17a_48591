#include <iostream>

using namespace std;

//Funciton Prototypes
int *getData(int &);             //Return the array size and the array from the inputs
int *sumAry(const int *, int); //Return the array with successive sums
void prntAry(const int *, int); //Print the array

int main(){
	//your code here
	//Declare Variables
	int arySize, //The array size
	    *array, //Pointer to the array
	    *sum;  //Pointer to the sum array
	
	//Function to fill the array    
	array=getData(arySize);
	
	//Function to create an array with the sums
	sum=sumAry(array, arySize);
	
	//Outputs the original array
	prntAry(array, arySize);
	
	//Prints th sum array
	prntAry(sum, arySize);
	
	delete []sum;
	delete []array;
	
	return 0;
}

//Function which fills the array
int *getData(int &arySize){
    //Get the array size from the user    
    cin>>arySize;
	
    //Allocate memory
    int *array=new int[arySize];
    
    //Fill the array
    for (int i=0; i<arySize; i++){
        cin>>array[i];
    }
    
    //Return the array
    return array;
}

void prntAry (const int *array, int arySize){
   
    int j=0;
    
    //For loop to output each item in the array
    for (int i=0; i<arySize; i++){
        cout<<array[i];
        if (j<arySize-1){ //Formatting
            cout<<" ";
        }
        else if (array[4]<10) { //Formatting
            cout<<endl;
        }
        j++;
    }
}

int *sumAry(const int *array, int arySize){
    
    //Allocate Memory
    int *sum = new int[arySize];
    
    //set the 0 index of the sum array equal to the 0 index of the original array
    sum[0] = array[0];
    
    //For loop which adds the previous index of the sum array to the next index of the original array
    for (int i=1; i<arySize; i++)
        sum[i]=sum[i-1]+array[i];
        
    return sum;
}
