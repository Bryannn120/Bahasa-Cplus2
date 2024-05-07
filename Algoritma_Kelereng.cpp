#include <iostream>
using namespace std;

int main(){
	
	int Ksoni, Kadi, Kanis, Kluki;
	
	cout << "========== Algoritma menghitung kelereng =========="<<endl;
	cout << "==========================================="<<endl;
	cout << "Kelereng Soni		= ";
	cin >> Ksoni;


	Kadi=Ksoni-10;
	cout<<"\nKelereng Adi		= "<<Kadi<<endl;
 
 	Kanis=2*Ksoni+Kadi;
 		cout<<"\nKelereng Anis		= "<<Kanis<<endl;
 
 	Kluki=Ksoni+Kadi+Kanis-5;
 	cout<<"\nKelereng Luki 		= "<<Kluki<<endl;
 return 0;
}
