#include<iostream>
using namespace std;

int main(){
    int phy, chem, maths, eng, cs;
    cin >> phy >> chem >> maths >> eng >> cs;
    cout << "Result : " << (phy+chem+maths+eng+cs)/5.0 <<endl;
    return 0;
}