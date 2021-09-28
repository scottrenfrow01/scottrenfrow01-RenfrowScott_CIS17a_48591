#include <iostream>

using namespace std;

//Function Prototypes
int **getData(int &,int &);//Get the array Data
void printDat(const int * const *,int,int);//Print the Matrix
int **augment(const int * const *,int,int);//Augment the original array
void destroy(int **,int);//Destroy the Matrix, i.e., reallocate memory

int main(){
	//your code here
	//Declare Variables
	int **array, //A 2D dynamic array
	    rowSz, // The row size
	    colSz; //The inputted column size
	
	//A funciton to fill the 2D dynamic array with user inputs
	array=getData(rowSz, colSz);
	
	//A function which outputs the 2D dynamic array
	printDat(array, rowSz, colSz);
	cout<<endl;
	
	rowSz+=1;
	colSz+=1;
	
	//A function which augments the 2D dynamic array
	array=augment(array, rowSz, colSz);
	
	//A function which outputs the 2D augmented dynamic array
	printDat(array, rowSz, colSz);
	
	//Function which deallocates Memory
	destroy(array, rowSz);
	
	return 0;
}

//A funciton to fill the 2D dynamic array with user inputs
int **getData (int &rowSz, int &colSz){
    cin>>rowSz;
    cin>>colSz;
    
    //Allocate Memory
    int **array=new int *[rowSz];
    
    for (int i = 0; i < rowSz; i++){
        array[i] = new int[colSz];
        for (int j = 0; j < colSz; j++)
            cin >> array[i][j];
    }

    return array;
}

//A funciton which ouptuts the 2d dynamic array
void printDat (const int *const *array, int rowSz, int colSz){
    //Two for loops for outputting each item of the 2D array
    for (int i=0; i<rowSz-1; i++){
        for (int j=0; j<colSz-1; j++){
            cout<<array[i][j]<<" ";
        }
        for (int j=colSz-1; j<colSz; j++){
            cout<<array[i][j];
        }
        cout<<endl;
    }
    for (int i=rowSz-1; i<rowSz; i++){
        for (int j=0; j<colSz-1; j++){
            cout<<array[i][j]<<" ";
        }
        for (int j=colSz-1; j<colSz; j++){
            cout<<array[i][j];
        }
    }
}

//A function which augments the 2D dynamic array
int **augment (const int *const *array, int rowSz, int colSz){
    
    //Allocate memory
    int** ary = new int*[rowSz];
    
    for (int i = 0; i < rowSz; ++i)
        ary[i] = new int[colSz];
    
    //Augment the 2D array
    for(int i=0;i<rowSz;i++){
        for(int j=0;j<colSz;j++){
            if(i==0){
                ary[i][j]=0;
            }
            else if(j==0){
                ary[i][j]=0;                  
            }
            else{
                ary[i][j]=array[i-1][j-1];
            }
        }
    }
       
return ary;
}

//Function which deallocates memory
void destroy (int **array, int rowSz){
    for (int i=0; i<rowSz; i++){
        delete[] array[i];;
    }
}
