/*

Find first and last occurrence of an element in a sorted array
================================================================
Given an array nums sorted in ascending order with possibly duplicate elements, the task is to print indexes of the first and last occurrences of an element target in the given array. Do not print a newline character.



Example 1.
===========
Input: nums = {1, 3, 5, 5, 5, 5, 67, 123, 125}, target = 5

Output: 2 5



Example 2.
=============
Input: nums = {1, 3, 5, 5, 5, 5, 7, 123, 125 }, target = 7

Output: 6 6



Constraints: 1 <= nums.length <= 100

Note: It is guaranteed that the target exists in the array at least once.

*/

#include<bits/stdc++.h>
using namespace std;

void firstAndLastOccurence(int *arr,int n,int tar) {
        // write your code here
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

    cout << first_occurrence << " " << last_occurrence;
}

int main(){
    int arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125}, target = 5;
    firstAndLastOccurence(arr,sizeof(arr)/sizeof(int),target);
    return 0;
}