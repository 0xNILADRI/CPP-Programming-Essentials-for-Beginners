/*

Sort an array !
================
Given an array A of elements belonging to set {0, 1, 2}.

Implement a function that takes A as argument and returns the sorted array A.



Hint :  Time Complexity should be O(n)

Sample Input
===============
2 1 0 0 1 2

1 1 1 0

Sample Output
===============
0 0 1 1 2

0 1 1 1

Explanation :
===============
for test case one, A = {2, 1, 0, 0, 2}. After sorting A becomes {0, 0, 1, 1, 2}, hence Output is 0 0 1 1 2.

Similarly for second test case, Output is 0 1 1 1.

*/

#include<bits/stdc++.h>
using namespace std;

vector<int> sortTheArray(vector<int> A) {
    int low = 0, mid = 0, high = A.size() - 1;

    while (mid <= high) {
        if (A[mid] == 0) {
            swap(A[low], A[mid]);
            low++;
            mid++;
        } 
        
        else if (A[mid] == 1) {
            mid++;
        } 
        
        else {
            swap(A[mid], A[high]);
            high--;
        }
    }
    return A;
}

void printArray(vector<int> arr){
    for (int i = 0; i < arr.size(); i++)
        cout << " " << arr[i];
}

int main(){
    int arr[] = {2,1,0,0,1,2};
    int n = sizeof(arr)/sizeof(int);
    vector<int> a(arr, arr+n); 
    vector<int> result;
    result = sortTheArray(a);
    printArray(result);
    return 0;
}