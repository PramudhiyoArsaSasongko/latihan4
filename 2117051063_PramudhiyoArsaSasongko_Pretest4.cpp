#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	/* Nama : Pramudhiyo Arsa Sasongko
	   Npm  : 2117051063
	   Kelas: B, ILKOM21*/
	
	//int dan float
	int data;
	float x,banyak,jumlah,rata2;
 
 	//Input
 	cout<<"APLIKASI PENGHITUNG JUMLAH DAN RATA-RATA"<<endl;
	cout<<"						"<<endl;
	cout<<"Banyaknya data yang akan dihitung : "; cin>>banyak;
	jumlah=0;
	data=1;

	//Operasi Hitung
	while(data<=banyak){
	cout<<"Data ke- "<<data<<" : ";
	cin>>x;
	jumlah+=x;
	data++;
}
	rata2=jumlah/banyak;
	
	//Output
	cout<<"					"<<endl;
	cout<<"INILAH JUMLAH DAN RATA-RATA DATA YANG ANDA MASUKKAN"<<endl;
	cout<<"Jumlah    : "<<jumlah<<endl;
	cout<<"Rata-rata : "<<rata2<<endl;
	getch();
	return 0;
}

