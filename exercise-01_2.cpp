/*
nama			:Alfian Fadhil L
NPM				:140810180055
Kelas			:A
Tanggal			:5 Maret 2019
deskriptif		:Exercise-01
*/

#include <iostream>
#include<string.h>
struct orang {
	int umur;
	char nama[30];
	char jk[2];
	char goldar [3];
};


using namespace std;

int main(){
	orang orang;
	orang.umur=10;

	strcpy(orang.nama,"fahmi");
	strcpy(orang.jk,"L");
	strcpy(orang.goldar,"O");
	
	cout<<orang.umur<<endl;
	cout<<orang.nama<<endl;
	cout<<orang.goldar<<endl;
	cout<<orang.jk<<endl;
	
	
	
	
}
