/*

Factorial of a Number
======================
WAP that reads a non-negative integer N as input and prints the factorial of n.

Sample Input : 5
================
5

Sample Output : 
===============
6



Sample Input : 
==============
120

Sample Output : 
==============
720



Explanation : 

for test case one, factorial of 5 is 1 * 2 * 3 * 4 * 5 = 120.

Similarly for test case two, factorial of 6 is 720.

*/

#include <iostream>
using namespace std;


void mainFn() {
    
       // write your code here
       int n, fact=1;
       cin >> n;
       for(int i = 1; i <= n; i++){
           fact *= i;
       }
       cout<<fact;
}

int main(){
	mainFn();
	return 0;
}
