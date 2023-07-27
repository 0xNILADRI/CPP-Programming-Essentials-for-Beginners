/*

Largest character.
====================
Implement a function that takes array of characters and its length as argument and returns largest frequency character.



Sample Input
================
a b c d e e e

e e d d d

Sample Output
=================
e

d

Explanation : 

for test case one, e is the largest frequency character.

Similarly for test case two, d is the largest frequency character.

*/

#include <iostream>
#include <unordered_map>
using namespace std;

char findLargestFrequencyCharacter(char arr[], int length) {
    unordered_map<char, int> frequencyMap;

    // Count the frequency of each character in the array
    for (int i = 0; i < length; ++i) {
        frequencyMap[arr[i]]++;
    }

    char maxFrequencyChar = '\0'; // Initialize to null character
    int maxFrequency = 0;

    // Find the character with the largest frequency
    for (const auto& pair : frequencyMap) {
        if (pair.second > maxFrequency) {
            maxFrequencyChar = pair.first;
            maxFrequency = pair.second;
        }
    }

    return maxFrequencyChar;
}

int main() {
    char arr1[] = {'a', 'b', 'c', 'd', 'e', 'e', 'e'};
    int length1 = sizeof(arr1) / sizeof(arr1[0]);

    char arr2[] = {'e', 'e', 'd', 'd', 'd'};
    int length2 = sizeof(arr2) / sizeof(arr2[0]);

    char result1 = findLargestFrequencyCharacter(arr1, length1);
    char result2 = findLargestFrequencyCharacter(arr2, length2);

    cout << "Sample Output:" << endl;
    cout << "Test Case 1: " << result1 << endl; // Output: e
    cout << "Test Case 2: " << result2 << endl; // Output: d

    return 0;
}
