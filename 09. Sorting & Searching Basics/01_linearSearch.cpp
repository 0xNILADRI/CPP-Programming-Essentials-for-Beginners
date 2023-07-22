#include<iostream>
using namespace std;

void linearSearch(int arr[], int size, int element){
    for(int i=0; i<size; i++){
        if(arr[i]==element) cout<<"Found "<<element<<" at index : "<<i<<endl;
    }
}

int main(){
    int arr[] = {54,6,23,4,12,3,87,99}, target = 23;
    linearSearch(arr,sizeof(arr)/sizeof(int),target);
    return 0;
}