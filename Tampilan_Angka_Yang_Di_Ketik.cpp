#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
	int bil;
	cout<<"Ketik bilangan bulat dari 1 s/d 3 : ";cin>>bil;
	switch(bil)
{case 1 :
	cout<<"\n anda ketik angka satu";
 break;
case 2 :
	cout<<"\n anda ketik angka dua";break;
case 3 :
	cout<<"\n anda ketik angka tiga";break;
default:
	cout<<"\n anda salah input";
}
getche();
}
