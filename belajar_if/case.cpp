#include <iostream>
using namespace std;

struct Sepatu {
    // kamus global
    int ukuran;
};

// deskripsi
int main() {
    const int jumlah = 5;
    Sepatu sepatu[jumlah];

    
    for (int i = 0; i < jumlah; i++) {
        cout << "Masukkan ukuran sepatu ke-" << i + 1 << ": ";
        cin >> sepatu[i].ukuran;

        if (sepatu[i].ukuran <= 0) {
            cout << "Ukuran harus lebih dari 0!\n";
            i--;
        }
    }

    
    for (int i = 0; i < jumlah - 1; i++) {
        for (int j = i + 1; j < jumlah; j++) {
            if (sepatu[i].ukuran < sepatu[j].ukuran) {
                Sepatu temp = sepatu[i];
                sepatu[i] = sepatu[j];
                sepatu[j] = temp;
            }
        }
    }

    
    cout << "\nUrutan ukuran sepatu dari terbesar:\n";

    for (int i = 0; i < jumlah; i++) {
        cout << "Sepatu ke-" << i + 1 << ": "
             << sepatu[i].ukuran << endl;
    }

    
    cout << "\nUkuran sepatu terbesar: "
         << sepatu[0].ukuran << endl;

    return 0;
}