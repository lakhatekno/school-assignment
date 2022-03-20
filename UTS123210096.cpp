#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
	int no;
	char tgl[25],nama[25];
	char g15,g12,g05,g13,g14,g01,g03,g04,g02,g06,g11,g16,g10,g09,g07,g08;
	
	cout << "DIAGNOSA PENYAKIT JERAWAT" <<endl;
	cout << "------------------------------------------------------------------------" <<endl;
	cout << "No. Diagnosa (NIM Anda)\t: ";
	cin >> no;
	cout << "Tgl. Diagnosa\t\t: ";
	cin.ignore();
	cin.getline(tgl,25);
	cout << "Nama Pasien (Nama Anda)\t: ";
	cin.getline(nama,25);
	cout << "------------------------------------------------------------------------" <<endl;
	cout << "PERTANYAAN GEJALA :\n\n";
	cout << "1. Apakah Anda mengalami gejala [G15] Tidak terasa sakit bila disentuh ?\n";
	cout << "   BENAR (Y) / SALAH (T) ? ";
	cin >> g15;
	if(g15=='y'){
		cout << "2. Apakah Anda mengalami gejala [G12] Berukuran kecil ?"<<endl;
		cout << "   BENAR (Y) / SALAH (T) ? ";
		cin >> g12;
		if(g12=='y'){
			cout << "3. Apakah Anda mengalami gejala [G13] Berwarna putih ?"<<endl;
			cout << "   BENAR (Y) / SALAH (T) ? ";
			cin >> g13;
			if(g13=='y'){
				cout << "\n\n\nJumlah Pertanyaan Gejala = 3\n";
				cout << "------------------------------------------------------------------------\n" <<endl;
				cout << "HASIL DIAGNOSA PEYAKIT JERAWAT (" << nama << ")" << endl ;
				cout << "[ P01 ] Whiteheads\n";
				cout << "\n------------------------------------------------------------------------" <<endl;
				} else {
					cout << "4. Apakah Anda mengalami gejala [G14] Berwarna hitam ?\n";
					cout << "   BENAR (Y) / SALAH (T) ? ";
					cin >> g14;
					if(g14=='y'){
						cout << "\n\n\nJumlah Pertanyaan Gejala = 4\n";
						cout << "------------------------------------------------------------------------\n" <<endl;
						cout << "HASIL DIAGNOSA PEYAKIT JERAWAT (" << nama << ")" <<endl;
						cout << "[ P02 ] Blackheads\n";
						cout << "\n------------------------------------------------------------------------" <<endl;
					} else {
						cout << "5. Apakah Anda mengalami gejala [G01] Berwarna merah ?\n";
						cout << "   BENAR (Y) / SALAH (T) ? ";
						cin >> g01;
						if(g01=='y'){
							cout << "6. Apakah Anda mengalami gejala [G03] Memliki jumlah yang banyak ?\n";
							cout << "   BENAR (Y) / SALAH (T) ? ";
							cin >> g03;
							if(g03=='y'){
								cout << "\n\n\nJumlah Pertanyaan Gejala = 6\n";
								cout << "------------------------------------------------------------------------\n" <<endl;
								cout << "HASIL DIAGNOSA PEYAKIT JERAWAT (" << nama << ")" <<endl ;
								cout << "[ P03 ] Papule\n";
								cout << "\n------------------------------------------------------------------------" <<endl;
								} else {
									cout << "7. Apakah Anda mengalami gejala [G04] Berwarna merah dipinggir dan putih ditengah ?\n";
									cout << "   BENAR (Y) / SALAH (T) ? ";
									cin >> g04;
									if(g04=='y'){
										cout << "8. Apakah Anda mengalami gejala [G02] Berisi putih seperti nasi ?\n";
										cout << "   BENAR (Y) / SALAH (T) ? ";
										cin >> g02;
										if(g02=='y'){
											cout << "\n\n\nJumlah Pertanyaan Gejala = 8\n";
											cout << "------------------------------------------------------------------------\n" <<endl;
											cout << "HASIL DIAGNOSA PEYAKIT JERAWAT (" << nama << ")" << endl;
											cout << "[ P04 ] Postule\n";
											cout << "\n------------------------------------------------------------------------" <<endl;
											}else{
												cout << "\n\n\nJumlah Pertanyaan Gejala = 8\n";
												cout << "------------------------------------------------------------------------\n" <<endl;
												cout << "HASIL DIAGNOSA PEYAKIT JERAWAT (" << nama << ")" << endl;
												cout << "TIDAK ADA HASIL\n";
												cout << "\n------------------------------------------------------------------------" <<endl;
												}
										}else{
											cout << "\n\n\nJumlah Pertanyaan Gejala = 7\n";
											cout << "------------------------------------------------------------------------\n" <<endl;
											cout << "HASIL DIAGNOSA PEYAKIT JERAWAT (" << nama << ")" << endl;
											cout << "TIDAK ADA HASIL\n";
											cout << "\n------------------------------------------------------------------------" <<endl;
											}
									}
						} else {
							cout << "\n\n\nJumlah Pertanyaan Gejala = 5\n";
							cout << "------------------------------------------------------------------------\n" <<endl;
							cout << "HASIL DIAGNOSA PEYAKIT JERAWAT (" << nama << ")" << endl;
							cout << "TIDAK ADA HASIL\n";
							cout << "\n------------------------------------------------------------------------" <<endl;
							}
						}
					}
			} else {
					cout << "\n\n\nJumlah Pertanyaan Gejala = 2\n";
					cout << "------------------------------------------------------------------------\n" <<endl;
					cout << "HASIL DIAGNOSA PEYAKIT JERAWAT (" << nama << ")" << endl;
					cout << "TIDAK ADA HASIL\n";
					cout << "\n------------------------------------------------------------------------" <<endl;}
	} else {
		cout << "2. Apakah Anda mengalami gejala [G05] Berukuran besar ?" << endl;
		cout << "   BENAR (Y) / SALAH (T) ? ";
		cin >> g05;
		if(g05=='y'){
			cout << "3. Apakah Anda mengalami gejala [G06] Terasa sakit bila disentuh ?"<<endl;
			cout << "   BENAR (Y) / SALAH (T) ? ";
			cin >> g06;
			if(g06=='y'){
				cout << "\n\n\nJumlah Pertanyaan Gejala = 3\n";
				cout << "------------------------------------------------------------------------\n" <<endl;
				cout << "HASIL DIAGNOSA PEYAKIT JERAWAT (" << nama << ")" << endl;
				cout << "[ P05 ] Nodule\n";
				cout << "\n------------------------------------------------------------------------" <<endl;
				}else{
					cout << "\n\n\nJumlah Pertanyaan Gejala = 3\n";
							cout << "------------------------------------------------------------------------\n" <<endl;
							cout << "HASIL DIAGNOSA PEYAKIT JERAWAT (" << nama << ")" << endl;
							cout << "TIDAK ADA HASIL\n";
							cout << "\n------------------------------------------------------------------------" <<endl;
					}
			}else{
				cout << "3. Apakah Anda mengalami gejala [G11] Menyebar ke bagian tubuh ?"<<endl;
				cout << "   BENAR (Y) / SALAH (T) ? ";
				cin >> g11;
				if(g11=='y'){
					cout << "4. Apakah Anda mengalami gejala [G16] Bentuknya melebar ?"<<endl;
					cout << "   BENAR (Y) / SALAH (T) ? ";
					cin >> g16;
					if(g16=='y'){
						cout << "\n\n\nJumlah Pertanyaan Gejala = 4\n";
						cout << "------------------------------------------------------------------------\n" <<endl;
						cout << "HASIL DIAGNOSA PEYAKIT JERAWAT (" << nama << ")" << endl;
						cout << "[ P08 ] Acne rosacea\n";
						cout << "\n------------------------------------------------------------------------" <<endl;
						}else{
							cout << "\n\n\nJumlah Pertanyaan Gejala = 4\n";
							cout << "------------------------------------------------------------------------\n" <<endl;
							cout << "HASIL DIAGNOSA PEYAKIT JERAWAT (" << nama << ")" << endl;
							cout << "TIDAK ADA HASIL\n";
							cout << "\n------------------------------------------------------------------------" <<endl;
							}
					}else{
						cout << "4. Apakah Anda mengalami gejala [G09] Berbentuk bintik-bintik putih yang berukuran kecil dari komedo ?"<<endl;
						cout << "   BENAR (Y) / SALAH (T) ? ";
						cin >> g09;
						if(g09=='y'){
							cout << "5. Apakah Anda mengalami gejala [G10] Terasa saat diraba ?"<<endl;
							cout << "   BENAR (Y) / SALAH (T) ? ";
							cin >> g10;
							if(g10=='y'){
								cout << "\n\n\nJumlah Pertanyaan Gejala = 5\n";
								cout << "------------------------------------------------------------------------\n" <<endl;
								cout << "HASIL DIAGNOSA PEYAKIT JERAWAT (" << nama << ")" << endl;
								cout << "[ P07 ] Milia\n";
								cout << "\n------------------------------------------------------------------------" <<endl;
								}else{
									cout << "\n\n\nJumlah Pertanyaan Gejala = 5\n";
									cout << "------------------------------------------------------------------------\n" <<endl;
									cout << "HASIL DIAGNOSA PEYAKIT JERAWAT (" << nama << ")" << endl;
									cout << "TIDAK ADA HASIL\n";
									cout << "\n------------------------------------------------------------------------" <<endl;
							}
							} else{
								cout << "5. Apakah Anda mengalami gejala [G07] Menyebar keseluruh wajah ?"<<endl;
								cout << "   BENAR (Y) / SALAH (T) ? ";
								cin >> g07;
								if(g07=='y'){
									cout << "6. Apakah Anda mengalami gejala [G08] Berbentuk tonjolan yang meradang ?"<<endl;
									cout << "   BENAR (Y) / SALAH (T) ? ";
									cin >> g08;
									if(g08=='y'){
										cout << "\n\n\nJumlah Pertanyaan Gejala = 6\n";
										cout << "------------------------------------------------------------------------\n" <<endl;
										cout << "HASIL DIAGNOSA PEYAKIT JERAWAT (" << nama << ")" << endl;
										cout << "[ P06 ] Cyst\n";
										cout << "\n------------------------------------------------------------------------" <<endl;
										} else {
												cout << "\n\n\nJumlah Pertanyaan Gejala = 6\n";
												cout << "------------------------------------------------------------------------\n" <<endl;
												cout << "HASIL DIAGNOSA PEYAKIT JERAWAT (" << nama << ")" << endl;
												cout << "TIDAK ADA HASIL\n";
												cout << "\n------------------------------------------------------------------------" <<endl;
											}
									} else{
										cout << "\n\n\nJumlah Pertanyaan Gejala = 5\n";
										cout << "------------------------------------------------------------------------\n" <<endl;
										cout << "HASIL DIAGNOSA PEYAKIT JERAWAT (" << nama << ")" << endl;
										cout << "TIDAK ADA HASIL\n";
										cout << "\n------------------------------------------------------------------------" <<endl;
										}
								}
						}
				}
		}
//Muhammad Islakha K. T A
//123210096
//IF-D 
	return 0;
}

