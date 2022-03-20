#include <iostream>
using namespace std;

int main(){
	
	int pil1,pil2;
	float L,V,p,l,a,t,r,a1,a2,s;
	
	cout << "----------------------------------------\n";
	cout << "Nama\t: Muhammad Islakha K. T. A."<<endl;
	cout << "NIM\t: 123210096"<<endl;
	cout << "----------------------------------------\n";
	
	cout << "Program menghitung luas bangun datar atau volume bangun ruang\n";
	cout << "Bangun datar[1] / Bangun ruang[2] : ";
	cin >> pil1;
	cout << endl;
	
	switch(pil1){
		case 1 :
			cout << "Menghitung luas bangun datar :\n";
			cout << "2. Persegi panjang"<<endl;
			cout << "3. Segitiga"<<endl;
			cout << "4. Lingkaran"<<endl;
			cout << "8. Trapesium"<<endl;
			cout << "\nPilihan : ";
			cin >> pil2;
			cout << endl;
			
			switch(pil2){
				case 2 : 
					cout << "Menghitung luas persegi panjang\n";
					cout << "Masukkan panjang\t: ";
					cin >> p;
					cout << "Masukkan lebar\t: ";
					cin >> l;
						L=p*l;
					cout << "Luas persegi panjang adalah :"<< L << endl;
					break;
				
				case 3 :
					cout << "Menghitung luas segiiga\n";
					cout << "Masukkan alas\t: ";
					cin >> a;
					cout << "Masukkan tinggi\t: ";
					cin >> t;
						L=0.5*a*t;
					cout << "Luas segitiga adalah :"<< L << endl;
					break;
					
				case 4 :
					cout << "Menghitung luas lingkaran\n";
					cout << "Masukkan jari-jari\t: ";
					cin >> r;
						L=3.14*r*r;
					cout << "Luas lingkaran adalah :"<< L << endl;
					break;
					
				case 8 :
					cout << "Menghitung luas trapesium\n";
					cout << "Masukkan sisi bawah\t: ";
					cin >> a1;
					cout << "Masukkan sisi atas\t: ";
					cin >> a2;
					cout << "Masukkan tinggi\t\t: ";
					cin >> t;
						L=0.5*(a1+a2)*t;
					cout << "Luas segitiga adalah :"<< L << endl;
					break;
					
				default : cout << "Pilihan salah";
				}
			
		break;
		case 2 :
			cout << "Menghitung volume bangun ruang :"<<endl;
			cout << "1. Kubus"<<endl;
			cout << "5. Kerucut"<<endl;
			cout << "6 Limas segitiga"<<endl;
			cout << "Pilihan : ";
			cin >> pil2;
			cout << endl;
			
			switch(pil2){
				case 1:
					cout << "Menghitung volume kubus"<<endl;
					cout << "Masukkan panjang sisi\t: ";
					cin >> s;
						V=s*s*s;
					cout << "Volume kubus\t: " << V;
				break;
				case 5 :
					cout << "Menghitung volume kerucut"<<endl;
					cout << "Masukkan jari-jari alas : ";
					cin >> r;
					cout << "Masukkan tinggi : ";
					cin >> t;
						V=3.14*r*r*t*1/3;
					cout << "Volume Kerucut\t: " << V;
				break;
				case 6 :
					cout << "Menghitung volume limas segitiga"<<endl;
					cout << "Masukkan luas segitiga alas : ";
					cin >> L;
					cout << "Masukkan tinggi : ";
					cin >> t;
						V=L*t*1/3;
					cout << "Volume limas segitiga\t: " << V;
				break;
				default : cout << "Pilihan salah";
				}
		
		break;
		default : cout << "Pilihan salah";
		}
		return 0;

}
