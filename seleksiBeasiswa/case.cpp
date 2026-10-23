// judul
// AND: Seleksi Beasiswa Mahasiswa Berprestasi

#include <iostream>

using namespace std;

// kamus

float IPK;
int penghasilanOrtu;
float kehadiran;
char nilai;

int main() {
    cout << "Input Data Mahasiswa" << endl;
    cout << "Masukkan IPK : ";
    cin >> IPK;
    cout << "Masukkan Penghasilan Orang Tua (tanpa titik, contoh: 3000000): ";
    cin >> penghasilanOrtu;
    cout << "ada nilai e? (masukan )";
    cin >> nilai;
    cout << "Masukkan Persentase Kehadiran (tanpa %, contoh: 95): ";
    cin >> kehadiran;


    cout << "hasil seleksi beasiswa\n";

    if (IPK >= 3.50 && penghasilanOrtu <= 4000000 && (nilai == 'T' || nilai == 't') && kehadiran >= 90.0) {
        
        cout << "Hasil: Lolos\n";
        
    } else {
        
        cout << "Hasil: Tidak lolos\n";
        cout << "Alasan kegagalan:\n";
        
        if (IPK < 3.50) {
            cout << "- IPK di bawah standar minimal (3.50).\n";
        }
        if (penghasilanOrtu > 4000000) {
            cout << "- Penghasilan orang tua melebihi batas maksimal (Rp4.000.000).\n";
        }
        if (nilai == 'Y' || nilai == 'y') {
            cout << "- Mahasiswa masih memiliki nilai E.\n";
        }
        if (kehadiran < 90.0) {
            cout << "- Persentase kehadiran di bawah standar minimal (90%).\n";
        }
    }

    return 0;

}