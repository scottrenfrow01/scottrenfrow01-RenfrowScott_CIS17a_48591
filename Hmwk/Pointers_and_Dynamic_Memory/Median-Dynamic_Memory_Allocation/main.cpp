#include <iostream>
#include <iomanip>

using namespace std;

//Function Prototypes 
int *getData(int&); //Return the array size and the array
void prntDat(int *, int); //Print the integer array
float *median(int *, int); //Fill the median Array with the Float array size, the median, and the integer array get data
void prntMed(float *, int); //Print the median Array

int main(){
    //Declare Variables 
    int arySize, //The size of the array
        *array; //The dynamic array
    
    array=getData(arySize); //Function that gets the array data from user
    
    
    prntDat(array, arySize); //Function that prints the array 
    
    float *mid=median(array, arySize); //Function that creates a float array and calculates the median
    
    prntMed(mid, arySize); //Print the median and the median array
	
	delete []array;
	delete []mid;
    
	//your code here
	return 0;
}

//Function that gets the array data from the user
int *getData(int &arySize){
    cin>>arySize; //User inputs the size of the array
	
    //Allocate memory
    int *num=new int[arySize];
    
    //Fill the array
    for (int i=0; i<arySize; ++i){
        cin>>num[i];
    }
    
    //Return the array
    return num;
}

//Prints the array data
void prntDat (int *ary, int arySize){
    int j=0;
    for (int i=0; i<arySize; ++i){ //Iterates through each element of the array and outputs it 
        cout<<ary[i];
        if (j<arySize-1){ //Formatting
            cout<<" ";
        }
        j++;
    }
    cout<<endl;
}

//Function that creates a new float array and calculates the median
float *median(int *array, int arySize){
    
    int i, j;

    int *ary1=new int[arySize];
    
    for(int i=0; i<arySize; i++){
        ary1[i]=array[i];
    }

    for (i = 0; i < arySize; i++) { //Sorts the array from least to greatest
        for (j = 1; j < arySize-i; j++) {
            if (ary1[j-1] > ary1[j]) { // swap elements j-1 and j
                float temp = ary1[j-1]; //Sets temp=j-1
                ary1[j-1] = ary1[j]; //Sets j-1=j
                ary1[j] = temp; //sets j=temp
            }
        }
    }
    
    //Allocate memory for float array
    float *ary=new float[arySize+2];
    
    for (int i=2; i<arySize+2; ++i){
        ary[i]=1.0f*array[i-2];
    }
    
    ary[0]=arySize+2;
    
    if(arySize%2 !=0){
        float med=*(ary1+(arySize/2));
        ary[1]=med;
    }
    
    else{
        int idx1=(arySize/2)-1;
        int idx2=arySize/2;
        float med=(*(ary1+idx1)+*(ary1+idx2))/2.0f;
        ary[1]=med;
    }
    
    return ary;
}

//Outputs the median and float array
void prntMed(float *ary, int arySize){
    int j=0;
    cout<<ary[0]<<" ";
    for (int i=1; i<arySize+2; ++i){
        cout<<fixed<<showpoint<<setprecision(2)<<ary[i];
        if (j<arySize){
            cout<<" ";
        }
        j++;
    }
}
