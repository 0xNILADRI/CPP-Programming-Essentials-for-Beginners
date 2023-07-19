/*

Pattern 4
===========
WAP that reads a positive number N and prints the given pattern for N rows.

Sample Input: 
==============
3

Sample Output:
==============
  *
 ***
*****


*/

#include <iostream>
using namespace std;


void mainFn() {
   // write your code here 
   int n, spaces, stars;
   cin>>n;
   for(int i=1; i<=n; i++){
       // print spaces
       spaces = n-i;
       while(spaces!=0){
           cout<<" ";
           spaces--;
       }
       
       // print stars
       stars = (2 * i) -1;
       while(stars!=0){
           cout<<"*";
           stars--;
       }
       
       cout<<endl;
   }
   
}

int main(){
	mainFn();
	return 0;
}
