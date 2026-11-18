// Judul
// Pengurutan bilangan terbesar ke terkecil

#include <iostream>
#include <vector>

using namespace std;

// kamus 
int a;
int x;
int z;
int y;
int sementara;

// deskripsi
int main() {
    vector<int> bilangan;

    cout << "Masukkan jumlah bilangan (A): ";
    cin >> a;

    while (a <= 0) {
        cout << "Jumlah harus lebih dari 0, masukkan kembali: ";
        cin >> a;
    }

    x = 1;
    while (x <= a) {
        cout << "Masukkan bilangan ke-" << x << ": ";
        cin >> z;
        bilangan.push_back(z);

        if (z % 2 == 0) {
            cout << z << " adalah bilangan genap." << endl;
        } else {
            cout << z << " adalah bilangan ganjil." << endl;
        }

        x = x + 1;
    }

    x = 0;
    while (x < a - 1) {
        y = x + 1;
        while (y < a) {
            if (bilangan[x] < bilangan[y]) {
                sementara = bilangan[x];
                bilangan[x] = bilangan[y];
                bilangan[y] = sementara;
            }
            y = y + 1;
        }
        x = x + 1;
    }

    cout << "Urutan bilangan dari terbesar ke terkecil: ";
    for (int nilai : bilangan) {
        cout << nilai << " ";
    }
    cout << endl;

    return 0;
}