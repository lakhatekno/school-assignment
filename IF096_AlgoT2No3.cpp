#include <iostream>
#include <iomanip>
using namespace std;

int main(){

	int jml1,jml2,jml3,jmltot;
	float hrg1,hrg2,hrg3,tothrg1,tothrg2,tothrg3,tothrg;
	char item1[30],item2[30],item3[30];
	char c='=';
	char d=' ';
	char e='-';
	
	//input item 1
	cout << "Item#1";
	cout << "\nNama\t\t: ";
	cin.get(item1,sizeof(item1));
	cout << "Jumlah\t\t: ";
	cin  >> jml1;
	cout << "Harga Satuan\t: ";
	cin  >> hrg1;
	cout << endl << endl;
	cin.ignore();
	
	//input item 2
	cout << "Item#2";
	cout << "\nNama\t\t: ";
	cin.get(item2,sizeof(item2));
	cout << "Jumlah\t\t: ";
	cin  >> jml2;
	cout << "Harga Satuan\t: ";
	cin  >> hrg2;
	cout << endl << endl;
	cin.ignore();
	
	//input item 3
	cout << "Item#3";
	cout << "\nNama\t\t: ";
	cin.get(item3,sizeof(item3));
	cout << "Jumlah\t\t: ";
	cin  >> jml3;
	cout << "Harga Satuan\t: ";
	cin  >> hrg3;
	cout << endl << endl;
	cin.ignore();
	
	//kalkulator
		jmltot=jml1+jml2+jml3;
		tothrg1=jml1*hrg1;
		tothrg2=jml2*hrg2;	
		tothrg3=jml3*hrg3;
		tothrg=tothrg1+tothrg2+tothrg3;
	
	//tabel rekap
	cout << "Rekap\n";
	
	     //border atas
	cout << setfill(c) << setiosflags(ios::left) << setw(71) << ""
	     << setfill(d);
	     
	     //baris1
	cout << "\n|" << setiosflags(ios::left) << setw(4) << " No" 
	     << "|" << setw(30) << "         Nama Barang"
	     << "|" << setw(12) << "   Jumlah"
	     << "|" << setw(12) << "Harga Satuan"
	     << "|" << setw(7)  << " Total" << resetiosflags(ios::left)
	     << "|\n";
	     
	     //border tengahatas
	cout <<setfill(e) << setw(71) << "" << setfill(d) << endl;
	     
	     //baris2
	cout << "|" << setiosflags(ios::right) << setw(4)  << "1"   << resetiosflags(ios::right)
	     << "|  " << setiosflags(ios::left)<< setw(28) << item1 << resetiosflags(ios::left)
	     << "|" << setiosflags(ios::right) << setw(12) << jml1
	     << "|" << setw(12) << hrg1
	     << "|" << setw(7)  << tothrg1 << resetiosflags(ios::right)
	     << "|\n";
	     
	     //baris3
	cout << "|" << setiosflags(ios::right) << setw(4)  << "2"   << resetiosflags(ios::right)
	     << "|  " << setiosflags(ios::left)<< setw(28) << item2 << resetiosflags(ios::left)
	     << "|" << setiosflags(ios::right) << setw(12) << jml2
	     << "|" << setw(12) << hrg2
	     << "|" << setw(7)  << tothrg2 << resetiosflags(ios::right)
	     << "|\n";
	     
	     //baris4
	cout << "|" << setiosflags(ios::right) << setw(4)  << "3"   << resetiosflags(ios::right)
	     << "|  " << setiosflags(ios::left)<< setw(28) << item3 << resetiosflags(ios::left)
	     << "|" << setiosflags(ios::right) << setw(12) << jml3
	     << "|" << setw(12) << hrg3
	     << "|" << setw(7)  << tothrg3 << resetiosflags(ios::right)
	     << "|\n";
	     
	     //border tengah bwh
	cout <<setfill(e) << setw(71) << "" << setfill(d) << endl;
	
	     //baris5
	cout << "|" << setiosflags(ios::right) << setw(35) << "Total" 
	     << "|" << setw(12) << jmltot
	     << "|" << setw(20) << tothrg
	     << "|\n";
	     
	     //bordwr bawah
	cout <<setfill(c) << setw(71) << "" << setfill(d) << endl;
	
	return 0;
}

/*
123210096
Muhammad Islakha K. T. A.
*/
