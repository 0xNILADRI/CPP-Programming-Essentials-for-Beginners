/*

Sum of digits
==============
WAP that reads a positive integer N as an input and prints the sum of digits of the number.

Sample Input
=============
22

Sample Output
============
4

Sample Input
============
687

Sample Output
=============
21

*/

#include <iostream>
using namespace std;


void mainFn() {
    
       // write your code here
       int N, ans=0;
       cin >> N;
       while(N!=0){
           ans += N%10;
           N /= 10;
       }
       cout<<ans;
}

int main(){
	mainFn();
	return 0;
}
