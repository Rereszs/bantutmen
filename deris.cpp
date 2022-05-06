#include <iostream>
using namespace std;

int main(){
    //program input barang
    cout << "╔══════════════════════════╗" << endl;
    cout << "║   PROGRAM INPUT BARANG   ║" << endl;
    cout << "╚══════════════════════════╝" << endl;
    int x = 0;
	string A[99]; int B[99]; float C[99];

    for (int i = 1; i > x; i++) {
        cout << "Input nama barang\t\t: ";
        cin >> A[i];
        cout <<"Input Jumlah barang\t\t: ";
        cin >> B[i];
        cout <<"Input biaya seluruh barang\t: ";
        cin >> C[i];
        
        cout << endl;
        char lagi;
		cout << "Apakah anda ingin memasukkan barang lagi?" <<endl;
		cout << "Ya(y) Tidak(t)"<<endl;
	  	cout <<"\njawab : ";
		cin >> lagi;
		
		if (lagi == 'y' || lagi == 'Y'){
			x = 0;
		} else if (lagi == 't' || lagi == 'T'){
			x = i+1;
		} else {
            cout << "Input yang anda masukkan salah";
            cout << "Mohon input kembali dengan benar" <<endl;
		    cout << "Ya(y) Tidak(t)"<<endl;
	    	cout <<"\njawab : ";
		    cin >> lagi;
		
	    	if (lagi == 'y' || lagi == 'Y'){
		    	x = 0;
		    } else if (lagi == 't' || lagi == 'T'){
		    	x = i+1;
            }
        }
    }
    int neff = x;
	cout <<"No\tNama\tJumlah\t\tBiaya" << endl;
	for (int i = 1; i < neff; i++) {
		cout << i <<". " <<"\t" << A[i] << "\t  "<<B[i]<<"\t\t"<<C[i]<<endl;
	}
	int totaljumlah; totaljumlah=0;
	long totalbiaya; totalbiaya=0;
	
	for (int i = 0;i < neff; i++){
		totaljumlah = totaljumlah + B[i];
		totalbiaya = totalbiaya + C[i];
	}
	cout <<"\tTotal : " << "\t "<<totaljumlah<<"\t\tRp."<<totalbiaya<<"\t"<<endl; 
    //cout <<"Total\t: " << "\t  "<<totaljumlah<<"\t\tRp."<<totalbiaya<<"\t"<<endl;
    //cout <<"Total\t\t: " "<<totaljumlah<<"\t\tRp."<<totalbiaya<<"\t"<<endl;
     
    
}
