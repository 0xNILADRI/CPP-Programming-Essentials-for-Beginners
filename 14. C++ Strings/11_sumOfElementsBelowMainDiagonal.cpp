/*

Sum of all elements below main diagonal.
==========================================
Implement a function that takes 2 D matrix as argument and returns the sum of element below main diagonal.



Sample Input

1 2 3 5

0 0 0 0

0 0 0 0

1 2 0 2

4

Sample Output

3

0

Explanation : for test case one, sum of element below main diagonal is 3.

Similarly for second test case, sum of element below main diagonal is 0.

*/

#include <iostream>
#include <vector>
using namespace std;

int sumBelowMainDiagonal(vector<vector<int>>& matrix) {
    int sum = 0;
    int n = matrix.size();

    for (int i = 1; i < n; i++) { // Start from the second row (row index 1)
        for (int j = 0; j < i; j++) { // Only consider elements up to column index i - 1
            sum += matrix[i][j];
        }
    }

    return sum;
}

int main() {
    vector<vector<int>> matrix1 = {
        {1, 2, 3, 5},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {1, 2, 0, 2}
    };

    vector<vector<int>> matrix2 = {
        {4}
    };

    cout << "Sample Output 1: " << sumBelowMainDiagonal(matrix1) << endl;
    cout << "Sample Output 2: " << sumBelowMainDiagonal(matrix2) << endl;

    return 0;
}