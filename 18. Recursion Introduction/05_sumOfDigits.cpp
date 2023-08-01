/*

Sum of digits
Implement a function that takes an integer n as an argument and returns the sum of its digit.



Sample Input

12

555

Sample Output

3

15

Explanation : for test case one, sum of digits of 12 is 1 + 2= 3.

Similarly for test case two, sum of digits of 555 is 5 + 5 + 5 = 15.

*/

#include<bits/stdc++.h>
using namespace std;

int sumOfDigit(int n) {
    //implement your code here
    if (n < 10) return n;

    return n % 10 + sumOfDigit(n / 10);
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    cout<<"Sum of Digits of "<<N<<" : "<<sumOfDigit(N)<<endl;
    return 0;
}