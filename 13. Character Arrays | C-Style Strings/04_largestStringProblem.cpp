#include <iostream>
using namespace std;

int main(){
    char current[1000];
    int n;
    cin>>n;
    cin.get(); // consume the extra \n
    char largest[1000];
    int len=0;
    for(int i=0; i<n; i++){
        cin.getline(current,1000,'\n');
        int currentLength = strlen(current);
        if(currentLength > len){
            len = currentLength;
            strcpy(largest,current);
        }
    }
    cout<<largest<<endl;
    cout<<len<<endl;
    return 0;
}