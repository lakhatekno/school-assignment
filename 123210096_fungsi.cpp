#include <iostream>
#include <cctype>
#include <windows.h>

using namespace std;

void VolKubus();
void LKubus(float s);          //masukan
void VBalok (float *Vbalok);		   //keluaran pass by address
void LBalok(float &Luas);      //keluaran pass by reference
float VTabung(float V, float r, float t);

int main(){
		float r,L;
		char yn;
	do{	
		system("cls");
			
		cout << "TUGAS PROCEDURE/FUNCTION" << endl;
		cout << "Nama\t: Muhammd Islakha Khoiruzaman. T. A" << endl;
		cout << "NIM\t: 123210096" << endl;
		cout << "Kelas\t: IF D" << endl;
		cout << "==================================================================================" << endl << endl << endl;
		cout << "Menu :\n";
			
			string menu[]={"Luas Lingkaran\t(tanpa fungsi)",
							"Volume Kubus\t\t(fungsi void tanpa parameter)",
							"Luas Kubus\t\t(fungsi void dengan parameter masukan)",
							"Volume Balok\t\t(fungsi void dengan parameter keluaran - pass by address)",
							"Luas Balok\t\t(fungsi void dengan parameter keluaran - pass by reference)",
							"Volume Tabung\t(fungsi bertype)"};
	
		for(int i=0;i<6;i++){
			cout << i+1 << ". "<< menu[i] << endl;
			}
		cout << "Plih no = ";
			int PilMenu;
		cin  >> PilMenu;
		cout << "----------------------------------------------------------------------------------"<< endl << endl;
			
			switch(PilMenu){
				case 1 :

					cout << "Menghitung " << menu[PilMenu-1]<<endl;
						cout << "Rumus L = 3,14 * r * r" << endl << endl;
						cout << "\tInput jari-jari(r) = ";
						cin  >> r;
							L = 3.14 * r * r;
						cout << "\tLuas Lingkaran = " << L;
					break;
					
				case 2 : 
					
					cout << "Menghitung " << menu[PilMenu-1]<<endl;
						VolKubus();
					break;
					
				case 3 : 
					
					cout << "Menghitung " << menu[PilMenu-1]<<endl;
							float s;
						cout << "Rumus V = 6 * (s * s)" << endl << endl;
						cout << "\tInput sisi(s) = ";
						cin  >> s;
						LKubus(s);    
					break;
					
				case 4 : 
					
					cout << "Menghitung " << menu[PilMenu-1]<<endl;
							float V;
						VBalok( &V);
						cout << "\tVolume balok = " << V; 
					break;
					
				case 5 : 
					
					cout << "Menghitung " << menu[PilMenu-1]<<endl;
							float L;
						LBalok(L);
					break;
					
				case 6 : 
					
					cout << "Menghitung " << menu[PilMenu-1]<<endl;
						cout << "Rumus V = 3,14 * r * r * t" << endl << endl;
							float r, t;
						cout << "\tInput jari-jari(r) = ";
						cin  >> r;
						cout << "\tInput tinggi(t) = ";
						cin  >> t;
							V = 3.14*r*r*t;
						cout << "\tVolume balok = " << V;
					float VTabung(float V, float r, float t);
					break;
					
				default  : cout << "Tidak ada di pilihan menu";
			}
		
		cout << "\n\n\n---------------------------------------------------------------------------------"<< endl;
		cout << "Mau ulangi lagi? [Y/N] ";
		cin  >> yn;
	}
	while(tolower(yn)=='y');

	return 0;
}

void VolKubus(){
	cout << "Rumus V = s * s * s" << endl << endl;
	cout << "\tInput sisi(s) = ";
		float s,V;
	cin  >> s;
		V = s * s * s;
	cout << "\tVolume Kubus = " << V;
	}
	
void LKubus(float s){
	float L;
		L = 6*(s * s);
	cout << "\tLuas Kubus = " << L;
	}
	
void VBalok(float *Vbalok){
	cout << "Rumus V = p * l * t" << endl << endl;
		float p,l,t;
	cout << "\tInput panjang(p) = ";
	cin  >> p;
	cout << "\tInput lebar(l) = ";
	cin  >> l;
	cout << "\tInput tinggi(t) = ";
	cin  >> t;
		*Vbalok = p*l*t;
	}

void LBalok(float &Luas){
	cout << "Rumus L = 2*(p*l) + 2*(p*t) + 2*(l*t)" << endl << endl;
		float p,l,t;
	cout << "\tInput panjang(p) = ";
	cin  >> p;
	cout << "\tInput lebar(l) = ";
	cin  >> l;
	cout << "\tInput tinggi(t) = ";
	cin  >> t;
		Luas = 2*(p*l)+ 2*(p*t)+2*(l*t);
	cout << "\tLuas Kubus = " << Luas;
	}

float VTabung(float V, float r, float t){
	return  V = 3.14*r*r*t;
	}
