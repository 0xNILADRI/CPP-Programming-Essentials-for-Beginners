#include<bits/stdc++.h>
using namespace std;

int main(){
    string paragraph = "This ius the first line. And this is the second line. A line is a combionation of multiple words which makes some meaningful sentence.";

    int index = paragraph.find("line");
    int cnt = 1;
    while(index != -1){
        cout<<cnt<<" Occurence at : "<<index<<endl;
        index = paragraph.find("line",index+1);
        cnt++;
    }
    return 0;
}