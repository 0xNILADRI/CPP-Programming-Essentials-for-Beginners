/*

Given string can be formed or not ?
=====================================
Given two strings S1 and S2.

Implement a function that takes S1 and S2 as argument and returns 1 if there exists enough characters in S1 that can form S2 otherwise 0.



Sample Input

softwaredevelopmentengineer  developer

helloworld worry

Sample Output

1

0

Explanation : 

for test case one, S2 = "softwaredevelopmentengineer" contains 1 'd', 7 'e', 1 'v', 1 'l', 2 'o', 1 'p', 2 'r' etc which is enough to create S2 = "developer"

Similarly for test case two S2 cannot be formed from S1's characters present.

*/

#include <iostream>
#include <unordered_map>
using namespace std;

bool canFormString(string s1, string s2) {
    unordered_map<char, int> charCount;

    // Count the characters in the first string
    for (char c : s1) {
        charCount[c]++;
    }

    // Check if there are enough characters in the first string to form the second string
    for (char c : s2) {
        if (charCount[c] <= 0) {
            return false;
        }
        charCount[c]--;
    }

    return true;
}

int main() {
    string input1_s1 = "softwaredevelopmentengineer";
    string input1_s2 = "developer";

    string input2_s1 = "helloworld";
    string input2_s2 = "worry";

    cout << "Sample Output 1: " << (canFormString(input1_s1, input1_s2) ? "1" : "0") << endl;
    cout << "Sample Output 2: " << (canFormString(input2_s1, input2_s2) ? "1" : "0") << endl;

    return 0;
}