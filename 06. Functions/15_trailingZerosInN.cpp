#include<bits/stdc++.h>
using namespace std;

int noOfTrailingZeroes(int num){
       // Implement your code here
       int count = 0;
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
