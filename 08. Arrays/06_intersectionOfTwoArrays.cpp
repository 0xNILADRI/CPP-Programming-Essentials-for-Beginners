/*
Find intersection of the two arrays
Given two sorted integer arrays nums1 and nums2, print their intersection.

All the elements in nums1 and nums2 are unique. While printing, the order of elements must be maintained.

If there is no intersection, print -1 instead.

Note: Print a white space after each element.



Example 1.

Input: nums1 = [1, 2, 4, 9], nums2 = [2, 3, 5, 9, 11]

Output: 2 9

Explanation: Elements 2 and 9 are present in both arrays.



Example 2.

Input: nums1 = [5, 8, 10], nums2 = [2, 3, 6, 9, 11]

Output: -1

Explanation: There is no element common to both arrays.



Constraints: 0 <= nums1.length, nums2.length <= 20
*/

#include<bits/stdc++.h>
using namespace std ;

void printIntersection(int* nums1,int n, int* nums2,int m){
    // write your code here
    // n is the size of array nums1 and 
    // m is the size of array nums2 and
    bool  isCommon = false;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(nums1[i] == nums2[j]){
                isCommon = true;
                cout<<nums1[i]<<" ";  
            } 
        }
    }
    if(isCommon==false) cout<<-1;
}

int main(){
    int nums1[] = {1, 2, 4, 9}, nums2[] = {2, 3, 5, 9, 11};
    int size1 = sizeof(nums1)/sizeof(int), size2 = sizeof(nums2)/sizeof(int);
    printIntersection(nums1,size1,nums2,size2);
    return 0;
}