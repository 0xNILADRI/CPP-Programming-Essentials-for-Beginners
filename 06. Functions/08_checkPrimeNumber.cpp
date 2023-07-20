#include<bits/stdc++.h>
using namespace std;


int is_prime(int n) {
    //implement your code here
    if(n==0 || n==1){
        return 0;
    }
    for(int i=2; i*i<=n; i++){
        if (n%i==0) return 0;
    }
    return 1;
}

int main(){
	int n;
	cin>>n;
	if(is_prime(n)) cout<< n <<" : Prime Number "<<endl;
	else cout<<"Not Prime!"<<endl;
	return 0;
}
