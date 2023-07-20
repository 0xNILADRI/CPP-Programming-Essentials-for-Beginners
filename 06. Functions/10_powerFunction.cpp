#include<bits/stdc++.h>
using namespace std;

int power(int x, int y) {
    //implement your code here
    int ans=1;
    for (int i=1; i<=y; i++){
        ans *= x;
    }
    return ans;
}

int main(){
	int n,m;
	cin>>n>>m;
	cout<<power(n,m)<<endl;
	return 0;
}
