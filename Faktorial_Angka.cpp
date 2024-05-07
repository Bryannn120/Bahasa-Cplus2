#include<iostream>
using namespace std;

// 5! = lima faktorial
// 5! = 5 x 4 x 3 x 2 x 1

// 3! = 3 x 2 x 1

int faktorial(int x){
	if(x <= 1){
		cout << x << endl;
		return x;
	} else {
		cout << x <<" x ";
		return x * faktorial(x - 1);	
	}
		
}

int main(){
	int angka;
	cout << "Angka : "; cin >> angka;
	cout << angka << " faktorial = " << faktorial(angka);
	cout << endl;	
}
