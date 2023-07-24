/*

Search a 2D Matrix
Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.

The first integer of each row is greater than the last integer of the previous row.

Example 1.
source: leetcode

Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3

Output: true


Example 2.
source: leetcode

Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13

Output: false


Constraints:

m == matrix.length

n == matrix[i].length

1 <= m, n <= 100

-10^4 <= matrix[i][j], target <= 10^4

*/

#include<bits/stdc++.h>
using namespace std ;

bool searchMatrix(int matrix[][50],int M,int N, int target) {
    // write your code here
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            if(matrix[i][j]==target) return true;
        }
    }
    return false;
}

int main(){
    int arr[][50] = { {1,0,0,0,0},
                        {1,1,23,1,1},
                        {0,0,0,0,0}};
    int target = 23;
    cout<<"Product Sign : "<<searchMatrix(arr,3,5,target)<<endl;
    return 0;
}