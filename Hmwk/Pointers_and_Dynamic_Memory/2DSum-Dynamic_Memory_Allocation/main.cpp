#include <iostream>

using namespace std;

//Funciton Prototypes

int **getData(int &,int &);        //Return the 2-D array and its size.
void prntDat(const int* const *,int,int);//Print the 2-D Array
void destroy(int **,int,int);       //Deallocate memory
int sum(const int * const *, int,int);    //Return the Sum


int main(){
	//your code here
	//Declare Variables
	int **array, //A dynamic 2D array
	    rowSz, //The row size
	    colSz, //The column size
	    total; //The sum of all elements in the array
	    
	//Funciton which creates a 2D dynamic array
    array=getData(rowSz, colSz);
    
    //Ouptut the original 2D array
    prntDat(array, rowSz, colSz);
    
    //Function which sums all the elements in the 2D array
    total=sum(array, rowSz, colSz);
    
    cout<<total;
    
    //Deallocate Memory
    destroy(array, rowSz, colSz);
	
	return 0;
}

//A function that creates a 2D dynamic array
int **getData(int &rowSz,int &colSz){
    
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

//A function which outputs the 2D array
void prntDat(const int *const *array, int rowSz, int colSz){
    
    //Two for loops for outputting each item of the 2D array
    for (int i=0; i<rowSz; i++){
        for (int j=0; j<colSz-1; j++){
            cout<<array[i][j]<<" ";
        }
        for (int j=colSz-1; j<colSz; j++){
            cout<<array[i][j];
        }
        cout<<endl;
    }
}

//A function which sums all of the items of the 2D array
int sum(const int *const *array, int rowSz,int colSz){
    
    //Set the inital sum to zero
    int sum=0;
    
    //For loop to add each item
    for (int i=0; i<rowSz; i++){
        for (int j=0; j<colSz; j++){
            sum+=array[i][j];
        }
    }
    return sum;
}

//Function to deallocate Memory
void destroy(int **array, int rowSz, int colSz){
    for (int i=0; i<rowSz; i++)

        delete[] array[i];

    delete array;
}
