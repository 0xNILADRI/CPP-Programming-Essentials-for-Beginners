/*

Longest Common Prefix
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".



Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.


Constraints:

1 <= strs.length <= 200

0 <= strs[i].length <= 200

strs[i] consists of only lowercase English letters.

*/
#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) {
        return ""; // If the array is empty, return an empty string
    }

    string prefix = strs[0]; // Take the first string as the initial prefix

    for (int i = 1; i < strs.size(); i++) {
        int j = 0;
        while (j < prefix.length() && j < strs[i].length() && prefix[j] == strs[i][j]) {
            j++;
        }
        prefix = prefix.substr(0, j); // Update the prefix based on the current string
    }

    return prefix;
}

int main() {
    vector<string> input1 = {"flower", "flow", "flight"};
    vector<string> input2 = {"dog", "racecar", "car"};

    cout << "Example 1: " << longestCommonPrefix(input1) << endl;
    cout << "Example 2: " << longestCommonPrefix(input2) << endl;

    return 0;
}
