/*

Check whether product of elements are positive or negative.
Implement a function that takes a 2-D array as argument and returns 1 if product of elements in 2-D array is non negative otherwise 0.

Sample Input 1

-1 1 1 -1

-2 1 1 1

1 1 1 3

Sample Output 1

0

*/

#include<bits/stdc++.h>
using namespace std;

int checkProductSign(vector<vector<int>> matrix) {
    int product = 1;
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[0].size(); j++){
            product *= matrix[i][j];
        }
    }
   if(product >= 0) return 1;
   else return 0;
}

int main(){
    vector<vector<int>> arr = { {1,0,0,0,0},
                                {1,1,1,1,1},
                                {0,0,0,0,0}};
    cout<<"Product Sign : "<<checkProductSign(arr)<<endl;
    return 0;
}