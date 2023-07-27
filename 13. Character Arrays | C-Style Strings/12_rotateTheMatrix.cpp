/*

Rotate the matrix.
====================
Implement a function that takes 2-D matrix as argument and returns the matrix which is 90 degree rotated clockwise.



Sample Input
=============
1 2 3

4 5 6

7 8 9

3 4

1 2

Sample Output
===============
7 4 1

8 5 2

9 6 3

1 3

2 4

*/

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> rotateMatrixClockwise(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    // Transpose the matrix.
    for (int i = 0; i < rows; i++) {
        for (int j = i; j < cols; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reverse each row to get the 90-degree clockwise rotated matrix.
    for (int i = 0; i < rows; i++) {
        int left = 0;
        int right = cols - 1;
        while (left < right) {
            swap(matrix[i][left], matrix[i][right]);
            left++;
            right--;
        }
    }

    return matrix;
}

int main() {
    vector<vector<int>> input1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> result1 = rotateMatrixClockwise(input1);

    cout << "Sample Output 1:" << endl;
    for (const auto& row : result1) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    vector<vector<int>> input2 = {{3, 4}, {1, 2}};
    vector<vector<int>> result2 = rotateMatrixClockwise(input2);

    cout << "\nSample Output 2:" << endl;
    for (const auto& row : result2) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
