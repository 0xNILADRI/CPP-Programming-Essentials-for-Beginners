/*
Pair Sum
Given an array of integers nums and an integer target, print the indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

While printing the answer, the order must be maintained.



Example 1.

Input: nums = [2, 7, 11, 15], target = 9

Output: (0,1)

Explanation: Because nums[0] + nums[1] == 9, we return [0, 1]



Example 2.

Input: nums = [3, 2, 4], target = 6

Output: (1,2)

Explanation: Because nums[1] + nums[2] == 6, we return [1, 2]
*/

 #include<bits/stdc++.h>
 using namespace std ;
 
 
#include<bits/stdc++.h>
using namespace std ;

void twoSum(int* nums, int size,int target) {
    // write your code here
    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if(nums[i] + nums[j] == target){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}

int main(){
    int nums[] = {2, 7, 11, 15}, target = 9;
    twoSum(nums,sizeof(nums)/sizeof(int),target);
    return 0;
}