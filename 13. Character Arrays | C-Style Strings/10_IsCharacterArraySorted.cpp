/*

Is character array sorted ?
==============================
Implement a function that takes an character array as an argument an return 1 if array is sorted otherwise 0.



Sample Input
===============
a a b b c c h

d a e f g d

Sample Output
===============
1

0

Explanation : 

for test case one, a comes first than b and b comes first than c and c comes first than h, hence it is sorted and output is 1.

Similarly for second test case, d comes after a which shows that answer should be 0.

*/

#include <iostream>
using namespace std;

int isSorted(char arr[], int length) {
    for (int i = 1; i < length; ++i) {
        if (arr[i] < arr[i - 1]) {
            return 0; // Not sorted
        }
    }

    return 1; // Sorted
}

int main() {
    char arr1[] = {'a', 'a', 'b', 'b', 'c', 'c', 'h'};
    int length1 = sizeof(arr1) / sizeof(arr1[0]);

    char arr2[] = {'d', 'a', 'e', 'f', 'g', 'd'};
    int length2 = sizeof(arr2) / sizeof(arr2[0]);

    int result1 = isSorted(arr1, length1);
    int result2 = isSorted(arr2, length2);

    cout << "Sample Output:" << endl;
    cout << "Test Case 1: " << result1 << endl; // Output: 1
    cout << "Test Case 2: " << result2 << endl; // Output: 0

    return 0;
}