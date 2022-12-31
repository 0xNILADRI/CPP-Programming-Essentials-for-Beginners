#include<iostream>
using namespace std;

int main(){
    float principle, rate, time;
    cin >> principle >> rate >> time;
    cout << "Simple Interest : " << (principle*rate*time)/100.0 << endl;
    return 0;
}