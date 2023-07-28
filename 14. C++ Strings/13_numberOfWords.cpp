/*

Number of words
Given a string sentence , your task is to return the number of words it contains.



Example 1.

Input: sentence = "I love Java"

Output: 3



Example 2.

Input: sentence = "Can you count this"

Output: 4



Constraints:

0 <= sentence.length <= 100

sentence only contains white spaces, lowercase and uppercase English characters.

*/

#include <iostream>
using namespace std;

int countWords(string sentence) {
    int wordCount = 0;
    bool inWord = false; // To track if we are inside a word or not

    for (char c : sentence) {
        if (c == ' ') {
            // If we encounter a space, it means the previous word has ended
            inWord = false;
        } else if (!inWord) {
            // If we encounter a non-space character and we were not in a word previously,
            // it means a new word has started
            wordCount++;
            inWord = true;
        }
    }

    return wordCount;
}

int main() {
    string input1 = "I love Java";
    string input2 = "Can you count this";

    cout << "Example 1: " << countWords(input1) << endl;
    cout << "Example 2: " << countWords(input2) << endl;

    return 0;
}