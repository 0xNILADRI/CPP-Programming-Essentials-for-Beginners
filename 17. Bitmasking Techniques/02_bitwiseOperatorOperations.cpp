#include<bits/stdc++.h>
using namespace std;

void getIthBit(int n, int i){
    int mask = (1<<i);
    if ((n&mask) > 0) cout<<"1"<<endl;
    else cout<<"0"<<endl;
}

void setIthBit(int n, int i){
    int mask = (1<<i);
    n = (n | mask);
    cout<<n<<endl;
}

void clearIthBit(int n, int i){
    int mask = ~(1<<i);
    n = n&mask;
    cout<<n<<endl;
}

void updateIthBit(int n, int i, int v){
    clearIthBit(n,i);
    int mask = (v<<i);
    n = n | mask;
    cout<<n<<endl;
}

void clearLastIBits(int n, int i){
    int mask = (~0 << i);
    n = n & mask;
    cout<<n<<endl;
}

void clearBitsInRange(int n, int i, int j){
    int a = (~0)<<(j+1);
    int b = (1<<i) - 1;
    int mask = a | b;
    n = n & mask;
    cout<<n<<endl;
}

void replaceBits(int n, int i, int j, int m){
    clearBitsInRange(n,i,j);
    int mask = (m<<i);
    n = n | mask;
    cout<<n<<endl;
}

int main(){
    cout<<"Get Ith Bits"<<endl;
    getIthBit(2,1);
    cout<<"Set Ith Bits"<<endl;
    setIthBit(2,2);
    cout<<"Clear Ith Bits"<<endl;
    clearIthBit(2,1);
    cout<<"Update Ith Bits"<<endl;
    updateIthBit(18,2,3);
    cout<<"Clear Last Ith Bits"<<endl;
    clearLastIBits(15,2);
    cout<<"Clear Bits In Range"<<endl;
    clearBitsInRange(16,2,3);
    cout<<"Replace Bits"<<endl;
    replaceBits(22,2,3,2);
    return 0;
}