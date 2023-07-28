/*

Remove All Adjacent Duplicates
You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.

We repeatedly make duplicate removals on s until we no longer can.

Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.



Example 1:

Input: s = "abbaca"
Output: "ca"
Explanation: 
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".
Example 2:

Input: s = "azxxzy"
Output: "ay"


Constraints:

1 <= s.length <= 105

s consists of lowercase English letters.

*/

#include <iostream>
#include <stack>
using namespace std;

string removeDuplicates(string s) {
    stack<char> stk;

    for (char c : s) {
        if (!stk.empty() && stk.top() == c) {
            stk.pop(); // Remove the adjacent duplicate
        } else {
            stk.push(c); // Push the current character onto the stack
        }
    }

    string result = "";
    while (!stk.empty()) {
        result = stk.top() + result;
        stk.pop();
    }

    return result;
}

int main() {
    string input1 = "abbaca";
    string input2 = "azxxzy";

    cout << "Example 1: " << removeDuplicates(input1) << endl;
    cout << "Example 2: " << removeDuplicates(input2) << endl;

    return 0;
}