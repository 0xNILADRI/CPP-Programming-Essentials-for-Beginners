#include <iostream>
using namespace std; 

int main(){
    
    int* a = new int[4 * 5];//dynamically allocating memory
 
    // assigning values to the allocated memory
    for (int i = 0; i < 4; i++){

        for (int j = 0; j < 5; j++) {
            *(a + i*5 + j) = rand() % 100;//using rand() for getting random values
        }
    }
 
    //displaying the 2D array
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++) {
            cout << *(a + i*5 + j) << " ";      
        }
        cout << endl;
    }
 
    // deallocate memory
    delete[] a;
 
    return 0;
}