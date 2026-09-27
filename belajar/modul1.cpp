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

    namaSepatu = "Air Force 1";
    merek      = "Nike";
    warna      = "Putih";
    ukuran     = 42;
    harga      = 1799000;



    cout << "          INFO SEPATU            " << endl;

    cout << "Nama   : " << namaSepatu << endl;
    cout << "Merek  : " << merek << endl;
    cout << "Warna  : " << warna << endl;
    cout << "Ukuran : " << ukuran << endl;
    cout << "Harga  : Rp " << harga << endl;

    return 0;
}