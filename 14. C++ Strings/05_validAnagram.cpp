/*

Valid Anagram
===============
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.



Example 1:

Input: s = "anagram", t = "nagaram"

Output: true



Example 2:

Input: s = "rat", t = "car"

Output: false



Constraints:

1 <= s.length, t.length <= 5 * 10^4

s and t consist of lowercase English letters.


*/

#include <iostream>
#include <vector>

using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length())
        return false;

    vector<int> charCount(26, 0); // Assuming the strings contain only lowercase English letters

    // Count characters in the first string
    for (char c : s)
        charCount[c - 'a']++;

    // Decrement count for characters in the second string
    for (char c : t) {
        charCount[c - 'a']--;
        if (charCount[c - 'a'] < 0)
            return false;
    }

    return true;
}

int main() {
    string s1 = "anagram";
    string t1 = "nagaram";

    string s2 = "rat";
    string t2 = "car";

    cout << "Example 1: " << (isAnagram(s1, t1) ? "true" : "false") << endl;
    cout << "Example 2: " << (isAnagram(s2, t2) ? "true" : "false") << endl;

    return 0;
}
