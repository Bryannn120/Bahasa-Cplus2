#include<iostream>
using namespace std;

double hitungR(double c){
	double r = c * 4/5;
	return r;
}
double hitungK(double c){
	double k = c + 273;
	return k;
}
double hitungF(double c){
	double f = (c * 9/5) + 32;
	return f;
}

void tampilkonversi(double c){
	double r, k , f;
	r = hitungR(c);
	k = hitungK(c);
	f = hitungF(c);
	cout<<c<<" Derajat Celcius"<<endl;
	cout<<r<<" Derajat Reamur"<<endl;
	cout<<k<<" Derajat Kelvin"<<endl;
	cout<<f<<" Derajat Farenheit"<<endl;
}
int main(){
	double c,r,k,f;
	string lanjut;
	do{
		system("cls");
	cout<<"Masukan Suhu"<<endl;
	cout<<"Masukan Suhu Celcius :"; cin>>c;
	tampilkonversi(c);
	cout << "Lanjut <y/n> : "; cin >> lanjut;

} while(lanjut == "y");
system("cls");
cout << "Program Selesai"<<endl;
}
