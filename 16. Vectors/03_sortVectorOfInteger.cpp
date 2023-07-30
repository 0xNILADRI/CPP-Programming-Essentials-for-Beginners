/*

Sort a vector of integers
Given a vector nums of integers, your task is to sort nums in ascending order and print the list.

Input: nums = {-10, 20, 2, 1, 0, 4, -50, 70}

Output: -50 -10 0 1 2 4 20 70

Note: Each element printed must be followed with white space and no newline character must be printed.



Constraints:

0 <= nums.size() <= 100

*/

#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& nums) {
    int n = nums.size();
    bool swapped;

    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (nums[j] > nums[j + 1]) {
                // Swap the elements
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
                swapped = true;
            }
        }

        // If no two elements were swapped in the inner loop, the array is already sorted
        if (!swapped) {
            break;
        }
    }
}

int main() {
    std::vector<int> nums = {-10, 20, 2, 1, 0, 4, -50, 70};

    // Sorting the vector using Bubble Sort
    bubbleSort(nums);

    // Printing the sorted list with white spaces
    for (size_t i = 0; i < nums.size(); ++i) {
        std::cout << nums[i] << " ";
    }

    return 0;
}