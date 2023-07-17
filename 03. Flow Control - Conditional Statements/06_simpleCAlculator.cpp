/*

Simple Calculator
==================
Write a program that takes two numbers as input and an operator( +, -, x, % ) and prints the result based on the given operator.

Input
========
5 + 3

Output
========
8

Input
=========
100 / 20

Output
=========
5

*/

#include <iostream>
using namespace std;


void mainFn() {
    
        // The order of input should be int, char and int again
        // try to use switch statement to check the operator 
        int numOne, numTwo;
        char sign;
        cin>>numOne>>sign>>numTwo;
        switch(sign){
            case '+': cout<< numOne + numTwo;
                    break;
            case '-': cout<< numOne - numTwo;
                    break;
            case '*': cout<< numOne * numTwo;
                    break;
            case '/': cout<< numOne % numTwo;
                    break;
            default : break;
        }
}

int main(){
	mainFn();
	return 0;
}
