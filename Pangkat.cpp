#include<iostream>
#include<cmath>
using namespace std;

double hitungPangkat(double angka, double pangkat){
	return pow(angka, pangkat);
}

void tampilPangkat(double angka, double pangkat){
	cout << "Hasil : " <<angka<<" Pangkat "<<pangkat;
	cout << " Adalah "<<pow(angka, pangkat)<<endl;
}
int main(){
	string ulang;
	double angka, pangkat;
	do{
		system("cls");
		cout << "Angka : "; cin >> angka;
		cout << "Pangkat : "; cin >> pangkat;
		tampilPangkat(angka, pangkat);
		cout <<"Ulang ? <y/n> : "; cin >> ulang;
	}
	while(ulang == "y");
		system("cls");`
	cout << " Program Selesai"<<endl;
	

}
