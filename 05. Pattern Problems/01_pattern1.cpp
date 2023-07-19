/*

Pattern 1
==========
WAP that reads a positive number N and prints the given pattern for N rows.

Sample Input: 
=============
4

Sample Output:
==============
1
22
333
4444

*/

#include <iostream>
using namespace std;


void mainFn() {
   // write your code here 
   int n, val=1;
   cin >> n;
   for (int i=1; i<=n; i++){
       for(int j=1; j<=i; j++){
           cout<<val;
       }
       val++;
       cout<<endl;
   }
}

int main(){
	mainFn();
	return 0;
}
