/*

Binary String to Decimal
A Binary String is a string consisting of only 0s and 1s that represent a binary number.

Given a binary string s , you need to return the decimal number it represents.



Example 1.

Input: s = "10"

Output: 2

Explanation: 10 in binary is the representation of 2 in decimal.



Example 2.

Input: s = "101"

Output: 5

Explanation: 101 in binary is the representation of 5 in decimal.



Constraints: 1 <= s.length <= 10

*/

#include <iostream>
using namespace std;

int binaryToDecimal(string s) {
    int decimalValue = 0;
    int base = 1; // Used to calculate the value of each bit position

    // Traverse the binary string from right to left
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == '1') {
            decimalValue += base; // Add the current bit's value to the decimalValue
        }
        base *= 2; // Move to the next bit position (multiply by 2 for binary)
    }

    return decimalValue;
}

int main() {
    string input1 = "10";
    string input2 = "101";

    cout << "Example 1: " << binaryToDecimal(input1) << endl;
    cout << "Example 2: " << binaryToDecimal(input2) << endl;

    return 0;
}