#include<bits/stdc++.h>
using namespace std;


int factorial(int num){
    int ans=1;
    while(num> 0){
        ans *= num;
        num--;
    }
    return ans;
}

int nCr (int n, int r) {
    //implement your code here
   // formula - n!/((n-r)! * r! )
   int ans = factorial(n)/(factorial(n-r) * factorial(r) );
   return ans;
    
}

int main(){
	int n,r;
	cin>>n>>r;
	cout<<nCr(n,r)<<endl;
	return 0;
}
