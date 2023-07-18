/*

Check Prime Number
===================
Write a program that reads a positive integer N as an input and prints 1 if it is prime number otherwise 0.

A prime number is a natural number greater than 1, which is only divisible by 1 and itself.

Sample Input
============
22

Sample Output
=============
0



Sample Input
=============
59

Sample Output
=============
1



Explanation : for first test case, 22 has many divisors 1, 2, 11, 22. Hence it is not prime number.

for second test case, 59 has only two divisors 1 and 59 (Itself). Hence it is prime number.

*/

#include <iostream>
using namespace std;


void mainFn() {
    
       // write your code here
       int n, c=0;
       cin >> n;
       for(int i= 2; i<(n/2)+1; i++){
           if(n%i==0){
               cout<<0;
               c++;
               break;
           }
       }
       if (c==0){
           cout<<1;
       }
}

int main(){
	mainFn();
	return 0;
}
