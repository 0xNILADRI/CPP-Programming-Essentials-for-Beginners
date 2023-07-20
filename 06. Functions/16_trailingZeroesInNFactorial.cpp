#include<bits/stdc++.h>
using namespace std;

int factorial(int num){
	int result=1;
	for(int i=1; i<=num; i++){
		result *= i;
	}
	return result;
}

int noOfTrailingZeroes(int ans){
       // Implement your code here
       int count = 0, num;
       num = factorial(ans);
       while(num>0){
           int last_digit = num%10;
           if(last_digit==0) count++;
           else break;
           num /= 10;
       }
       return count;
}

int main(){
	int n;
	cin>>n;
	cout<<noOfTrailingZeroes(n)<<endl;
	return 0;
}
