#include <iostream>
#include <string>
using namespace std;

int main() {
    int banyak,total;
    int potong[100];
    int jumlah[100];
    string jenis[100];
    int kode[3] = {2500, 2000, 1500};
 

    cout << "GEROBAK FRIED CHICKEN" << endl;
    cout << "---------------------" << endl;
    cout << "Kode \tJenis \tHarga" << endl;
    cout << "------------------------" << endl;
    cout << "D \tDada \tRp. 2500" << endl;
    cout << "P \tPaha \tRp. 2000" << endl;
    cout << "S \tSayap \tRp. 1500" << endl;
    cout << "------------------------" << endl;

    cout << "\nBanyak Jenis : ";
    cin >> banyak;

    for (int a = 0; a < banyak; a++) {
        cout << "\nJenis ke - " << a + 1 << endl;
        cout << "Jenis Potong [D/P/S] \t: ";
        cin >> jenis[a];
        cout << "Banyak Potong \t\t: ";
        cin >> potong[a];
    }
	cout << "\n-------------------------------------------------------------------------" << endl;
    cout << "\t\t\tGEROBAK FRIED CHICKEN" << endl;
    cout << "-------------------------------------------------------------------------" << endl;
    cout << "No. \t\tJenis \t\tHarga \t\tBanyak \t\tJumlah" << endl;
    cout << "\t\tPotong \t\tSatuan \t\tBeli \t\tHarga" << endl;
    cout << "-------------------------------------------------------------------------" << endl;

    for (int b = 0; b < banyak; b++) 
	{
        cout << b + 1 << "\t";
        if (jenis[b] == "D" || jenis[b] == "d") 
		{
            cout << "\tDada\t\tRp. " << kode[0] << "\t" << potong[b] << "\t\tRp. ";
            jumlah[b] = kode[0] * potong[b];
        } else if (jenis[b] == "P" || jenis[b] == "p") 
		{
            cout << "\tPaha\t\tRp. " << kode[1] << "\t" << potong[b] << "\t\tRp. ";
            jumlah[b] = kode[1] * potong[b];
        } else if (jenis[b] == "S" || jenis[b] == "s") 
		{
            cout << "\tSayap\t\tRp. " << kode[2] << "\t" << potong[b] << "\t\tRp. ";
            jumlah[b] = kode[2] * potong[b];
    	}
    	
        total += jumlah[b];
        cout << jumlah[b] << endl;
    }
    cout << "-------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\t\tJumlah Bayar \tRp. "<<total<<endl;
    cout << "\t\t\t\t\t\tJumlah Bayar \tRp. "<<total*0.1<<endl;
    cout << "\t\t\t\t\t\tJumlah Bayar \tRp. "<<total-total*0.1<<endl;
    cout << "-------------------------------------------------------------------------" << endl;

    return 0;
}
