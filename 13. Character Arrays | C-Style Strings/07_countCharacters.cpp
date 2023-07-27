#include <iostream>
#include <cctype> // for isalpha, isdigit, isspace functions
using namespace std;

int main() {
    char input[1000];
    int letters = 0, digits = 0, whitespaces = 0, specialSymbols = 0;

    cout << "Enter a string terminated with $ sign: ";
    cin.getline(input, sizeof(input), '$');

    for (int i = 0; input[i] != '\0'; ++i) {
        if (isalpha(input[i]))
            ++letters;
        else if (isdigit(input[i]))
            ++digits;
        else if (isspace(input[i]))
            ++whitespaces;
        else
            ++specialSymbols;
    }

    cout << "Number of letters: " << letters << endl;
    cout << "Number of digits: " << digits << endl;
    cout << "Number of whitespaces: " << whitespaces << endl;
    cout << "Number of special symbols: " << specialSymbols << endl;

    return 0;
}