/*

Set Matrix Zeroes
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

Note: Print the entire matrix with white space after each element on a single line.



Example 1.



Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]

Output: 1 0 1 0 0 0 1 0 1



Example 2.



Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]

Output: 0 0 0 0 0 4 5 0 0 3 1 0



Constraints:

m == matrix.length

n == matrix[0].length

1 <= m, n <= 200

-2^31 <= matrix[i][j] <= 2^31 - 1



*/

#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();

    vector<bool> rows(m, false);
    vector<bool> cols(n, false);

    // Identify the rows and columns that need to be set to 0
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] == 0) {
                rows[i] = true;
                cols[j] = true;
            }
        }
    }

    // Set entire rows and columns to 0
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (rows[i] || cols[j]) {
                matrix[i][j] = 0;
            }
        }
    }
}

int main() {
    vector<vector<int>> matrix1 = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    vector<vector<int>> matrix2 = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};

    setZeroes(matrix1);
    setZeroes(matrix2);

    // Print the modified matrices
    for (const auto& row : matrix1) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (const auto& row : matrix2) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}