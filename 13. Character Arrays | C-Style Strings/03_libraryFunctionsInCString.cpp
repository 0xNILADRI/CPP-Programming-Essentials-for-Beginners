#include <iostream>
#include <cstring>
 
using namespace std;
 
int main() {
    // initializing some strings
    char str1[20] = "World";
    char str2[20] = "is";
    char str3[20] = "a great place";

    // using strlen()
    cout << "Str1 length: " << strlen(str1) << endl;
    
    // using strcat()
    cout << "str1 before concatenation: " << str1 << endl;
    strcat(str1, str2);
    cout << "str1 after concatenation: " << str1 << endl;

    // using strcpy()
    cout << "str1 before copy: " << str1 << endl;
    strcpy(str1, str3);
    cout << "str1 after copy: " << str1 << endl;

    return 0;
}