// judul : Program Mengurutkan Ukuran Sepatu dari Terbesar ke Terkecilq

#include <iostream>

using namespace std;

// kamus
struct Sepatu {
    int ukuran;
};
int i, j;
int jumlah;
bool genap;
int rataRata;
int jumlahSemuanya;

// deskripsi
int main() {
    cout << "Masukkan jumlah sepatu: ";
    cin >> jumlah;
    Sepatu sepatu[jumlah];

    
    for ( i = 0; i < jumlah; i = i + 1) {
        cout << "Masukkan ukuran sepatu ke-" << i + 1 << ": ";
        cin >> sepatu[i].ukuran;

        if (sepatu[i].ukuran <= 0) {
            cout << "Ukuran harus lebih dari 0!\n";
            i = i - 1;
        }
    }

    
    for ( i = 0; i < jumlah - 1; i = i + 1) {
        for ( j = i + 1; j < jumlah; j = j + 1) {
            if (sepatu[i].ukuran < sepatu[j].ukuran) {
                Sepatu temp = sepatu[i];
                sepatu[i] = sepatu[j];
                sepatu[j] = temp;
            }
        }
    }

    
    cout << "\nUrutan ukuran sepatu dari terbesar:\n";

    for ( i = 0; i < jumlah; i = i + 1) {
        cout << "Sepatu ke-" << i + 1 << ": "
             << sepatu[i].ukuran << endl;
    }

    cout << "\nUkuran sepatu terkecil: " << sepatu[jumlah - 1].ukuran << endl;
    cout << "\nUkuran sepatu terbesar: " << sepatu[0].ukuran << endl;
    cout << "\nUkuran sepatu genap: ";

    genap = false;
    for (i = 0; i < jumlah; i = i + 1) {
        if (sepatu[i].ukuran % 2 == 0) {
            cout << sepatu[i].ukuran << " ";
            genap = true;
        }

    }
    if (!genap) {
        cout << "Tidak ada ukuran sepatu genap.";
    }

    cout << "\n\nRata-rata ukuran sepatu: ";
    rataRata = 0;
    for (i = 0; i < jumlah; i = i + 1) {
        rataRata = rataRata + sepatu[i].ukuran;
    }
    rataRata = rataRata / jumlah;

    cout << rataRata << endl;

    cout << "\nJumlah keseluruhan ukuran sepatu: ";
    jumlahSemuanya = 0;
    for (i = 0; i < jumlah; i = i + 1) {
        jumlahSemuanya = jumlahSemuanya + sepatu[i].ukuran;
    }
    cout << jumlahSemuanya << endl;

    return 0;
}