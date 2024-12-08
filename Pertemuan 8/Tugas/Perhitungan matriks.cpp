#include <iostream>
using namespace std;

int main() 
{
	int x, y, p, q, ulang;
    char z;
    float a[100][100], b[100][100], result[100][100];
    
    awal:
    cout << "Masukkan Matriks yang pertama" << endl;
    cout << "Masukkan jumlah baris (max 100): ";
    cin >> x;
    cout << "Masukkan jumlah Kolom (max 100): ";
    cin >> y;
    cout << endl;
    
    if (x > 100 || y > 100) 
	{
        cout << "Error: Ukuran matriks melebihi batas maksimum!" << endl;
        return 1;
    }
    
    for (int c = 0; c < x; c++) 
	{
        for (int d = 0; d < y; d++) 
		{
            cout << "Masukkan baris ke-" << c << " Dan kolom ke-" << d << " : ";
            cin >> a[c][d];
        }
        cout << endl;
    }
    
    cout << "Matriks Pertama:" << endl;
    for (int e = 0; e < x; e++) 
	{
        for (int f = 0; f < y; f++) 
		{
            cout << a[e][f] << " ";
        }
        cout << endl;
    }
    
    cout <<"\n======================================";
    cout << endl;
    
    cout << "\nPilih operasi hitung (+,-,*): ";
    cin >> z;
    cout << endl;
    
    cout <<"======================================\n";
    
    cout << "\nMasukkan Matriks yang kedua" << endl;
    cout << "Masukkan jumlah baris (max 100): ";
    cin >> p;
    cout << "Masukkan jumlah Kolom (max 100): ";
    cin >> q;
    cout << endl;
    
    if (p > 100 || q > 100) 
	{
        cout << "Error: Ukuran matriks melebihi batas maksimum!" << endl;
        return 1;
    }
    
    if ((z == '*' && y != p) || ((z == '+' || z == '-') && (x != p || y != q))) 
	{
        cout << "Error: Dimensi matriks tidak sesuai untuk operasi yang dipilih!" << endl;
        return 1;
    }
    
    for (int g = 0; g < p; g++) 
	{
        for (int h = 0; h < q; h++) 
		{
            cout << "Masukkan baris ke-" << g << " Dan kolom ke-" << h << " : ";
            cin >> b[g][h];
        }
        cout << endl;
    }

    cout << "Matriks Kedua:" << endl;
    for (int i = 0; i < p; i++) 
	{
        for (int j = 0; j < q; j++) 
		{
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    
    cout <<"\n======================================";
    cout << "\nHasil operasi:" << endl;
    
    switch(z) {
        case '+':
            for(int i = 0; i < x; i++) {
                for(int j = 0; j < y; j++) {
                    result[i][j] = a[i][j] + b[i][j];
                    cout << result[i][j] << " ";
                }
                cout << endl;
            }
            break;
            
        case '-':
            for(int i = 0; i < x; i++) {
                for(int j = 0; j < y; j++) {
                    result[i][j] = a[i][j] - b[i][j];
                    cout << result[i][j] << " ";
                }
                cout << endl;
            }
            break;
            
        case '*':
            for(int i = 0; i < x; i++) {
                for(int j = 0; j < y; j++) {
                    result[i][j] = a[i][j] * b[i][j];
                    cout << result[i][j] << " ";
                }
                cout << endl;
            }
            break;
            
        default:
            cout << "Operasi tidak valid!" << endl;
    }
    
    cout << "\nUlang? (1/0): ";
    cin >> ulang;
    cout << endl;
    
    if (ulang==1)
    {
    	goto awal;
	}
    
    return 0;
}
