/*

Count of one in an array.
===========================
Implement a function that takes an sorted array of 1 and 0 as argument and returns number of 1 in it.

hint - Expected time complexity is O(log(n))

Sample Input
=============
0 0 0 0 0 1

0 0 1 1 1

Sample Output
==============
1

3

Explanation :

for test case one, number of 1 is one.

Similarly for test case two, answer should be 3.

*/

#include<bits/stdc++.h>
using namespace std;

int numberOfOne(vector<int> array) {
    
    int low=0, high = array.size()-1, mid;
    while(low<=high){
        mid = (low+high)/2;
        // find first instance of 1 
        if(array[mid] == 1 and array[mid-1] == 0)
            return array.size() - mid;
        else if (array[mid] == 0) low = mid + 1;
        else high = mid - 1;
    }
    return 0;
}

int main(){
    int arr[] = {0,0,1,1,1};
    int n = sizeof(arr)/sizeof(int);
    vector<int> a(arr, arr+n);
    cout <<" Number of 1's : "<<numberOfOne(a)<< endl;
    return 0;
}