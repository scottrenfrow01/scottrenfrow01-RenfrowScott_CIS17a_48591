#include <iostream>

using namespace std;

//Funciton Prototypes
int *getData(int &); //Read the array
int *augment(const int *,int); //Augment and copy the original array
void prntAry(const int *,int); //Print the array

int main(){
	//your code here
	//Declare Variables
	int arySize; //The inputted size of the array
	
	cin>>arySize; //Accepts input from user for the size of the array
	
	//Function which fills the array with inputted data
	int *array=getData(arySize);
	
	//Function which outputs the array
	prntAry(array, arySize);
	cout<<endl;
	
	//Function which shifts the original array over one place
	array=augment(array, arySize);
	
	arySize+=1;
	//Function which outputs the augmented array
	prntAry(array, arySize);
	
	delete []array;
	
	
	return 0;
}

//Function which fills the array with inputted data
int *getData (int &arySize){
    
    //Allocate Memory
    int *array=new int[arySize];

    //For loop which fills the array with inputted data
    for (int i=0; i<arySize; i++){
        cin >> array[i];
    }

return array;
}

//Funciton which outputs the array
void prntAry (const int *array, int arySize){
   
    int j=0;
    
    //For loop which outputs each item of the array
    for (int i=0; i<arySize; i++){
        cout<<array[i];
        if (j<arySize-1){ //Formatting
            cout<<" ";
        }
        j++;
    }
    
}

//Function which shifts the array over by one element 
int *augment(const int *array, int arySize){
    
    //Allocate Memory
    int *shift = new int[arySize + 1];
    
    //Sets the first index of the shifted array to 0
    shift[0] = 0;
    
    //For loop which copies the eleemtns of the original array into the shifted array
    for (int i = 0; i<arySize; i++){
        shift[i+1]=array[i];
    }

return shift;
}
