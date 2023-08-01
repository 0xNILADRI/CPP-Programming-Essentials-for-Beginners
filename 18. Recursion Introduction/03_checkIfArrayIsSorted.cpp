#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n){
    // base case
    if(n==0 || n==1) return true;
    
    //recursive case
    if(arr[0]<arr[1] && isSorted(arr+1,n-1)) return true;
    return false;
}

int main(){
    int arr[] = {1,2,3,5,7};
    cout<<isSorted(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}