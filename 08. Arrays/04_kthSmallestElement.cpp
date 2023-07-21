/*
Kth smallest element in the array.
===================================
Implement a function that takes an array as argument and returns the kth smallest element of the array.



Sample Example 1

A = 4 3 2 1 4 6, K = 3

here 3rd smallest element is 3.

Hence output is 3.



Sample Example 2

A = 10 11 12 13, k = 4

here 4th smallest element is 13.

Hence output is 13.
*/

#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int A[], int k, int sizeOfArray) {
    //implement your code here
    sort(A,A+sizeOfArray);
    return A[k-1];
}

int main(){
    int arr[] = {1,4,5,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(int),k;
    cin>>k;
    cout<<kthSmallest(arr,k,size)<<endl;
    return 0;
}