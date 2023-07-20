#include<bits/stdc++.h>
using namespace std;

int sum_of_digits(int n) {
     // implement your code here
     int sum=0;
     while(n>0){
         sum += n%10;
         n /= 10;
     }
     return sum;
}

int main(){
	int num;
	cin>>num;
	cout<<sum_of_digits(num)<<endl;
	return 0;
}
