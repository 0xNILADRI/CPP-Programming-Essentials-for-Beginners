/*

Predict the Grade
=================
Write a program  that reads the marks obtained by a student in 5 subjects and prints the grade of the student based on marks.


- if marks are less than 60,  then Grade is D

- if marks are greater than or equal to 60 and less than 70,  then Grade is C

- if marks are greater than or equal to 70 and less than 80,  then Grade is B

- if marks are greater than or equal to 80 and less than 90,  then Grade is A

- if marks are greater than or equal to 90, then Grade is A+

Input
======
80.5

Output
======
A

Input
======
50

Output
======
D

*/

#include <iostream>
using namespace std;


void mainFn() {
        // take input of 5 variables in int datatype
        // caculate the average marks of student and store it in float datatype
        float marks;
        cin >> marks;
        if (marks < 60.0) cout<< "D";
        else if (marks >= 60.0 && marks < 70.0) cout << "C";
        else if (marks >= 70.0 && marks < 80.0) cout << "B";
        else if (marks >= 80.0 && marks < 90.0) cout << "A";
        else cout <<"A+";
}

int main(){
	mainFn();
	return 0;
}
