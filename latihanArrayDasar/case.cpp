#include <iostream>

using namespace std;

int jumlah, i;
int angka;
int angkaArray[100]; 
int besar, kecil;
int total, rataRata;

int main () {
    cout << "Masukkan jumlah angka: ";
    cin >> jumlah;

    angkaArray[jumlah];

    i = 0;
    while (i < jumlah) {
        cout << "Masukkan angka ke-" << i + 1 << ": ";
        cin >> angkaArray[i];
        i = i + 1;
    }

    cout << "Menampilkan angka: " << endl;
    i = 0;
    while (i < jumlah) {
        cout << angkaArray[i] << " ";
        i = i + 1;
    }
    cout << endl;

    cout << "menampilkan yang terbesar dan terkecil" << endl;
    besar = angkaArray[0];
    kecil = angkaArray[0];
    
    i = 0;
    while (i < jumlah) {
        if (angkaArray[i] > besar) {
            besar = angkaArray[i];
        }
        if (angkaArray[i] < kecil) {
            kecil = angkaArray[i];
        }
        i = i + 1;
    }

    cout << "Angka terbesar: " << besar << endl;
    cout << "Angka terkecil: " << kecil << endl;

    cout << "nilai rata rata nya: " << endl;
    total = 0;
    i = 0;
    while (i < jumlah) {
        total = total + angkaArray[i];
        i = i + 1;
    }
    rataRata = total / jumlah;
    cout << "Rata rata: " << rataRata << endl;

    return 0;
}