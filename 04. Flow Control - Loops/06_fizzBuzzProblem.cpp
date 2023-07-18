/*


Fizz Buzz Problem
===================
Write a program that reads a number N, prints the numbers from 1 to N and for multiples of ‘3’ print “Fizz” instead of the number and for the multiples of ‘5’ print “Buzz”.

Sample Input
==============
5

Sample Output
================
1 2 Fizz 4 Buzz



Sample Input
==============
15

Sample Output
==============
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz

*/

#include <iostream>
using namespace std;


void mainFn() {
    
       // write your code here
       int n;
       cin>>n;
       for (int i=1; i<= n; i++){
           if(i%15 == 0) cout<<"FizzBuzz ";
           else if (i%3 == 0) cout<<"Fizz ";
           else if(i%5 == 0) cout<<"Buzz ";
           else cout<<i<<" ";
       }
}

int main(){
	mainFn();
	return 0;
}
