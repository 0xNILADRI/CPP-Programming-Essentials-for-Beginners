/*

Increment Decrement
Implement a function printIncDec() that takes an integer N as input and prints two sequences of numbers using recursion.

The first sequence starts from N and goes to 1 with a decrement of 1.

The second sequence starts from 1 and goes to N with an increment of 1.

Note: Every number printed must be followed with white space.



Example 1.

Input: N = 5

Output:

5 4 3 2 1

1 2 3 4 5



Example 2.

Input: N = 2

Output:

2 1

1 2



Constraints:

N is guaranteed to be greater than or equal to 1.

*/

#include <iostream>
using namespace std;

void printDec(int N) {
    // Base case: Stop recursion when N is 0 or negative.
    if (N <= 0) {
        return;
    }
    
    cout << N << " ";
    printDec(N - 1);
}

void printInc(int N) {
    if (N <= 0) {
        return;
    }
    
    printDec(N - 1);
    cout << N << " ";
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    printDec(N);
    cout<<endl;
    printInc(N);
    return 0;
}
