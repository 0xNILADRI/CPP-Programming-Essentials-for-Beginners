/*

Sum of odd digits
=================
Write a program that reads a positive integer N as an input and prints the sum of odd digits of the number.

Sample Input
============
2734

Sample Output
=============
10

odd digits in the above number are 7 and 3. Hence sum is 7+3=10.

Sample Input
==============
685

Sample Output
==============
5

*/

#include <iostream>
using namespace std;


void mainFn() {
    
       // write your code here
       int n, ans=0;
       cin >> n;
       while(n!=0){
           if ((n%10)%2 != 0 ){
               ans += n%10;
           }
           n /= 10;
       }
       cout<<ans;
}

int main(){
	mainFn();
	return 0;
}
