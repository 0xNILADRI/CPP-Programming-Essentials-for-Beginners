#include<iostream>
using namespace std;

//Forward Declaration
void playMusic(int songId);



int main(){

	playMusic(5);
	
	return 0;
}

//Declaration + Definition 
void playMusic(int songId){
	cout <<"Playing Music "<<songId<<endl;
}

