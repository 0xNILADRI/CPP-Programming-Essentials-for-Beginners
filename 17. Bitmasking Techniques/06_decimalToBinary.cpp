#include<bits/stdc++.h>
using namespace std;

void decimalToBinary(int n){
    int ans = 0, p = 1;
    while(n>0){
        int last_bit = (n&1);
        ans += p*last_bit;
        p = p*10;
        n = n>>1;
    }
    cout<<ans<<endl;
}

int main(){
    decimalToBinary(1010);
    return 0;
}