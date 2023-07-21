/*

Three Sum
Given an integer array nums, return 1 if there exists a triplet [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0, else return 0.



Example 1.

Input: nums = [12,3,4,1,6,9]

Output: 1

Explanation: There exists a triplet nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0, so we return true.



Example 2.

Input: nums = [0, 1, 1]

Output: 0

Explanation: The only possible triplet does not sum up to 0.



Constraints:

3 <= nums.length <= 3000

-10^5 <= nums[i] <= 10^5

*/

#include<bits/stdc++.h>
using namespace std ;

 bool threeSum(int* nums, int size) {
        // write your code here
        for(int i=0; i<size-2; i++){
            for(int j=i; j<size-1; j++){
                for(int k=j; k<size; k++){
                    if((i!=j && i!=k && j!=k) && (nums[i]+nums[j]+nums[k]==0)){
                        return true;
                    }
                }
            }
        }
        return false ;
    }

int main(){
    int nums[] = {12,3,4,1,6,9};
    cout<<threeSum(nums,sizeof(nums)/sizeof(int))<<endl;
    return 0;
}