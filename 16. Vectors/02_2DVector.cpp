#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> arr = {{1,2,3,4},
                                {5,6,7},
                                {8,9},
                                {10,11,12,13,14,15}};
    // print the values
    for(int i=0; i<arr.size(); i++){
        for(int ele : arr[i]){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}