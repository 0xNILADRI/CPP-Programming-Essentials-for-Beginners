/*

Find the total number of occurrence of an element in an array
================================================================
Given a sorted array nums, possibly with duplicates, find the number of occurrences of the target element.



Input: nums = {4, 4, 8, 8, 8, 15, 16, 23, 23, 42}, target = 8

Output: 3



Constraints:

0 <= nums.length <= 100

*/

#include<bits/stdc++.h>
using namespace std;

int getCount(int *arr,int n,int tar) {
        int first_occurrence = -1;
        int last_occurrence = -1;
        int left = 0;
        int right = n - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == tar) {
                first_occurrence = mid;
                last_occurrence = mid;
                while (first_occurrence > 0 && arr[first_occurrence - 1] == tar)
                    first_occurrence--;
                while (last_occurrence < n - 1 && arr[last_occurrence + 1] == tar)
                    last_occurrence++;
                break;
            } 
            
            else if (arr[mid] < tar) {
                left = mid + 1;
            } 
            
            else {
                right = mid - 1;
            }
        }

    return last_occurrence - first_occurrence + 1;
}

int main(){
    int arr[] = {4, 4, 8, 8, 8, 15, 16, 23, 23, 42}, target = 8;
    cout<<"Total Count : "<<getCount(arr,sizeof(arr)/sizeof(int),target);
    return 0;
}