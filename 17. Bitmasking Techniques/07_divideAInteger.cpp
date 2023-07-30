/*

Divide a integer without Division operator
=============================================
Implement a function that takes two positive integers X and Y as an argument .

Your function should returns X / Y without using division operator.



Sample Input

5 2

7 2

Sample Output

2

3

Explanation : for test case one, 5 / 2 = 2,

Similarly for test case two, 7 /2 = 3.

*/

#include<bits/stdc++.h>
using namespace std;

int divide(int X, int Y) {
    if (Y == 0) {
        throw std::runtime_error("Division by zero is not allowed.");
    }

    int quotient = 0;
    int tempY = Y;

    while (X >= Y) {
        int count = 1;
        while (X >= (tempY << 1)) {
            tempY <<= 1;
            count <<= 1;
        }

        X -= tempY;
        tempY = Y;
        quotient += count;
    }

    return quotient;
}

int main(){
    int ans;
    ans = divide(7,2);
    cout<<ans<<endl;
}