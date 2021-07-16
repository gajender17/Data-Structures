#include<iostream>
using namespace std;

void displayArray(int* &array , int* &size){
    cout<<endl;
    cout<<"Displaying Your Array...."<<endl;
    cout<<"[ ";
    for (int i = 0; i < *size; i++){
        cout<<array[i];
        if(i!= *size-1){
            cout<<" ,";
        }
    }
    cout<<" ]";
    cout<<endl<<endl;  
}
void swap(int* &a,int* &b){
    int temp; 
    temp = *a;
    *a   = *b;
    *b   = temp;
}
void bubbleSort(int* &array , int* &size){
    
    
    for (int i = 0; i < *size; i++){
        
        int* comparisons  = new int(0);
        for (int j = 0; j < *size - i-1; j++){
            if(array[j]>array[j+1]){
                swap(array[j],array[j+1]);
                
                *comparisons+=1;
            }
        }
        cout<<"ITERATION : "<<i+1<<endl;
        cout<<"Comparisons : "<<*comparisons<<endl;
        
    }
    
}
int main()
{
    int  arr[]  = {7,38,3,60,76,8,3,10,70,8,19,31};
    int *array  = arr;
    int *length = new int(12);
    displayArray(array,length);
    bubbleSort(array,length);
    displayArray(array,length);
    
    delete[] array;
    delete length;
    
    return 0;
}
