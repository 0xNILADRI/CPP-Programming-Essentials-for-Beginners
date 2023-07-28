/*

Is String a palindrome?
========================
Implement a function that takes a string S as argument and returns 1 if it is palindrome or 0 otherwise.



Sample Input

abcde

aabaa

Sample Output

0

1

Explanation : 

for test case one, S[3..4] is not mirror image of S[0..1], hence S is not palindrome.

Similarly for test case two, S[3..4] is mirror image of S[0..1], hence S is palindrome

*/

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    int size = s.length();
    for(int i=0; i<size/2; i++){
        if(s[i]!=s[size-i-1]) return false;
    }
    return true;
}

int main() {
    string input1 = "abcde";
    string input2 = "aabaa";

    cout << "Sample Output 1: " << (isPalindrome(input1) ? "1" : "0") << endl;
    cout << "Sample Output 2: " << (isPalindrome(input2) ? "1" : "0") << endl;

    return 0;
}
