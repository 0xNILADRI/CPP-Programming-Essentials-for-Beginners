/*

Move all negative elements to one side of the array
Given an array arr and the size of the array as n consisting of positive and negative integers, move all the negative elements to the end of the array without changing the order of positive element and negative element.

Note: You don't have to return any array, you have to make changes in the input array itself.



Example 1.

Input: arr = [1, -2, -4, 5, 0]

Output: [1, 5, 0, -2, -4]



Example 2.

Input: arr = [1, -1, 3, 2, -7, -5, 11, 6]

Output: [1, 3, 2, 11, 6, -1, -7, -5]
*/

#include<bits/stdc++.h>
using namespace std ;

 void moveNegativesToEnd(int* arr,int n){
        // write your code here
        int j = 0;
        for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main(){
    int arr[] = {1,4,5,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(int),k;
    cin>>k;
    moveNegativesToEnd(arr,size);
    for(auto ele : arr){
        cout<<ele<<" , ";
    }
    cout<<endl;
    return 0;
}