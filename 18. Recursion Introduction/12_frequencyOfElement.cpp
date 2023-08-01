/*

Frequency of element
Given an array arr size of the array as  n  and an element target , you need to implement the function getFrequency() which returns the frequency of target in arr.



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

#include <iostream>
using namespace std;

int getFrequencyHelper(int* arr, int n, int target, int currentIndex) {
    if (currentIndex == n) {
        // Base case: If currentIndex reaches the end of the array, return 0 as the element was not found.
        return 0;
    }

    int count = getFrequencyHelper(arr, n, target, currentIndex + 1);

    if (arr[currentIndex] == target) {
        // If the current element matches the target, increment the count.
        count++;
    }

    return count;
}

int getFrequency(int* arr, int n, int target) {
    return getFrequencyHelper(arr, n, target, 0);
}

int main() {
    int arr[] = {1, 2, 2};
    int target = 2;
    int n = sizeof(arr) / sizeof(arr[0]);

    int frequency = getFrequency(arr, n, target);

    cout << "Frequency of " << target << " is: " << frequency << endl;

    return 0;
}