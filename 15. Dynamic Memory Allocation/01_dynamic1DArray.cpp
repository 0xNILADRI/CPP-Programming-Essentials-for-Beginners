#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // Dynamically allocate a 1D array of integers
    int* dynamicArray = new int[size];

    // Fill the array with some values (optional)
    for (int i = 0; i < size; i++) {
        dynamicArray[i] = i + 1;
    }

    // Print the array (optional)
    cout << "Dynamic Array: ";
    for (int i = 0; i < size; i++) {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;

    // Release the dynamically allocated memory
    delete[] dynamicArray;

    return 0;
}