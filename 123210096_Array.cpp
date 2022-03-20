#include <iostream>
using namespace std;

void banyakPecahan(long uang, long pecahan[]);

main()
{ long uang,pecahan[9] = {50000,20000,10000,5000,2000,1000,500,200,100};
 cout << "Jumlah Uang Kembali : Rp "; cin >> uang;
 cout << "Pecahan uang kembali: " << endl;
 banyakPecahan(uang,pecahan);
}

void banyakPecahan(long uang, long pecahan[])
{
	
	for(int i=0;i<9;i++){
		int j = 0;
		while(uang>=pecahan[i]){
			uang-=pecahan[i];
			j++;
		}
		if(j==0) continue;
		if(uang<0) break;
		cout << j << " lembar pecahan " << pecahan[i] << endl;
	}

}
