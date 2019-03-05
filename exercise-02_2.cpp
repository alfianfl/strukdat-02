/*
nama			:Alfian Fadhil L
NPM				:140810180055
Kelas			:A
Tanggal			:5 Maret 2019
deskriptif		:Exercise-02
*/

#include <iostream>
#include<string.h>
struct teater {
	int room;
	char seat[3];
	char movietitle[30];
	
};


using namespace std;

int main(){
	teater data;
	data.room=7;
	strcpy(data.seat,"j9");
	strcpy(data.movietitle,"adit & jarwo");
	
	cout<<"room : "<<data.room<<endl;
	cout<<"seat : "<<data.seat<<endl;
	cout<<"judul film : "<<data.movietitle<<endl;
	
	
	
	
}
