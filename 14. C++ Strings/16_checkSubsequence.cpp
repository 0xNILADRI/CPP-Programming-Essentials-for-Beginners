/*

Check for Subsequence
Given two strings str1 and str2, find if str1 is a subsequence of str2.

A subsequence is a sequence that can be derived from another sequence by deleting some elements without changing the order of the remaining elements.



Example 1.

Input: str1 = "AXY", str2 = "ADXCPY"
Output: True (str1 is a subsequence of str2)


Example 2.

Input: str1 = "AXY", str2 = "YADXCP"
Output: False (str1 is not a subsequence of str2)


Constraints:

0 <= str1.length, str2.length <= 100

str1 and str2 consist of upper case English characters.

*/

#include <iostream>
using namespace std;

bool isSubsequence(string str1, string str2) {
    int ptr1 = 0;
    int ptr2 = 0;

    while (ptr1 < str1.length() && ptr2 < str2.length()) {
        if (str1[ptr1] == str2[ptr2]) {
            ptr1++;
        }
        ptr2++;
    }

    return ptr1 == str1.length();
}

int main() {
    string input1_str1 = "AXY";
    string input1_str2 = "ADXCPY";

    string input2_str1 = "AXY";
    string input2_str2 = "YADXCP";

    cout << "Example 1: " << (isSubsequence(input1_str1, input1_str2) ? "True" : "False") << endl;
    cout << "Example 2: " << (isSubsequence(input2_str1, input2_str2) ? "True" : "False") << endl;

    return 0;
}