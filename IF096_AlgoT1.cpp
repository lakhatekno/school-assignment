#include <iostream>

using namespace std;

int main()
{
	long p,l,t,Vbalok,Lbalok;
	
	cout << " -----Menghitung Volume dan Luas Permukaan Balok-----";
	cout << "\n \n Masukkan Nilai yang Diketahui: ";
	cout << "\n\n Panjang: ";
	cin  >>  p;
	cout << " Lebar: ";
	cin  >>  l;
	cout << " Tinggi: ";
	cin  >>  t;
	
		Vbalok = p*l*t;
		Lbalok = 2*p*t + 2*p*l + 2*l*t;
		
	cout << "\n ================";
	cout << "\n\n Volume Balok = " << Vbalok ;
	cout << "\n Luas Permukaan Balok = " << Lbalok ;
	
	return 0;
}
