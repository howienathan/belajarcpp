#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Sepatu {
    string merk, warna;
    int nomor, ukuran;
    double harga;
};

int main () {
    Sepatu sepatu[5];

    string nama[5] = {"jon", "mahes", "kikik", "wahit", "ghaza"};

    for (int i = 0; i < 5; i++) {
        cout << "Masukkan data sepatu untuk " <<  endl;
        cout << "Data " << nama[i] << endl;
        cout << "Merk: "; cin >> sepatu[i].merk;
        cout << "nomor: "; cin >> sepatu[i].nomor;
        cin.ignore(); 
        cout << "warna: "; getline(cin, sepatu[i].warna);
        cout << "ukuran: "; cin >> sepatu[i].ukuran;
        cout << "harga: "; cin >> sepatu[i].harga;
        cin.ignore(); 
        cout << endl;
    }

    cout << "Data sepatu yang dimasukkan:\n";
    cout << left << setw(10) << "Nama" << setw(15) << "Merk" << setw(10) << "Nomor" << setw(15) << "Warna" << setw(10) << "Ukuran" << setw(15) << "Harga" << endl;
    cout << string(75, '-') << endl; 
    for (int i = 0; i < 5; i++) {
        cout << left << setw(10) << nama[i] 
             << setw(15) << sepatu[i].merk 
             << setw(10) << sepatu[i].nomor 
             << setw(15) << sepatu[i].warna 
             << setw(10) << sepatu[i].ukuran 
             << "Rp" << fixed << setprecision(0) << sepatu[i].harga 
             << endl;
    }

    return 0;
}