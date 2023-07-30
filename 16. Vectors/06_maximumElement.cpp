/*

Maximum element
Given a 2D vector nums of integers, your task is to print the maximum element in each row of the matrix.



Input: matrix = {{1, 2, 3}, {1, 9}, {76, 34, 21}};

Output: 3 9 76

Note: Each element printed must be followed with white space and no newline character must be printed.



Constraints:

n = matrix.size()

m =  matrix.get(i).size()

1 <= n, m <= 100

0 <= matrix.get(i).get(j) <= 100

*/

#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> matrix = {{1, 2, 3}, {1, 9}, {76, 34, 21}};

    // Iterate through each row
    for (size_t i = 0; i < matrix.size(); ++i) {
        int maxElement = matrix[i][0]; // Initialize maxElement with the first element of the row

        // Find the maximum element in the current row
        for (size_t j = 1; j < matrix[i].size(); ++j) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
            }
        }

        std::cout << maxElement << " ";
    }

    return 0;
}