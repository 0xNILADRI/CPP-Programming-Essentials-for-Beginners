/*

First Occurence
Given an array arr, you need to implement a function getFirstOccurence() which returns the index of the first occurrence of the element target in the array.



Example 1.

Input: arr = [1, 3, 4, 10, 3, 5], target = 3

Output: 1

Explanation: Element 3 occurs 2 times in the array. The first occurrence is at index = 1, so we return 1.



Example 2.

Input: arr = [2, 2, 2], target = 2

Output: 0

Explanation: Element 2 occurs 3 times in the array. The first occurrence is at index = 0, so we return 0.

Note: It is guaranteed that target occurs at least once in the given array.

*/
#include <iostream>
using namespace std;

int getFirstOccurenceHelper(int* arr, int target, int currentIndex) {
    if (arr[currentIndex] == target) {
        return currentIndex;
    } else {
        return getFirstOccurenceHelper(arr, target, currentIndex + 1);
    }
}

int getFirstOccurence(int* arr, int target) {
    return getFirstOccurenceHelper(arr, target, 0);
}

int main() {
    int arr[] = {1, 3, 4, 10, 3, 5};
    int target = 3;

    int firstOccurrenceIndex = getFirstOccurence(arr, target);

    cout << "First occurrence of " << target << " is at index: " << firstOccurrenceIndex << endl;

    return 0;
}
