/*

Find square of a number without multiplication or divisor.
=============================================================
Implement a function that takes a positive integer n as an argument and returns square of n (You should not use division or multiplication operator).



Sample Input

4

6

Sample Output

16

36



Explanation : for test case one, 4 ^ 2 = 16,

Similarly for test case two, 6 ^ 2 = 36

*/

#include<bits/stdc++.h>
using namespace std;

int square(int n) {
   int res = 0;
    for (int i = 0; i < n; i++) {
        res += n;
    }
    return res;
}

int main(){
    cout<<square(2)<<endl;
    return 0;
}