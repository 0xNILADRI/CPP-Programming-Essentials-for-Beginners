/*

All Alphabets present or not ?
=================================
Given a string S.

Implement a function which takes S as argument and return 1 if S contains all alphabets from a to z otherwise 0.


Sample Input

amnffbcdefghijklmnopqrstuvwxyxzqq

abcfhedhg

Sample Output

1

0



Explanation : 

for test case one, S contains all characters from a to z.

Similarly for test case two, S does not contains all characters from a to z.

*/

#include <iostream>
using namespace std;

int containsAllAlphabets(string s) {
    bool alphabets[26] = {false}; // Initialize an array to track presence of alphabets

    for (char c : s) {
        if (isalpha(c)) { // Check if the character is an alphabet
            alphabets[tolower(c) - 'a'] = true; // Set the corresponding alphabet's flag to true
        }
    }

    // Check if all alphabets are present
    for (int i = 0; i < 26; i++) {
        if (!alphabets[i]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    string input1 = "amnffbcdefghijklmnopqrstuvwxyxzqq";
    string input2 = "abcfhedhg";

    cout << "Sample Output 1: " << containsAllAlphabets(input1) << endl;
    cout << "Sample Output 2: " << containsAllAlphabets(input2) << endl;

    return 0;
}