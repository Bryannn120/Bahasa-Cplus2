#include <iostream>

using namespace std;

int main(int argc, char** argv){
    int X;
    char Status;
    int Hrg_Fc;
    int Hrg_byr;

    //input jumlah lembar dan status
    cout << "Masukkan jumlah lembar			: ";
    cin >> X;
    cout << "Apakah anda adalah langganan (Y/N)? 	: ";
    cin >> Status;

    //menentukan harga per lembar
    if (Status == 'Y' || Status == 'y') {
        Hrg_Fc = 75;
    }
    else if (X < 100) {
        Hrg_Fc = 100;
    }
    else {
        Hrg_Fc = 85;
    }

    //menghitung harga total
    Hrg_byr = X * Hrg_Fc;

    //output harga total
    cout << "Harga yang harus dibayar 		: Rp. " << Hrg_byr << endl;

    return 0;
}
