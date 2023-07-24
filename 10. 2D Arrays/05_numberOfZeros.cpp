#include<bits/stdc++.h>
using namespace std;

int numberOfZeros(vector<vector<int>> matrix) {
    int count = 0;
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[0].size(); j++){
            if(matrix[i][j]==0) count++;
        }
    }
   return count;
}

int main(){
    vector<vector<int>> arr = { {1,0,0,0,0},
                                {1,1,1,1,1},
                                {0,0,0,0,0}};
    cout<<"Count of Zeros : "<<numberOfZeros(arr)<<endl;
    return 0;
}