#include<iostream>
using namespace std;
int main()
{

    int arr[] = {5,1,3,6,2}; 
    int size = sizeof(arr)/sizeof(arr[0]);// = 20/4 = 5
    for(int i=1; i<size; i++){
       int value = arr[i];
       int hole = i;
       while(hole > 0 && value < arr[hole-1]){
        arr[hole] = arr[hole-1];
        arr[hole-1] = value;
        hole--;
       }
    }

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}