#include <iostream>
using namespace std;

bool passwordChecker(char input[], char expected[], int len){
    if(strlen(input) != strlen(expected)) return false;
    for(int i=0; i<len; i++){
        if(input[i]!=expected[i]) return false;
    }
    return true;
}
int main(){
    char password[] = "anime123";
    char input[100];
    cin.getline(input,100,'\n');
    if(passwordChecker(input,password,strlen(password))) cout<<"same password!"<<endl;
    else cout<<"password mismatched!"<<endl;
    return 0;
}