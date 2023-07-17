/*

Electricity Bill Calculator
=============================
WAP that reads an integer N denoting the number of units of electricity consumed and calculates the electricity bill with the help of the below charges:

-- 1-50 units: 20/unit

-- 50-100 units: 30/unit

-- 100-150 units: 40/unit

-- above 150 units: 50/unit

Input
======
45

Output
======
900

Charge for the first 50 units – 45*20= 900

Total Electricity Bill = 900

Input
======
130

Output
======
3700

Charge for the first 50 units – 50*20=1000

Charge for the 50-100 units – 50*30=1500

Charge for the 100-130units – 30*40=1200

Total Electricity Bill = 1000+1500+1200 = 3700

*/

#include <iostream>
using namespace std;


void mainFn() {
    
        // read and write using cin,cout
        int n;
        cin >> n;
        if (n >= 1 and n <50) cout << n * 20 ;
        else if (n>=50 and n<100) cout << 50*20 + (n - 50) * 30;
        else if ( n>=100 and n < 150) cout << 50*20 + 50*30 + (n-100)*40 ;
        else cout<< 50*20 + 50*30 + 50*40 + (n-150)*50;
}

int main(){
	mainFn();
	return 0;
}
