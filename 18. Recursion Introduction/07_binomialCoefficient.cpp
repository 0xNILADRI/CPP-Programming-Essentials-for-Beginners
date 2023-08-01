/*

Binomial Coefficient
Implement a function that takes two integers n and k as an argument and returns C(n, k)

Recurrence relation is  C(n, k) = C(n-1, k-1) + C(n-1, k) and C(n, k) = n! / k! x (n-k)!



Sample Example 1



n = 4, k = 3

C(4, 3) = 4



Sample Example 2

n = 3, k = 0

C (3, 0) = `

*/

#include<bits/stdc++.h>
using namespace std;

int C(int n, int k) {
   if (k == 0 || k == n) {
        return 1;
    }
    return C(n - 1, k - 1) + C(n - 1, k);
}

int main() {
    int N, K;
    cout << "Enter the value of N and K : ";
    cin >> N>> K;
    cout<<"Binomial Coefficient of ("<<N<<","<<K<<") : "<<C(N,K)<<endl;
    return 0;
}