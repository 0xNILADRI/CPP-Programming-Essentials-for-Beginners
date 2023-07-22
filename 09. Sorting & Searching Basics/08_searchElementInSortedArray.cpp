/*

Search element in sorted array
==================================
Given an array of integers nums and the size of nums as n which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.



Example 1.
============
Input: nums = [-1,0,3,5,9,12], target = 9

Output: 4

Explanation: 9 exists in nums and its index is 4.



Example 2.
==============
Input: nums = [-1,0,3,5,9,12], target = 2

Output: -1

Explanation: 2 does not exist in nums so return -1.



Constraints:

1 <= nums.length <= 104

-10^4 < nums[i], target < 10^4

All the integers in nums are unique.

nums is sorted in ascending order.

*/

#include<bits/stdc++.h>
using namespace std;

int search(int *arr,int n,int tar) {
        // write your code here
        int low=0,mid,high=n-1;
        while(low<=high){
            mid = (low+high)/2;
            if(arr[mid] == tar) return mid;
            else if(arr[mid] > tar) high--;
            else low++;
        }
        return -1;
}

int main(){
    int arr[] ={10,22,33,40,55,66,70,79,80,99};
    int element = 70;
    cout<<"Index : "<<search(arr,sizeof(arr)/sizeof(int),element)<<endl;
    return 0;
}