#include <iostream>
using namespace std;

int main(){
	
	int X,Y,P,Q;
	
	cout << "========== Menentukan nilai dari kondisi bil negatif/positif =========="<<endl;
	cout << "==========================================="<<endl;
	cout << "Nilai x		= ";
	cin >> X;
	cout << "Nilai y		= ";
	cin >> Y;
	
	cout <<endl;
	
	P=X*Y;
 	cout<<"\nP Adalah  	= "<<P<<endl;
 	
 	cout <<endl;
 	

 	if ( P>= 0 ){
 			cout<<"Nilai P Adalah Positif"<<endl;
 		}else {
		 	cout<<"Nilai P Adalah Negatif"<<endl;

	 }


}
