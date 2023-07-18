/*

Armstrong Number
=================
WAP that reads an input and checks whether the given number is an Armstrong number or not. If the number is an Armstrong number, print 1 otherwise print 0

Armstrong number is a number that is equal to the sum of cubes of its digits.

Sample Input
=============
153

Sample Output
=============
1

153 = (1*1*1)+(5*5*5)+(3*3*3)



Sample Input
============
12

Sample Output
=============
0

*/


#include <iostream>
#include <cmath>
using namespace std;


void mainFn() {
    
       // write your code here
       int n, n_BKK, sum=0;
       cin >> n;
       n_BKK = n;
       while(n!=0){
           sum += pow(n%10,3);
           n /= 10;
       }
       
       if(sum == n_BKK) cout<<1;
       else cout<<0;
}

int main(){
	mainFn();
	return 0;
}
