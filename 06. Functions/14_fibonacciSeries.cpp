#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
       // Implement your code here
       int a = 0, b = 1, ans;
       if (n==0) return 0;
       if (n==1) return 1;
       for(int i=2;i<=n;i++){
           ans = a + b;
           a = b;
           b = ans;
       }
       return ans;
}

int main(){
	int n;
	cin>>n;
	cout<<fibonacci(n)<<endl;
	return 0;
}
