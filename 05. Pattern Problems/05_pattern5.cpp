/*

Pattern 5
==========
WAP that reads a positive number N and prints the given pattern for N rows.

Sample Input: 
==============
5

Sample Output:
===============
1
01
101
0101
10101

*/


#include <iostream>
using namespace std;


void mainFn() {
   // write your code here 
   int n;
   bool value = true;
   cin >> n;
    
    for(int i=1; i<=n; i++){
        if(i%2==0) value = false;
        else value=true;
        for(int j=1; j<=i; j++){
            cout<<value;
            value = !value;
        }
        cout<<endl;
    } 
}

int main(){
	mainFn();
	return 0;
}
