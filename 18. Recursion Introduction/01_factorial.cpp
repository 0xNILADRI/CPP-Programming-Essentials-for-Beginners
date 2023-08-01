/*

Factorial using recursion
Implement a function that takes an integer n as argument and returns factorial of n.



Sample Input

0

4

Sample Output

1

24



Explanation : for test case one, F[0] = 1, hence output should be 1.

Similarly for test case two, F[4] = 1 * 2 * 3 * 4 = 24, hence output should be 24.

*/

#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if(n==0 or n==1) return 1;
    int ans = n * factorial(n-1);
    return ans;
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    cout<<"Factorial of "<<N<<" : "<<factorial(N)<<endl;
    return 0;
}