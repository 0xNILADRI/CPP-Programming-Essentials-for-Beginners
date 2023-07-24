/*

Mirror Image
==============
Given two matrices matrix1[][] and matrix2[][] of size NxN. The task is to find if the given two matrices are mirror images of one another. Return true if the given two matrices are mirror images, else return false.

Input:
========
matrix1[][] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},

matrix2[][] = {{3, 2, 1}, {6, 5, 4}, {9, 8, 7}}

Output: True


Constraints: 1 <= N <= 100

*/

#include<bits/stdc++.h>
using namespace std ;

bool isMirror(int matrix1[][50],int matrix2[][50],int N) {
    // write your code here
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matrix1[i][j] != matrix2[N - 1 - i][N - 1 - j])
                return false;
        }
    }
    return true;
}

int main() {
    int N=3;

    int matrix1[][50] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[][50] = {{3, 2, 1}, {6, 5, 4}, {9, 8, 7}};

    if (isMirror(matrix1, matrix2, N)) cout << "True" << endl;
    else cout << "False" << endl;

    return 0;
}