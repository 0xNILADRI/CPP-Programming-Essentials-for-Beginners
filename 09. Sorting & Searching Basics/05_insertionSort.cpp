#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int j=1; j<n; j++){
        int current = arr[j];
        int prev = j - 1;
        while(prev>=0 and arr[prev]>current){
            arr[prev+1] = arr[prev];
            prev -= 1;
        }
        arr[prev+1] = current;
    }
}

void printArray(int arr[], int size){
    int i;
    for (i = 0; i < size; i++)
        cout << " " << arr[i];
}

int main(){
    int a[] = {54,6,23,4,12,3,87,99};
    int n = sizeof(a)/sizeof(int);
    insertionSort(a,n);
    printArray(a,n);
    return 0;
}