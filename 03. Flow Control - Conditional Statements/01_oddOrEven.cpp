#include <iostream>
using namespace std;

void mainFn() {
        // read and write using cin, cout 
        int num;
        cin >> num;
        num % 2 == 0 ? cout<<"even" : cout<<"odd";

}

int main(){
	mainFn();
	return 0;
}
