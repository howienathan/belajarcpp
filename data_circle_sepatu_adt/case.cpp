#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Data untuk menyimpan informasi sepatu
struct Sepatu {
    string nama;
    string merk;
    int nomor;
    string warna;
    double harga;
};

// Menampilkan data satu sepatu
void tampilkanSepatu(Sepatu s) {
    cout << "Nama  : " << s.nama << endl;
    cout << "Merk  : " << s.merk << endl;
    cout << "Nomor : " << s.nomor << endl;
    cout << "Warna : " << s.warna << endl;
    cout << "Harga : Rp " << fixed << setprecision(0) << s.harga << endl;
}

int main() {

    const int JUMLAH = 5;

    // Data sepatu
    Sepatu daftarSepatu[JUMLAH] = {
        {"Nadia", "Nike", 38, "Pink White", 1200000},
        {"Ira", "Adidas", 37, "Black Purple", 1100000},
        {"Rania", "New Balance", 39, "Blue", 1350000},
        {"Zulaeka", "Puma", 36, "Mint", 1000000},
        {"Laksmiya", "Asics", 38, "Black Orange", 1250000}
    };

    // Menampilkan data sepatu milik Rania
    cout << "       DATA SEPATU MILIK RANIA" << endl;

    tampilkanSepatu(daftarSepatu[2]);

    // Menampilkan semua data sepatu
    cout << "             DAFTAR SEPATU" << endl;

    for (int i = 0; i < JUMLAH; i++) {
        cout << "\nData ke-" << i + 1 << endl;
        tampilkanSepatu(daftarSepatu[i]);
        cout << "-------------------------------------------" << endl;
    }

    // Menghitung total harga semua sepatu
    double totalHarga = 0;

    for (int i = 0; i < JUMLAH; i++) {
        totalHarga += daftarSepatu[i].harga;
    }

    // Mencari harga sepatu paling mahal dan paling murah
    int palingMahal = 0;
    int palingMurah = 0;

    for (int i = 1; i < JUMLAH; i++) {

        if (daftarSepatu[i].harga > daftarSepatu[palingMahal].harga) {
            palingMahal = i;
        }

        if (daftarSepatu[i].harga < daftarSepatu[palingMurah].harga) {
            palingMurah = i;
        }
    }

    // Menampilkan hasil
    cout << "               HASIL AKHIR" << endl;

    cout << "Total harga semua sepatu : Rp "
         << fixed << setprecision(0) << totalHarga << endl;

    cout << "Sepatu paling mahal      : "
         << daftarSepatu[palingMahal].merk
         << " (" << daftarSepatu[palingMahal].nama << ") - Rp "
         << daftarSepatu[palingMahal].harga << endl;

    cout << "Sepatu paling murah      : "
         << daftarSepatu[palingMurah].merk
         << " (" << daftarSepatu[palingMurah].nama << ") - Rp "
         << daftarSepatu[palingMurah].harga << endl;

    return 0;
}