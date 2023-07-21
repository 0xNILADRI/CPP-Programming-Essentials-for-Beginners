/*

Rotate an array by K
=====================
Given an array nums and it's size n, rotate the array to the right by K steps, where K is non-negative.

Example 1.

Input: nums = [1,2,3,4,5,6,7], K = 3

Output: [5,6,7,1,2,3,4]

Explanation:

rotate 1 steps to the right: [7,1,2,3,4,5,6]

rotate 2 steps to the right: [6,7,1,2,3,4,5]

rotate 3 steps to the right: [5,6,7,1,2,3,4]



Example 2.

Input: nums = [-1,-100,3,99], K = 2

Output: [3,99,-1,-100]

Explanation:

rotate 1 steps to the right: [99,-1,-100,3]

rotate 2 steps to the right: [3,99,-1,-100]



Constraints:

1 <= nums.length <= 10^5

-2^31 <= nums[i] <= 2^31 - 1

0 <= k <= 10^5

*/

#include<bits/stdc++.h>
using namespace std ;
  void rotate(int* nums, int n, int K) {
        // write your code here
        int temp[n];
        int count = 0;
        // first half of the array
        for(int i=n-K; i<n; i++){
            temp[count] = nums[i];
            count++;
        }
        // second part
        for(int i=0; i<n-K; i++){
            temp[count] = nums[i];
            count++;
        }
        // copy temp array to main array
        for(int i=0; i<n; i++){
            nums[i] = temp[i];
        }
        
    }

int main(){
    int nums[] = {1,2,3,4,5,6,7}, K = 3;
    rotate(nums,sizeof(nums)/sizeof(int),K);
    for(auto ele : nums){
        cout<<ele<<" , ";
    }
    return 0;
}