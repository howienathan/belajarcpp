#include <iostream>
using namespace std;

// kamus
struct Sepatu {
    int ukuran;
};
int i, j;
int jumlah;

// deskripsi
int main() {
    cout << "Masukkan jumlah sepatu: ";
    cin >> jumlah;
    Sepatu sepatu[jumlah];

    
    for ( i = 0; i < jumlah; i++) {
        cout << "Masukkan ukuran sepatu ke-" << i + 1 << ": ";
        cin >> sepatu[i].ukuran;

        if (sepatu[i].ukuran <= 0) {
            cout << "Ukuran harus lebih dari 0!\n";
            i--;
        }
    }

    
    for ( i = 0; i < jumlah - 1; i++) {
        for ( j = i + 1; j < jumlah; j++) {
            if (sepatu[i].ukuran < sepatu[j].ukuran) {
                Sepatu temp = sepatu[i];
                sepatu[i] = sepatu[j];
                sepatu[j] = temp;
            }
        }
    }

    
    cout << "\nUrutan ukuran sepatu dari terbesar:\n";

    for ( i = 0; i < jumlah; i++) {
        cout << "Sepatu ke-" << i + 1 << ": "
             << sepatu[i].ukuran << endl;
    }

    cout << "\nUkuran sepatu terkecil: " << sepatu[jumlah - 1].ukuran << endl;
    cout << "\nUkuran sepatu terbesar: " << sepatu[0].ukuran << endl;

    return 0;
}