/*

Sum of each row and column
===========================
Given a 2D vector matrix of order n×n, the task is to find out the sum of each row and each column of the matrix.

Print the sum of each row with white space after it. On a new line, print the sum of each column with white space after it.



Input: matrix = {{1, 1, 1, 1},

                {2, 2, 2, 2},

                {3, 3, 3, 3},

                {4, 4, 4, 4}}

Output:

4 8 12 16

10 10 10 10

Explanation:

Sum of the 0 row is = 4

Sum of the 1 row is = 8

Sum of the 2 row is = 12

Sum of the 3 row is = 16

Sum of the 0 column is = 10

Sum of the 1 column is = 10

Sum of the 2 column is = 10

Sum of the 3 column is = 10



Constraints:

0 <= n <= 100

Sum of any row or column does not exceed 10^3.

*/

#include<bits/stdc++.h>
using namespace std;


void printRowColSum(vector<vector<int> > matrix) {
    int n = matrix.size();
    vector<int> rowSum(n, 0);
    vector<int> colSum(n, 0);

    // Calculate row sums and column sums
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }

    // Print row sums
    for (int i = 0; i < n; ++i) {
        std::cout << rowSum[i] << " ";
    }
    std::cout << std::endl;

    // Print column sums
    for (int i = 0; i < n; ++i) {
        std::cout << colSum[i] << " ";
    }

}

int main() {
    vector<vector<int> > matrix = {
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {3, 3, 3, 3},
        {4, 4, 4, 4}
    };

    printRowColSum(matrix);
    return 0;
}