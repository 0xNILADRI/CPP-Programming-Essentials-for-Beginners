#include<bits/stdc++.h>
using namespace std;

void fastExponentiation(int n, int m){
    int ans = 1, N = n, M = m;
    while(m>0){
        int last_bit = (m&1);
        if(last_bit) ans = ans*n;
        n = n*n;
        m = m>>1;
    }
    cout<<N<<" power "<<M<<" : "<<ans<<endl;
}

int main(){
    fastExponentiation(2,4);
    return 0;
}