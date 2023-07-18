/*

Fibonacci Series
=================
WAP that reads a number N and prints Nth Fibonacci number.

The Fibonacci series is an infinite series, starting from 0 (0th term) and 1 (1st term), in which every number in the series is the sum of two numbers preceding it in the series.

Sample Input
=============
2

Sample Output
==============
1

The series is 0 1 1



Sample Input
=============
5

Sample Output
=============
3

The series is 0 1 1 2 3

*/

#include <iostream>
using namespace std;


void mainFn() {
     // write your code here
    int n, a=0, b=1, ans, temp;
    cin >> n;
    if( n == 0) cout<<a;
    else {
        for(int i = 2; i <= n; i++){
            ans = a + b;
            a = b;
            b = ans;
        }
    }
    cout<<b;
}

int main(){
	mainFn();
	return 0;
}

