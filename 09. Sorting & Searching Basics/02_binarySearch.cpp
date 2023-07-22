#include<iostream>
using namespace std;

void binarySearch(int arr[], int size, int element){
    //binary search only happens in sorted array
    int low=0, high=size-1, mid;
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid]==element){
            cout<<"Found "<<element<<" at index : "<< mid<<endl;
            break;
        }
        else if(arr[mid]>element) high = mid - 1;
        else low = mid + 1;
    }
}

int main(){
    int arr[] ={10,22,33,40,55,66,70,79,80,99};
    int element = 70;
    binarySearch(arr,sizeof(arr)/sizeof(int),element);
    return 0;
}