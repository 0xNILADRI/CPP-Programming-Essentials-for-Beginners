/*

Pallindrome
Given a number n, the task is to implement a function isPalindrome() that returns 1 if n is palindrome and 0 if not.

A palindromic number is a number that remains the same when its digits are reversed.



Example 1.

Input: n = 434

Output: 1

Explanation: Reversing the digits of 434 gives 434, and 434 is the same as 434, so it's a palindrome.



Example 2.

Input: n = 433

Output: 0

Explanation: Reversing the digits of 433 gives 334, so it's not a palindrome.

*/

#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int num){
    // Finding number of digits in num
    int digit = (int)log10(num);
 
 
    if(num == 0)
        return 0;
 
    return ((num%10 * pow(10, digit)) + reverseNumber(num/10));
}

bool isPalindrome(int num) {
    if(num == reverseNumber(num)){
        return 1;
    }
 
    return 0;
}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout<< isPalindrome(n);
    return 0;
}