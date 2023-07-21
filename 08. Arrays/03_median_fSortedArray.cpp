/*
Median of sorted Array.
=========================
Implement a function that takes a sorted array as argument and returns the median of the sorted Array.



Sample Input
===============
1 2 3 3 4 5

1 4 5 5 6 7 8 9

Sample Output
================
3

5

Explanation :

for test case one, 3 is the middle most element in the sequence.

Similarly for test case two, 5 is the middle most element.

*/

#include<bits/stdc++.h>
using namespace std;


int calculateMedian(int A[], int sizeOfArray) {
    vector<int> nums(A,A+sizeOfArray);
    std::unordered_map<int, int> freqMap;

    for (int num : nums) {
        freqMap[num]++;
    }

    int median = nums[0];  
    int maxCount = 0;

    for (const auto& entry : freqMap) {
        if (entry.second > maxCount) {
            maxCount = entry.second;
            median = entry.first;
        }
    }

    return median;
}

int main(){
    int arr[] = {1,4,5,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);
    cout<<calculateMedian(arr,size)<<endl;
    return 0;
}