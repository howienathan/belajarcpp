#include <iostream>

using namespace std;

int N, jumlah;

int main() {

    jumlah = 0;

    cout << "Masukkan bilangan: ";
    cin >> N;

    while (N > 0) {
        N = N / 10;
        jumlah++;
    }

    cout << "Jumlah digit = " << jumlah;

    return 0;
}

// jika dimasukkan 456, nilai N berubah menjadi 45, lalu 4, lalu 0. Perulangan berjalan tiga kali, sehingga program menampilkan Jumlah digit = 3