#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main(){
	int lama_konsultasi, jumlah_obat, biaya, biaya_dibayar, jumlah, kembali;   
	char kode_pengobatan;
	float diskon;
	
	
	cout<<"PERHITUNGAN BIAYA KLINIK GIGI"<<endl;
	
	cout<<"Pilihan Pengobatan"<<endl;
	cout<<"1. Pemeriksaan gigi		4. Bersihkan Kapur Gigi"<<endl;
	cout<<"2. Cabut Gigi			5. Pemasangan Kawat Gigi"<<endl;
	cout<<"3. Tambal Gigi			6. Operasi Ringan"<<endl;
	
	
	cout<<"Masukan Kode Pengobatan : ";
	cin>>kode_pengobatan;
	cout<<"Masukan Jumlah Obat : ";
	cin>>jumlah_obat;
	
	switch(kode_pengobatan){
	
	case '1' :
		biaya = 125000;
	break;
	case '2' :
		biaya = 150000;
		break;
	case '3' :
		biaya = 225000;
	break;
	case '4' :
		biaya = 300000;
		break;
	case '5' :
		biaya = 3500000;
	break;
	case '6' :
		biaya = 5000000;
		break;
	default:
	cout<<"Code Tidak Valid";
	break;
}
	if (jumlah_obat>=0 && jumlah_obat<=1){
		diskon = 0.25;
	}else if (jumlah_obat>=2 && jumlah_obat<=3){
		diskon = 0.2;
	}else{
		diskon = 0.15;
	}
	
	
	
	biaya_dibayar=biaya-(biaya*diskon);
	
	cout<<"\n Jumlah Biaya Yang Di Bayar : Rp. "<<biaya_dibayar;
	
	
	cout<<"\n Jumlah Uang : Rp. ";
	cin>>jumlah;
	
	kembali=jumlah-biaya_dibayar;
	cout<<"\n Kembali : Rp. "<<kembali;
	
	getche();
	
	
	
	
	
	
	
	
	
	
}
