/*

Merge two vectors
Given two sorted vectors list1 and list2 , merge the two lists in one and print the new list.

Input: list1 = {-10, 0, 1}, list2 = {1, 2, 3}

Output: -10 0 1 1 2 3

Note: Each element printed must be followed with white space and no newline character must be printed.



Constraints:

0 <= list1.size(), list2.size() <= 100

*/

#include <bits/stdc++.h>
using namespace std;

void mergeSortedVectors(const vector<int>& list1, const vector<int>& list2) {
    vector<int> mergedList;
    size_t i = 0, j = 0;

    while (i < list1.size() && j < list2.size()) {
        if (list1[i] <= list2[j]) {
            mergedList.push_back(list1[i]);
            ++i;
        } else {
            mergedList.push_back(list2[j]);
            ++j;
        }
    }

    // Add remaining elements from list1, if any
    while (i < list1.size()) {
        mergedList.push_back(list1[i]);
        ++i;
    }

    // Add remaining elements from list2, if any
    while (j < list2.size()) {
        mergedList.push_back(list2[j]);
        ++j;
    }

    // Printing the merged list with white spaces
    for (size_t k = 0; k < mergedList.size(); ++k) {
        cout << mergedList[k] << " ";
    }
}

int main() {
    vector<int> list1 = {-10, 0, 1};
    vector<int> list2 = {1, 2, 3};

    // Merge and print the two sorted vectors
    mergeSortedVectors(list1, list2);

    return 0;
}
