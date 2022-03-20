#include <iostream>
using namespace std;

int main(){
	
	float x,y,pembilang,penyebut;
	
	cout << "---Program Menghitung Fungsi---" << endl << endl;
	cout << "+--------------------+" << endl;
	cout << "|     2x^2 + 5x - 8  |" << endl;
	cout << "| y = -------------  |" << endl;
	cout << "|          2         |" << endl;
	cout << "+--------------------+" << endl << endl;
	
	cout << "Masukkan Nilai x: " << endl;
	cout << "----------------------\n\n";
	cout << "Pembilang\t: ";
	cin  >> pembilang;
	cout << "---------------  -----\n";
	cout << "Penyebut\t: ";
	cin  >> penyebut;
	
		x=pembilang/penyebut;
		y=(2*x*x + 5*x - 8)/2;
		
	cout << "\n----------------------\n";
	cout << "Hasil\t: " << y;
	
	return 0;
	
}

/*
123210096
Muhammad Islakha K. T. A.
*/
