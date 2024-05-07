#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main() {
	float angka;
	string huruf;

	cout<<"Masukan nilai UTS anda		: ";cin>>angka;
		if(angka >= 0 && angka < 60){
		huruf = "D";}
	else if(angka >= 60 && angka < 70) {huruf = "C";
		}
	else if(angka >= 70 && angka <= 80) {huruf = "B";
	}
		else huruf = "A";
	cout<<"\n Nilai dalam huruf adalah	: "<<huruf;getche();
}
