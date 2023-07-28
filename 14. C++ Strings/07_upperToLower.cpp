/*

Upper to Lower
===============
Given a string s  which contains only lowercase and uppercase English characters, your task is to print the string in lowercase.



Example 1.

Input: s = "Coding"

Output: coding



Example 2.

Input: s = "JAvA"

Output: java



Constraints: 0 <= s.length <= 100

*/
#include <iostream>
#include <cctype>
using namespace std;

string toLower(string s) {
    for (char &c : s) {
        c = tolower(c);
    }
    return s;
}

int main() {
    string input1 = "Coding";
    string input2 = "JAvA";

    cout << "Output 1: " << toLower(input1) << endl;
    cout << "Output 2: " << toLower(input2) << endl;

    return 0;
}