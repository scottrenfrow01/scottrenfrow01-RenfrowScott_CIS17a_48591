#include <iostream>

using namespace std;

//Function Prototypes
int *getData(int &); //Fill the array;
int *sort(const int *, int); //Sort smallest to largest
int *reverse(const int *, int); //Sort in reverse order
void prntDat(const int *, int); //Print the array

int main(){
	//your code here
	//Declare Variables
	int arySize, //The array size
	    *array; //Pointer to the array
	
	//Function to fill the array    
	array=getData(arySize);
	
	//Sort the array from least to greatest
	array=sort(array, arySize);
	
	//Outputs the sorted array
	prntDat(array, arySize);
	cout<<endl;
	
	//Function which reverses the sorted array
	array=reverse(array, arySize);
	
	//Outputs the reverse order array
	prntDat(array, arySize);
	
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

//Sorts the array from least to greatest
int *sort(const int *array, int arySize){
    //Allocate memory
    int *ary=new int[arySize];
    
    //For loop which copies the array to a new array
    for (int i=0; i<arySize; i++){
        ary[i]=array[i];
    }
    int temp;
    
    //Sorts the array
    for (int i=0; i<arySize; i++){
        for (int j=i+1; j<arySize; j++){
            if (ary[i]>ary[j]){
                temp=ary[i];
                ary[i]=ary[j];
                ary[j]=temp;
            }
        }
    }
    return ary;
}

int *reverse (const int *array, int arySize){
    //Allocate Memory
    int *ary=new int[arySize];
    
    //For loop which copies the array to a new array
    for (int i=0; i<arySize; i++){
        ary[i]=array[i];
    }
    int temp;
    
    //Reverses the sorted array
    for (int i=0; i<arySize; i++){
        for (int j=i+1; j<arySize; j++){
            if (ary[i]<ary[j]){
                temp=ary[i];
                ary[i]=ary[j];
                ary[j]=temp;
            }
        }
    }
    return ary;
}

//Outputs the array
void prntDat (const int *array, int arySize){
    int j=0;
    for (int i=0; i<arySize; i++){
        cout<<array[i];
        if (j<arySize-1){
            cout<<" ";
        }
        j++;
    }
}
