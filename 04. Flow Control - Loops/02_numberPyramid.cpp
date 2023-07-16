#include <iostream>
using namespace std;

int main(){
	int n;
	cin >>n;
	for(int i=i; i<=n; i++){
		// print spaces 
		for (int cnt=1; cnt<=n-i; cnt++){
			cout<<" ";
		}
		
		// increment numbers 
		int val = i;
		for(int cnt=1; cnt<=i; cnt++){
			cout<<val;
			val++;
		}
		
		// decrement numbers 
		val = val -2;
		for(int cnt=1; cnt<=i-1; cnt++){
			cout<<val;
			val--;
		}
		
		// add new line
		cout<<endl;

	}
	return 0;
}
