#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if (n == 0 || n == 1) return false;
    else {
        for(int i=2; i*i<=n; i++){
            if (n%i == 0) return false;
        }
        return true;
    }
}

vector<int> printPrimes(int n) {
   vector<int> ans;
   for(int i=1; i<=n; i++){
       // perform isPrime()
       if (isPrime(i)){
           ans.push_back(i);
       }
   }
   return ans;
}

int main(){
	vector<int> ans;
	int n;
	cin>>n;
	ans = printPrimes(n);
	for (auto element : ans){
		cout<<element<<",";
	}
	return 0;
}
