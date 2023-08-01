/*

Last Occurence
Given an array arr and the size of the array as n, you need to implement a function getLastOccurence() which returns the index of the last occurrence of the element target in the array.



Example 1.

Input: arr = [1, 3, 4, 10, 3, 5], target = 3

Output: 4

Explanation: Element 3 occurs 2 times in the array. The last occurrence is at index = 4, so we return 4.



Example 2.

Input: arr = [2, 2, 2], target = 2

Output: 2

Explanation: Element 2 occurs 3 times in the array. The last occurrence is at index = 2, so we return 2.

Note: It is guaranteed that target occurs at least once in the given array.

*/

#include <iostream>
using namespace std;

int getLastOccurenceHelper(int* arr, int n, int target, int currentIndex) {
    if (currentIndex == n) {
        // Base case: If currentIndex reaches the end of the array, return -1 as the element was not found.
        return -1;
    }

    int nextIndex = getLastOccurenceHelper(arr, n, target, currentIndex + 1);

    if (nextIndex == -1 && arr[currentIndex] == target) {
        // If the element is found for the first time in the remaining array, return the current index.
        return currentIndex;
    }

    return nextIndex;
}

int getLastOccurence(int* arr, int n, int target) {
    return getLastOccurenceHelper(arr, n, target, 0);
}

int main() {
    int arr[] = {1, 3, 4, 10, 3, 5};
    int target = 3;
    int n = sizeof(arr) / sizeof(arr[0]);

    int lastOccurrenceIndex = getLastOccurence(arr, n, target);

    if (lastOccurrenceIndex != -1) {
        cout << "Last occurrence of " << target << " is at index: " << lastOccurrenceIndex << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
