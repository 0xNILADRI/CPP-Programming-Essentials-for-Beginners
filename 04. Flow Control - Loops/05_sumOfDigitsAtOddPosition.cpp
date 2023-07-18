/*

Sum of digits at odd position
==============================
Write a program that reads a positive integer N as an input and prints the sum of digits at odd position of the number.

Sample Input
=============
548

Sample Output
==============
13

Sample Input
=============
45789

Sample Output
=============
20

*/

#include <iostream>
using namespace std;


void mainFn() {
    
       // write your code here
       int n, sum=0, counter=1, newNum=0;
       cin >> n;
       // reverse number
       while(n!=0){
           newNum = newNum*10 + (n%10);
           n /= 10;
       }
       // cout<<newNum<<endl;
       
       while(newNum!=0){
           if (counter%2 != 0){
               sum += (newNum%10);
           }
           counter++;
           newNum /= 10;
       }
       cout<<sum;
}

int main(){
	mainFn();
	return 0;
}
