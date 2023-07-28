/*

Roman to Integer
===================
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.



Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.



Given a roman numeral, convert it to an integer.



Example 1:

Input: s = "III"
Output: 3
Explanation: III = 3.


Example 2:

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.


Example 3:

Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.


Constraints:

1 <= s.length <= 15

s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').

It is guaranteed that s is a valid roman numeral in the range [1, 3999].

*/

#include <iostream>
#include <unordered_map>
using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> romanMap = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int result = 0;
    int n = s.length();

    for (int i = 0; i < n; i++) {
        if (i < n - 1 && romanMap[s[i]] < romanMap[s[i + 1]]) {
            // If the current symbol's value is less than the next symbol's value,
            // subtract the current symbol's value from the result
            result -= romanMap[s[i]];
        } else {
            // Otherwise, add the current symbol's value to the result
            result += romanMap[s[i]];
        }
    }

    return result;
}

int main() {
    string input1 = "III";
    string input2 = "LVIII";
    string input3 = "MCMXCIV";

    cout << "Example 1: " << romanToInt(input1) << endl;
    cout << "Example 2: " << romanToInt(input2) << endl;
    cout << "Example 3: " << romanToInt(input3) << endl;

    return 0;
}