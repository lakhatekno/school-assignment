#include <iostream>
using namespace std;

int main(){
	
	float harga,diskon,total_bayar;
	
	cout << "Harga Barang\t: ";
	cin  >> harga;
	
		diskon=harga*10/100;
		total_bayar=harga-diskon;
	
	cout << "Diskon\t\t: " << diskon << endl;
	cout << "Total Pembayaran: " << total_bayar;
	
	return 0;

}

/*
123210096
Muhammad Islakha K. T. A.
*/
