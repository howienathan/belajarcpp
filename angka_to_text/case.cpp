#include <iostream>

using namespace std;

// kamus global
int a;

// deskripsi
int main() {
    cout << "Latihan angka ke text" << endl;
    
    cout << "Masukkan angka : ";
    cin >> a;
    cout << "Luaran text dari yang anda input adalah" << endl;

    if (a == 1) {
        cout << "satu" << endl;
    } else if (a == 2) {
        cout << "dua" << endl;
    } else if (a == 3) {
        cout << "tiga" << endl;
    }
    if (a == 4) {
        cout << "empat" << endl;
    } else if (a == 5) {
        cout << "lima" << endl;
    } else if (a == 6) {
        cout << "enam" << endl;
    }
    if (a == 7) {
        cout << "tujuh" << endl;
    } else if (a == 8) {
        cout << "delapan" << endl;
    } else if (a == 9) {
        cout << "sembilan" << endl;
    } if (a < 1 || a > 9) {
        cout << "anda memasukkan angka selain 1-9" << endl;
    }

    return 0;
}