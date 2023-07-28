/*

Largest Frequency character
=============================
Implement a function that takes a String a argument and returns the largest Frequency character.

Sample Input

abbbccccdd

avddda



Sample Output

c

d

Explanation :

for test case one, c is the largest frequency character,

Similarty for second test case, d is the largest frequency character.

*/

#include <iostream>
#include <unordered_map>
using namespace std;

char largestFrequencyCharacter(string s) {
    unordered_map<char, int> frequencyMap;

    // Count the frequency of each character
    for (char c : s) {
        frequencyMap[c]++;
    }

    char maxFreqChar = '\0';
    int maxFrequency = 0;

    // Find the character with the highest frequency
    for (const auto &entry : frequencyMap) {
        if (entry.second > maxFrequency) {
            maxFrequency = entry.second;
            maxFreqChar = entry.first;
        }
    }

    return maxFreqChar;
}

int main() {
    string input1 = "abbbccccdd";
    string input2 = "avddda";

    cout << "Sample Output 1: " << largestFrequencyCharacter(input1) << endl;
    cout << "Sample Output 2: " << largestFrequencyCharacter(input2) << endl;

    return 0;
}