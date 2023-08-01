/*

Fibonacci number
Implement a function that takes an integer n as an argument and returns nth fibonacci number.



The recurrence relation of fibonacci number is F[n] = F[n-1] + F[n-2], where F[0] = 1, F[1] = 1.



Sample Input

1

0

3

Sample Output

1

1

3

Explanation : 

for test case one, F[1] = 1, hence output should be 1.

for test case two, F[0] = 1, hence output should be 1.

for test case three, F[3] = F[2] + F[1], F[2] = F[0] + F[1] = 1 +1 = 2, F[3] = 2 + 1 = 3, hence output should be 3.

*/

#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    //implement your code here
    if(n==0 || n==1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    cout<<"Fibonacci of "<<N<<" : "<<fibonacci(N)<<endl;
    return 0;
}