/*

Prime Numbers Till N
=====================
Given positive integer N greater than 1, WAP that prints all the prime numbers from 2 to N.

A prime number is a natural number greater than 1, which is only divisible by 1 and itself.

Input:
=======
5

Output:
=======
2 3 5



Input:
========
10

Output:
=========
2 3 5 7

*/

#include<bits/stdc++.h>
using namespace std ;

void printPrimes(int n) {
    int fact;
    for(int i=1; i<=n; i++){
        fact=0;
        for(int j=1; j<=n; j++){
            if(i%j==0)
                fact++;
        }
        if(fact==2)
            cout<<i<<" ";
    }
    
}

int main(){
	int n;
	cin>>n;
	printPrimes(n);
	return 0;
}
