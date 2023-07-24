/*

Sum of even numbers.
=======================
Implement a function that takes 2-D array of size n*m as argument and your task is to return the sum of even numbers in the 2-D array.

Sample Input
==============
TESTCASE 1:
1 2 3 4
0 0 0 0
3 4 5 6

TESTCASE 2:
1 1 1
1 1 1

Sample Output
================
16

0

Explanation : 

for test case one, sum of even numbers in the 2-D array is 2 + 4 + 4 + 6 = 16.

Similarly, for second test case, output should be 0.

*/

#include <iostream>
using namespace std;

int sumOfEvenNumbers(int n, int m, int arr[1000][1000]){
    int sum = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]%2==0) sum += arr[i][j];
        }
    }
   return sum;
}

int main(){
    int arr[][1000] = { {1,0,0,0,0},
                        {1,1,1,1,1},
                        {0,0,0,0,0}};
    cout<<"Product Sign : "<<sumOfEvenNumbers(3,5,arr)<<endl;
    return 0;
}