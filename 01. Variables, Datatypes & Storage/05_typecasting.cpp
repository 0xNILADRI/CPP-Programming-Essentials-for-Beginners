#include<iostream>
using namespace std;

int main(){
    // In C++ we can typecaste any value using two methods : 
    // 1. Implicit typecasting ( taken care by the compiler)
    // 2. Explicit typecasting - (float)22/7

    int a = 10; float b = 4.6;
    char c = 'A';
    bool d = true;

    // implicit typecasting
    cout << "Implicit TypeCasting" << endl;
    cout << a/b << endl; // int/float equal to float
    cout << c + 1 << endl;
    cout << d + 1 <<endl;

    // explicit typecasting
    cout << "Explicit TypeCasting" << endl;
    cout << (int)(a/b) << endl; // int/float equal to float but convert to int
    cout << (char)(c + 1) << endl; // ascii value to number
    cout << (bool)(d + 1) <<endl; // any number except 0 is true 

    return 0;
}