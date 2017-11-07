#include <iostream>
using namespace std;

int main(int argc, char** argv){
	int panjang, lebar, luas, pilihan, alas, tinggi;
	
	cout <<"1.Persegi panjang\n";
	cout <<"2.Segitiga\n";
	cout <<"Masukkan Pilihan =";cin >>pilihan;
	
	switch(pilihan){
		case 1:
		cout<<"Masukkan panjang=";cin>>panjang;
		cout<<"Masukkan lebar=";cin>>lebar;
		luas =panjang * lebar;
		cout<<"luas persegi panjang="<<luas<<"\n";
		system("pause");
		break;
		case 2:
		cout<<"Masukkan panjang alas tinggi=";cin>>alas;
		cout<<"Masukkan tinggi segitiga=";cin>>tinggi;
		luas=0.5*alas*tinggi;
		cout<<"Luas segitiga="<<luas<<"\n";
		system("pause");
	}
}
