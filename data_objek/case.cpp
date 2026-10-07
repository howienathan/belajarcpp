#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int pilihanObjek;

double jariJari;
double tinggiTabung;
int pilihanTabung;
double volumeTabung;
double luasTabung;

double panjang;
double lebar;
double tinggiBalok;
int pilihanBalok;
double volumeBalok;
double luasBalok;

double phi;


int main () {

    phi = 3.14;

    cout << "Latihan case objek" << endl;
    cout << "Pilih objek yang ingin dihitung" << endl;
    cout << "1. Tabung" << endl;
    cout << "2. Balok" << endl;
    cout << "masukin pilihan : ";
    cin >> pilihanObjek;

    switch (pilihanObjek) {
        case 1:
            cout << "lau memilih tabung" << endl;
            cout << "masukin jari-jari : ";
            cin >> jariJari;
            cout << "masukin tinggi : ";
            cin >> tinggiTabung;

            volumeTabung = phi * jariJari * jariJari * tinggiTabung;
            luasTabung = 2 * phi * jariJari * (jariJari + tinggiTabung);

            cout << "Volume tabung  : " << volumeTabung << endl;
            cout << "Luas tabung  : " << luasTabung << endl;
            break;

        case 2:
            cout << "lau memilih balok" << endl;
            cout << "masukin panjang : ";
            cin >> panjang;
            cout << "masukin lebar : ";
            cin >> lebar;
            cout << "masukin tinggi : ";
            cin >> tinggiBalok;

            volumeBalok = panjang * lebar * tinggiBalok;
            luasBalok = 2 * (panjang * lebar + panjang * tinggiBalok + lebar * tinggiBalok);

            cout << "Volume balok  : " << volumeBalok << endl;
            cout << "Luas balok  : " << luasBalok << endl;
            break;

        default:
            cout << "pilihan gaada" << endl;
    }

    return 0;

}