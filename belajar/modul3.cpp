#include <iostream>
#include <string>

using namespace std;

string namaSepatu;
string merek;
string warna;
string bahan;
string jenis;

int ukuran;
int stok;

double harga;

int main()
{
    cout << "Input Data Sepatu" << endl;

    cout << "Nama/Model Sepatu : ";
    getline(cin, namaSepatu);

    cout << "Merek             : ";
    getline(cin, merek);

    cout << "Jenis         : ";
    getline(cin, jenis);

    cout << "Warna             : ";
    getline(cin, warna);

    cout << "Bahan             : ";
    getline(cin, bahan);

    cout << "Ukuran            : ";
    cin >> ukuran;

    cout << "Harga             : ";
    cin >> harga;

    cout << "Stok              : ";
    cin >> stok;

    cout << endl;
    cout << "          Data SEPATU            " << endl;

    cout << "Nama/Model Sepatu : " << namaSepatu << endl;
    cout << "Merek             : " << merek << endl;
    cout << "Jenis             : " << jenis << endl;    
    cout << "Warna             : " << warna << endl;
    cout << "Bahan             : " << bahan << endl;
    cout << "Ukuran            : " << ukuran << endl;
    cout << "Harga             : Rp" << harga << endl;
    cout << "Stok              : " << stok << endl;

    return 0;
}