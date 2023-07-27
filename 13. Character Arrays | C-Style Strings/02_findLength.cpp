#include <iostream>
using namespace std;

void findLength(char *arr, int len){
    int i;
    for(i=0;arr[i]!='\0';i++){}
    cout<<"Length : "<<i<<endl;
}

int main(){
    char arr[100];
    cin.getline(arr,100,'.');
    findLength(arr,100);
}