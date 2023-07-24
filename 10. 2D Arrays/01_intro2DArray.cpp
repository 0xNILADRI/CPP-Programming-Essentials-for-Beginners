#include <iostream>
using namespace std;

void print(int arr[][100],int n, int m){
    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
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
    print(arr,n,m);
    return 0;
}