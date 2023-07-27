/*

Largest frequency character
=============================
Implement a function that takes an character array as an argument and returns the largest frequency character. Return only the freqency.


Note : Answer is Unique.



Sample Input
=================
a b c d e e f f f

d a c g c c d d d

Sample Output
=================
3

4

Explanation :

for test case one, the frequency of f is 3 which is highest.

Similarly for second test case, d should be the answer.



Bonus :  No use of extra memory.

*/

#include <iostream>

int findLargestFrequencyCharacter(char arr[], int length) {
    int maxFrequency = 0;
    char maxFrequencyChar = '\0'; // Initialize to null character

    // Find the character with the largest frequency
    for (int i = 0; i < length; ++i) {
        char currentChar = arr[i];
        int currentFrequency = 0;

        // Count the frequency of the current character in the array
        for (int j = 0; j < length; ++j) {
            if (arr[j] == currentChar) {
                currentFrequency++;
            }
        }

        // Update maxFrequencyChar if a new character with higher frequency is found
        if (currentFrequency > maxFrequency) {
            maxFrequency = currentFrequency;
            maxFrequencyChar = currentChar;
        }
    }

    return maxFrequency;
}

int main() {
    char arr1[] = {'a', 'b', 'c', 'd', 'e', 'e', 'f', 'f', 'f'};
    int length1 = sizeof(arr1) / sizeof(arr1[0]);

    char arr2[] = {'d', 'a', 'c', 'g', 'c', 'c', 'd', 'd', 'd'};
    int length2 = sizeof(arr2) / sizeof(arr2[0]);

    int result1 = findLargestFrequencyCharacter(arr1, length1);
    int result2 = findLargestFrequencyCharacter(arr2, length2);

    std::cout << "Sample Output:" << std::endl;
    std::cout << "Test Case 1: " << result1 << std::endl; // Output: 3
    std::cout << "Test Case 2: " << result2 << std::endl; // Output: 4

    return 0;
}