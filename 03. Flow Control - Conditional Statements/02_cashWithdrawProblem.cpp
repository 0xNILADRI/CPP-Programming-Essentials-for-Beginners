/*

Cash Withdrawal
===============
You have gone to the bank to withdraw some cash from your account.  For the withdrawal, if the bank balance goes down to less than 10% of the original amount, you would not be able to withdraw cash otherwise you can complete the transaction and the withdrawal will be successful.

Write a function which reads two integers X (total amount in account) and Y (cash to withdraw) and prints "yes" if cash can be withdrawn or "no" if cash cannot be withdrawn.

Input
=======
X = 100
Y = 50

Output
======
yes

After withdrawal, the balance amount is 100Rs - 50Rs = 50Rs that is greater than 10Rs (10% of 100 )

Input
=======
X = 100
Y = 95

Output
======
no

*/


#include <iostream>
using namespace std;


void mainFn() {
        // read and write using cin,cout 
        int amount, withdraw, tenPercent;
        cin >> amount >> withdraw;
        amount - withdraw >= (0.1*amount) ? cout <<"yes" : cout <<"no" ;
}

int main(){
	mainFn();
	return 0;
}
