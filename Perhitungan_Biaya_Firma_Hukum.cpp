#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main(){
	int lama_konsultasi, biaya_konsultasi, total_biaya_konsultasi, total_bayar, kembali, jumlah_uang,potongan_biaya;
	char kode_pengacara;
	float  persentase_potongan_biaya;
	
	cout<<"\n PERHITUNGAN BIAYA FIRMA HUKUM";
	cout<<"\n ============================== ";
	cout<<"\n Biaya Konsultasi perjam Nilawati, S.H		= Rp.200.000";
	cout<<"\n Biaya Konsultasi perjam Romeo, M.H		= Rp.350.000";
	cout<<"\n Biaya Konsultasi perjam DR. Ridwan 		= Rp.500.000";
	cout<<"\n Biaya Konsultasi perjam DR. Siska		= Rp.650.000"<<endl;

	cout<<"\n Jika Konsultasi 1 - 3 jam, maka potongan biaya 0%";
	cout<<"\n Jika Konsultasi 4 - 6 jam, maka potongan biaya 10%";
	cout<<"\n Jika lebih dari 6 jam, maka potongan biaya 25%"<<endl;
	
	cout<<"\n (A) Nilawati, S.H";
	cout<<"\n (B) Romeo, M.H" ;
	cout<<"\n (C) DR. Ridwan Basri, M.H";
	cout<<"\n (D) DR. Siska Selvia"<<endl;
	
	cout<<"\n Masukan Kode Pengacara A s/d D 		: ";
	cin>>kode_pengacara;
	cout<<"\n Masukan Lama Konsultasi 			: ";
	cin>>lama_konsultasi;
	
	switch(kode_pengacara){
		case 'A' :
		biaya_konsultasi = 200000;
		break;
		case 'B' :
		biaya_konsultasi = 350000;
			break;
		case 'C' :
		biaya_konsultasi = 500000;
			break;
		case 'D' :
		biaya_konsultasi = 650000;
		break;
		default:
			cout<<"kode tidak valid";
			break;
				}
				
	if (lama_konsultasi>=1 && lama_konsultasi<=3 ){
			persentase_potongan_biaya = 0;
		}else if (lama_konsultasi>=4 && lama_konsultasi<=6){
			persentase_potongan_biaya = 0.1;
		}else{
			persentase_potongan_biaya = 0.25;
		}
		
			
	total_biaya_konsultasi=biaya_konsultasi*lama_konsultasi;
	cout<<"\n Total Biaya Konsultasi				: Rp. "<<total_biaya_konsultasi;
			
	potongan_biaya=total_biaya_konsultasi*persentase_potongan_biaya;
	cout<<"\n Potongan Biaya 				: Rp. "<<potongan_biaya;
	
	
	total_bayar=total_biaya_konsultasi-potongan_biaya;
	cout<<"\n Total Bayar 					: Rp. " <<total_bayar<<endl;
	
	
	cout<<"\n Jumlah Uang					: Rp.";
	cin>>jumlah_uang;	
	kembali=jumlah_uang-total_bayar;
	cout<<"\n Kembalian Uang Anda 				: Rp. "<<kembali;
	
	getche();
}
