#include<bits/stdc++.h>
using namespace std;


int greatestCommonDivisor (int x, int y) {
    //implement your code here
    while (x>0 && y>0){
        if (x>y) x %= y;
        else y %= x;
    }
    if(x==0) return y;
    else return x;
}

int main(){
	int x,y;
	cin>>x>>y;
	cout<<greatestCommonDivisor(x,y)<<endl;
	return 0;
}
