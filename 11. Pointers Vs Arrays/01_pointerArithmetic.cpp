#include <iostream>
using namespace std;

int main(){
    int A[5] = { 2, 4, 6, 8, 10 };
    int *p = A;
    int *q = &A[3];

    cout << "Addresses of elements of the Array:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << A + i << endl;
    }

    cout << "\nOperations:\n";
    p++;
    cout << "p++:" << p << endl;
    p--;
    cout << "p--:" << p << endl;
    p = p + 2;
    cout << "p = p + 2:" << p << endl;
    p = p - 2;
    cout << "p = p - 2:" << p << endl;
    int d = q - p;
    d = d / 2;
    cout << "d = q - p:" << d << endl;

    return 0;
}