#include<bits/stdc++.h>
using namespace std;

void powerOfTwo(int n){
    if ((n & (n-1))==0) cout<<n<<" : Power of Two"<<endl;
    else cout<<n<<" : Not a power of Two"<<endl;
}

int main(){
    powerOfTwo(16);
    return 0;
}