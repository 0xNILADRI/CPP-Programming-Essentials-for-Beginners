/*

Sort a vector of strings
Given a List list consisting of strings, your task is to sort and print the list.



Input: list = {"cat", "apple", "dog", "ball"}

Output: apple ball cat dog

Note: Each string printed must be followed with white space and no newline character must be printed.



Constraints:

0 <= list.size() <= 100

list contains characters only from 'a' to 'z'.

*/

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> list = {"cat", "apple", "dog", "ball"};

    // Sorting the vector of strings in lexicographical order
    std::sort(list.begin(), list.end());

    // Printing the sorted list with white spaces
    for (size_t i = 0; i < list.size(); ++i) {
        std::cout << list[i] << " ";
    }

    return 0;
}