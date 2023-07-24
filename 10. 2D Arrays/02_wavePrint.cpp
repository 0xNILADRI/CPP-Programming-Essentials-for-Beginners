#include <iostream>
using namespace std;

void wavePrint(int arr[][100],int n, int m){
    for (int col=0; col<m; col++){
        if(col%2==0){
            for(int row=0; row<n; row++){
                cout<<arr[row][col]<<" ";
            }
        }
        else{
            for(int row=n-1; row>=0; row--){
                cout<<arr[row][col]<<" ";
            }
        }
    }
}

int main(){
    int arr[100][100], n, m;
    // size of the array -- n rows and m colums
    cin >> n>> m;
    // input values
    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    wavePrint(arr,n,m);
    return 0;
}