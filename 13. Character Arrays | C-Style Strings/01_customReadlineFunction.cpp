#include <iostream>
using namespace std;

void readLine(char *arr, int len, char delim){
    int cnt = 0;
    char ch;
    while(true){
        ch = cin.get();
        arr[cnt] = ch;
        if(cnt == len-1 || ch == delim){
            break;
        }
        cnt++;
    }
    arr[cnt]='\0';
    cout<<"length : "<< cnt<<endl;
}

int main(){
    char arr[100];
    readLine(arr,100,'\n');
    cout<<arr<<endl;
    return 0;
}