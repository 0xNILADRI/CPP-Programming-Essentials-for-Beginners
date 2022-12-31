#include<iostream>
using namespace std;

int main(){
    int a; float b; char c; bool d; double e; short int f; signed int g; long h; long long i;

    cout << "SizeOf INT          : " << sizeof(a) << endl;
    cout << "SizeOf FLOAT        : " << sizeof(b) << endl;
    cout << "SizeOf CHAR         : " << sizeof(c) << endl;
    cout << "SizeOf BOOL         : " << sizeof(d) << endl;
    cout << "SizeOf DOUBLE       : " << sizeof(e) << endl;
    cout << "SizeOf SHORT INT    : " << sizeof(f) << endl;
    cout << "SizeOf SIGNED INT   : " << sizeof(g) << endl;
    cout << "SizeOf LONG         : " << sizeof(h) << endl;
    cout << "SizeOf LONG LONG    : " << sizeof(i) << endl;

    return 0;
}