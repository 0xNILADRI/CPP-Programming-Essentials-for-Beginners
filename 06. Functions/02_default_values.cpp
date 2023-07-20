#include<iostream>
using namespace std;

void playMusic(int songId=3,int songId2=6){
	cout <<"Playing Music "<<songId<<" and " << songId2 <<endl;
}

int main(){

	// without giving any paramter
	playMusic();

	// by giving 1 song id
	playMusic(5);

	// by giving 2 song ids
	playMusic(101,102);
	


	return 0;
}