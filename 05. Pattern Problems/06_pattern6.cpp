/*

Pattern 6
==========
WAP that reads a positive number N and prints the given pattern for N rows.

Sample Input: 
===============
4

Sample Output:
================
AA
ABBA
ABCCBA
ABCDDBA

*/

#include <iostream>
using namespace std;


void mainFn() {
   // write your code here 
   int n;
   char front, back;
   cin >> n;
   for(int i=1; i<=n; i++){
       front = 'A', back = 'A' + i -1;
       for(int j=1; j<=i; j++){
           cout<<(char)front;
            front++;           
       }
       for(int k=1; k<=i; k++){
           cout<<(char)back;
           back--;
       }
       cout<<endl;
   }
   
}

int main(){
	mainFn();
	return 0;
}
