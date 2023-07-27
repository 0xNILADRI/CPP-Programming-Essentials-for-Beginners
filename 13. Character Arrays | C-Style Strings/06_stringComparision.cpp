#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100];

    cout << "Enter the first string: ";
    cin.getline(str1, sizeof(str1));

    cout << "Enter the second string: ";
    cin.getline(str2, sizeof(str2));

    int result = strcmp(str1, str2);

    if (result == 0) cout << "Both strings are equal." << endl;
    
    else if (result > 0) cout << "The first string is greater than the second string." << endl;

    else cout << "The second string is greater than the first string." << endl;

    return 0;
}