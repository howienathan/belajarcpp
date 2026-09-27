#include <iostream>
#include <string>

using namespace std;

string namaSepatu;
string merek;
string warna;

int ukuran;

double harga;

int main()
{
    cout << "Nama Sepatu : ";
    getline(cin, namaSepatu);

    cout << "Merek       : ";
    getline(cin, merek);

    cout << "Warna       : ";
    getline(cin, warna);

    cout << "Ukuran      : ";
    cin >> ukuran;

    cout << "Harga       : ";
    cin >> harga;

    cout << endl;

    cout << "          Data SEPATU            " << endl;
    cout << "Nama Sepatu : " << namaSepatu << endl;
    cout << "Merek       : " << merek << endl;
    cout << "Warna       : " << warna << endl;
    cout << "Ukuran      : " << ukuran << endl;
    cout << "Harga       : Rp" << harga << endl;

    return 0;
}