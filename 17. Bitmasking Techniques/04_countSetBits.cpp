#include<bits/stdc++.h>
using namespace std;

void countSetBits(int n){
    int cnt = 0;
    while(n>0){
        cnt += (n&1);
        n = n>>1;
    }
    cout<<"# of set bits : "<<cnt<<endl;
}

int main(){
    countSetBits(15);
    return 0;
}