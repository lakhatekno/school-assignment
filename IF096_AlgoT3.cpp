#include <iostream>
#include <math.h>
using namespace std;

int main(){
	float ipk;
	int ipkt, lstd, lstdt, lass, lasst, mka, pub, bpub, pubt, skor;
	
	cout << "IPK\t\t: ";
	cin >> ipk;
	cout << "Lama Studi (semester)\t: ";
	cin >> lstd;
	cout << "Lama Mmenjadi asisten (semester)\t: ";
	cin >> lass;
	cout << "Bayak MKA praktikum\t:";
	cin >> mka;
	cout << "Jenis publikasi ([4]Internasioal,[3]Nasional,[2]regional,[1]UPN): ";
	cin >> pub;
	cout << "banyaknya publikasi\t: ";
	cin >> bpub;
	
	//rumus
	
	/*switch(ipk){
		case 3.876 ... 4.00 : ipkt=20*4;
		break;
		case 3.751 ... 3.875 : ipkt=20*3;
		break;
		case 3.626 ... 3.750 : ipkt=20*2;
		break;
		case 3.500 ... 3.625 : ipkt=20*1;
		break;
		default : ipkt=0;
		}*/
		
	if(ipk>=3.876&&ipk<=4.00){
		ipkt=20*4;
		} else if(ipk>=3.751&&ipk<3.876){
			ipkt=20*3;
			} else if (ipk>=3.626&&ipk<=3.750){
				ipkt=20*2;
			    } else if(ipk>=3.500&&ipk<=3.625){
					ipkt=20*1;
					} else {
						ipkt=0;
						}
		
	switch(lstd){
		case 7 : lstdt=10*4;
		break;
		case 8 : lstdt=10*3;
		break;
		case 9 : lstdt=10*2;
		break;
		case 10 : lstdt=10*1;
		break;
		default : lstdt=0;
		}
	
	if(lass>=4){
		lasst=10*4*mka;
		}else if(lass==3){
			lasst=10*4*mka;
			} else if (lass==2){
				lasst=10*2*mka;
				} else if (lass==1){
					lasst=10*1*mka;
					} else {
						lasst=0;
						}
	
	if(pub==4){
		pubt=10*4*bpub;
		} else if(pub==3){
			pubt=10*3*bpub;
			} else if(pub==2){
				pubt=10*2*bpub;
				} else if (pub==1){
					pubt=10*1*bpub;
					} else {
						pubt=0;
						}
	
	if(ipkt>0&&lstdt>0){					
		if(pubt!=0||lasst!=0){
			cout << "\nMahasiswa mendapat Karya Cendekia";
			} else {
				cout << "\nMahasiswa tidak mendapat karya cendekia";
				}
	} else {
		cout << "\nMahasiswa tidak mendapat karya cendekia";
		}
	
	skor=ipkt+lstdt+lasst+pubt;	
	cout << "\nJumlah Skor\t: " << skor;
		
	}
