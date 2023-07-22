#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int pos=0; pos<=n-2; pos++){
        int current = arr[pos];
        int min_pos = pos;
        for(int j=pos; j<n; j++){
            if(arr[j] < arr[min_pos]){
                min_pos = j;
            }
        }
        swap(arr[pos],arr[min_pos]);
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
    selectionSort(a,n);
    printArray(a,n);
    return 0;
}