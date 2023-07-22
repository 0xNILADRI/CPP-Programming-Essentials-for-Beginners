#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
  
        if (swapped == false)
            break;
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
    bubbleSort(a,n);
    printArray(a,n);
    return 0;
}