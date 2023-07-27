/*

Count of unique characters
============================
Implement a function that takes an character array and its length as an argument and returns the count of different characters present in it.



Sample Input
==============
a b b a c d e

z z z

Sample Output
=================
5

1

Explanation :  for test case one, a b c d e are different characters present. hence answer is 5.

Similarly for second test case, answer should be 3.



Bonus : No use of extra memory.

*/

#include <iostream>
#include <unordered_map>
using namespace std;

int countUniqueCharacters(char arr[], int length) {
    unordered_map<char, int> charFrequency;

    for (int i = 0; i < length; i++) {
        charFrequency[arr[i]]++;
    }

    return charFrequency.size();
}

int main() {
    char input1[] = {'a', 'b', 'b', 'a', 'c', 'd', 'e'};
    int length1 = sizeof(input1) / sizeof(input1[0]);
    cout << "Sample Output 1: " << countUniqueCharacters(input1, length1) << endl;

    char input2[] = {'z', 'z', 'z'};
    int length2 = sizeof(input2) / sizeof(input2[0]);
    cout << "Sample Output 2: " << countUniqueCharacters(input2, length2) << endl;

    return 0;
}