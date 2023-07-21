/*

find Missing number.
=======================
Given an array A of size (n-1) with all integers from 1 to n except one missing number.


Implement a function that takes A as an argument and returns the missing number.



Sample Input
==============
3 4 2

6 3 2 5 1

Sample Output
===============
1

4

Explanation :

for test case one, n = 4 and 1 is missing.

Similarly for test case two, n = 6 and 4 is missing.


*/

#include<bits/stdc++.h>
using namespace std;

int findMissingNumber(int A[], int sizeOfArray) {
    //implement your code here
    sort(A, A+sizeOfArray);
    for(int i=0; i<sizeOfArray-1; i++){
        if(A[i+1] - A[i] != 1){
            return (A[i]+1) ;
        }
    }
    return 1;
}

int main(){
	int arr[] = {6,3,,2,5,1};
	int size = sizeof(arr)/sizeof(int);
	cout<<findMissingNumber(arr,size)<<endl;
	return 0;
}
