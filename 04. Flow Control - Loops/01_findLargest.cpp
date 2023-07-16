/*

Find Largest
=============
Implement a function that take an array and its size as parameters and return the largest positive integer.

Sample Input
===============
n = 6
arr = [4, 65, 0, 56, 66, 95]

Sample Output
===============
95

*/

#include <iostream>
using namespace std;

int largest (int n, int arr[])
{
    int lar = arr[0];
    for (int i=0; i<n; i++){
        if (arr[i] > lar) lar = arr[i];
    }
    
    return lar;
}

int main(){
	int n=6;
	int arr[]= {4,65,0,56,66,95};

	cout<<largest(n,arr)<<endl;
	return 0;
}
