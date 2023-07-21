/*
Largest and Smallest Number.
==============================
Given an array A of integers.

Implement a function which takes A as argument and returns the largest and smallest number in the array.

Sample Input
===============
9 8 8 5 3 2 0

4 3 4 2 1

Sample Output
===============
9 0

4 1



Explanation :

for test case one, largestElement is 9 & smallestElement is 0

Similarly for test case two, largestElement is 4 & smallestElement is 1.
*/

#include<bits/stdc++.h>
using namespace std;


pair<int, int> largestAndSmallest(int A[], int sizeOfArray) {
        //implement your code here
        sort(A,A+sizeOfArray);
        return make_pair(A[sizeOfArray-1],A[0]);
}

int main(){
    int arr[] = {9,8,8,5,3,2,0};
    int size = sizeof(arr)/sizeof(int);
    pair<int,int> result;
    result = largestAndSmallest(arr,size);
    return 0;
}