/*

Tiling Problem
Given a “2 x n” board and tiles of size “2 x 1”, count the number of ways to tile the given board using the 2 x 1 tiles. A tile can either be placed horizontally i.e., as a 1 x 2 tile, or vertically i.e., as a 2 x 1 tile.





Example 1.

Input: n = 4

Output: 5

Explanation:

For a 2 x 4 board, there are 5 ways

All 4 vertical (1 way)

All 4 horizontal (1 way)

2 vertical and 2 horizontal (3 ways)



Example 2.

Input: n = 3

Output: 3

Explanation:

We need 3 tiles to tile the board of size 2 x 3.

We can tile the board using the following ways

Place all 3 tiles vertically.

Place 1 tile vertically and the remaining 2 tiles horizontally (2 ways)

*/

#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int, int> memo;

int countWaysToTile(int n) {
    // Base case: If n is 1 or 0, there is only one way to tile.
    if (n <= 1) {
        return 1;
    }

    // Check if the result is already computed and stored in the memo.
    if (memo.find(n) != memo.end()) {
        return memo[n];
    }

    // Recursively count the number of ways for the current board size.
    int ways = countWaysToTile(n - 1) + countWaysToTile(n - 2);

    // Store the result in the memo to avoid redundant calculations.
    memo[n] = ways;

    return ways;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int result = countWaysToTile(n);
    cout << "The number of ways to tile the 2 x " << n << " board is: " << result << endl;

    return 0;
}
