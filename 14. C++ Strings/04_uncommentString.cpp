#include<bits/stdc++.h>
using namespace std;

string uncomment(string s){
    int firstIndex = s.find("/*");
    int secondIndex = s.find("*/",firstIndex+1);
    int len = secondIndex - firstIndex -2;
    return s.substr(firstIndex+2, len);
}

int main(){
    string s = "    /*1    Helllo World    0*/";
    cout<<uncomment(s)<<endl;
    return 0;
}