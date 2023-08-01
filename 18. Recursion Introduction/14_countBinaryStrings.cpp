/*

Count Binary Strings
Given a positive integer N, count all possible distinct binary strings of length N such that there are no consecutive 1’s.



Example 1.

Input: N = 2

Output: 3

Explanation: The Strings are 00, 01, 10.



Example 2.

Input: N = 3

Output: 5

Explanation: The Strings are 000, 001, 010, 100, 101.



Constraints: 1 <= N <= 30

*/

#include <bits/stdc++.h>
using namespace std;

// Helper function to count valid binary strings up to length N
int countValidBinaryStrings(int n, int lastBit, unordered_map<int, int>& memo) {
    if (n == 0) {
        return 1; // Base case: An empty string is a valid binary string.
    }

    // Check if the result for the current 'n' and 'lastBit' is already memoized
    int key = (n << 1) | lastBit;
    if (memo.count(key) > 0) {
        return memo[key];
    }

    // If the last bit was '1', we can only append '0' to form a valid string.
    if (lastBit == 1) {
        return memo[key] = countValidBinaryStrings(n - 1, 0, memo);
    }

    // If the last bit was '0', we can append both '0' and '1' to form valid strings.
    return memo[key] = countValidBinaryStrings(n - 1, 0, memo) + countValidBinaryStrings(n - 1, 1, memo);
}

int getNoOfBinaryStrings(int n) {
    unordered_map<int, int> memo;
    return countValidBinaryStrings(n, 0, memo);
}

int main() {
    int N = 3;
    int count = getNoOfBinaryStrings(N);
    cout << "Number of distinct binary strings of length " << N << ": " << count << endl;
    return 0;
}
