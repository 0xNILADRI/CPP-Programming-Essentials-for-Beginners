/*

Implement Power Function
Implement a function pow() that takes two integers a and b as input and returns a to the power b.

Note: Solve it using recursion!



Input:

a = 2, b = 3

Output:

8

Explanation: 2^3 gives 8.



Constraints:

0 <= a, b <= 8

*/

#include <iostream>
using namespace std;

int power(int a, int b) {
    if (b == 0) {
        // Base case: Anything raised to the power 0 is 1.
        return 1;
    } else {
        // Recursive case: Compute a^(b/2) and use it to compute a^b.
        int temp = power(a, b / 2);
        if (b % 2 == 0) {
            return temp * temp; // If b is even, a^b = (a^(b/2))^2.
        } else {
            return a * temp * temp; // If b is odd, a^b = a * (a^(b/2))^2.
        }
    }
}

int main() {
    int a = 2, b = 3;
    int result = power(a, b);

    cout << a << " to the power " << b << " is: " << result << endl;

    return 0;
}
