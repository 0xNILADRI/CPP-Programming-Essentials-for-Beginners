#include<iostream>
#define PI 3.14
using namespace std;

int main(){
    // In c++ we can create constants by two methods - Using const keyword and the second through creating
    // a macro using the preprocessor directory using define function

    const float g = 9.8;

    cout << PI << endl;
    cout << g << endl;
    return 0;
}