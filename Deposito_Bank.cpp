#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main(){
	int periode;
	double  jum_awal, jum_akhir;
	char gol;
	float bunga;
	
	cout<<"\n PERHITUNGAN DEPOSITO BANK SHINTA";
	cout<<"\n ---------------------------------- ";
	cout<<"\n Masukan Golongan 		: ";
	cin>>gol;
	cout<<"\n Masukan Periode 		:";
	cin>>periode;
	
	switch(gol){
		case 'A' :
			jum_awal = 2000;
		case 'B' :
			jum_awal = 1750;
			break;
		case 'C' :
			jum_awal = 1250;
			break;
		case 'D' :
			jum_awal = 1000;
		break;
		default:
			jum_awal = 750;
				}
				
	if (periode>=1 && periode<=3 ){
		 bunga = 0.18;
	}
		else if (periode>=4 && periode<=6) {
			bunga = 0.21;
		}
		else if (periode>=7 && periode<=12) {
			bunga = 0.24;
		}
			else {
				bunga = 0.27;
			
			}
	cout<<"\n Bunga 				: "<<bunga;
	cout<<"\n Jumlah uang awal 		: "<<jum_awal;
	
	jum_akhir=(((bunga/periode)*jum_awal)+jum_awal);
	
	cout<<"\n Jumlah uang akhir 		: " <<jum_akhir;
	
	getche();
}
