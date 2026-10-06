#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;

struct Sepatu {
    string merk;
    string tipe;
    string warna;
    int ukuran;
    double harga;
};

int main () {
    Sepatu sepatu[5] = {
        {"Nike", "Air Max", "Hitam", 42, 1500000},
        {"Adidas", "Ultraboost", "Putih", 43, 2000000},
        {"Puma", "Suede Classic", "Merah", 41, 1200000},
        {"Vans", "Old Skool", "Biru", 44, 1300000},
        {"Converse", "Chuck Taylor", "Abu-abu", 42, 1100000}
    };

    if (sepatu[0].harga < sepatu[3].harga) {
        cout << "Sepatu dengan harga termurah adalah: " << sepatu[0].merk << " " << sepatu[0].tipe << " dengan harga Rp" << sepatu[0].harga << setprecision(0) << fixed << endl;
    } else {
        cout << "Sepatu dengan harga termurah adalah: " << sepatu[3].merk << " " << sepatu[3].tipe << " dengan harga Rp" << sepatu[3].harga << setprecision(0) << fixed << endl;
    }

    
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (sepatu[i].harga > sepatu[j].harga) {
                Sepatu temp = sepatu[i];
                sepatu[i] = sepatu[j];
                sepatu[j] = temp;
            }
        }
    }

    cout << "\nDaftar sepatu dari harga termurah ke termahal:\n";
    for (int i = 0; i < 5; i++) {
        cout << sepatu[i].merk << " " << sepatu[i].tipe << " - Rp" << sepatu[i].harga << setprecision(0) << fixed << endl;
    }

    return 0;

}