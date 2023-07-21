/*

Find the frequency of the given element
Given an array arr  and the size of the array as n and an element target , you need to implement the function getFrequency() which returns the frequency of target in arr.

Example 1.

Input: arr = [1, 2, 2], target = 2

Output: 2

Explanation: target = 2 appears two times in the array.



Example 2.

Input: arr = [1, 2, 2], target = 1

Output: 1

Explanation: target = 1 appears once in the array.



Constraints:

0 <= nums.length <= 20

-2^31 <= nums[i] <= 2^31-1

*/

 #include<bits/stdc++.h>
 using namespace std ;
 
 
 int getFrequency(int* arr, int n, int target){
    // write your code here
    int freq=0;
    for(int i=0; i<n; i++){
        if(arr[i]==target) freq++;
    }
    return freq;
}

int main(){
    int arr[] = {1,2,2};
    int target = 2;
    cout<<getFrequency(arr,sizeof(arr)/sizeof(int),target);
    return 0;
}