/*

Fixed Deposit Interest
======================
WAP a program that calculates simple interest on Fixed Deposits based on certain conditions.

i) Tenure (t) = 1 year - 2 years

Rate of interest (r)=5.00% (fixed)

ii) Tenure (t) = 3 or more than 3 years

Rate of interest (r)=6.00% (fixed)

Your program should read two integers Principal Amount (p), Tenure(t) as the input and print the simple interest obtained on the amount at the end of tenure.

Input
======
100 1

Output
======
5

Input
=======
50000 4

Output
=======
12000

*/

#include <iostream>
using namespace std;


void mainFn() {
        // read and write using cin,cout 
        // store the result in float datatype
        int principal, tenure;
        cin >> principal>> tenure;
        if ( tenure >=1 and tenure<=2 ){
            cout << (principal*5.0*tenure)/100;
        }
        else cout <<(principal*6.0*tenure)/100;
        
}

int main(){
	mainFn();
	return 0;
}
