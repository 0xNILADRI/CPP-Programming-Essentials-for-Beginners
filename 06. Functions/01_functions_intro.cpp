#include<iostream>
using namespace std;

void playMusic(){
	cout <<"Playing Music"<<endl;
}

void sayHi(string name){
	cout <<"Hi " + name <<endl;
}

string sayHello(string name){
	return "Hello " + name;
}

int areaOfCircle(int radius){
	return 3.14 * radius * radius;
}


int main(){

	playMusic();
	sayHi("Prateek");
	sayHi("Rahul ");
	cout << sayHello("Coding Minutes ") <<endl;
	cout << sayHello("Learners") <<endl;

	int area = areaOfCircle(5);
	if(area>10){
		cout <<"We can cut the land" << area<<endl;;
	}


	return 0;
}