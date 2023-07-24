/*

Sum of all diagonal elements
===============================
Implement a function that takes an square matrix as argument and returns the sum of all diagonal elements.

Sample Input
===============
1 2 3
0 0 0
1 1 1


-1 0
 2 3

Sample Output
===============
2

2

Explanation : 

for test case one, sum of diagonal elements is 1 + 0 + 1 = 2.

Similarly for second test case, output should be 2.

*/

#include<bits/stdc++.h>
using namespace std;

int sumOfDiagonalElement(vector<vector<int>> A) {
    int sum = 0;
    for(int i=0; i<A.size(); i++){
        for(int j=0; j<A[0].size(); j++){
            if(i==j) sum += A[i][j];
        }
    }
   return sum;
}

int main(){
    vector<vector<int>> arr = { {1,0,0},
                                {1,1,1},
                                {0,0,0}};
    cout<<"Product Sign : "<<sumOfDiagonalElement(arr)<<endl;
    return 0;
}