#include <iostream>
#include <string>

using namespace std;

string namaPengguna, hobiPengguna, komunikasiPengguna;
string namaCalon, hobiCalon, komunikasiCalon, toleransi;
int jumlahCalon;
int i;
char lanjut;

int main() {

    i = 1;
    lanjut = 'y';
    
    cout << "Masukkan Nama Pengguna: ";
    getline(cin >> ws, namaPengguna);

    cout << "Masukkan Hobi Pengguna (Membaca/Olahraga/Musik): ";
    cin >> hobiPengguna;

    cout << "Masukkan Gaya Komunikasi (Terbuka/Tenang): ";
    cin >> komunikasiPengguna;

    cout << "Masukkan Jumlah Calon: ";
    cin >> jumlahCalon;

 
    while (i <= jumlahCalon && (lanjut == 'Y' || lanjut == 'y')) {
        cout << "\n=== Calon Pasangan ke-" << i << " ===" << endl;
        cout << "Masukkan Nama Calon: ";
        getline(cin >> ws, namaCalon);

        do {
            cout << "Masukkan Hobi Calon (Membaca/Olahraga/Musik): ";
            cin >> hobiCalon;
        } while (hobiCalon != "Membaca" && hobiCalon != "Olahraga" && hobiCalon != "Musik");

        do {
            cout << "Masukkan Gaya Komunikasi Calon (Terbuka/Tenang): ";
            cin >> komunikasiCalon;
        } while (komunikasiCalon != "Terbuka" && komunikasiCalon != "Tenang");

        do {
            cout << "Toleransi Perbedaan Gaya Komunikasi (Ya/Tidak): ";
            cin >> toleransi;
        } while (toleransi != "Ya" && toleransi != "Tidak");

        if ((hobiCalon == hobiPengguna && komunikasiCalon == komunikasiPengguna) ||
            (hobiCalon == hobiPengguna && toleransi == "Ya")) {
            cout << "Hasil Rekomendasi: Direkomendasikan" << endl;
        } else {
            cout << "Hasil Rekomendasi: Belum Cocok" << endl;
        }

        i = i + 1;

        if (i <= jumlahCalon) {
            cout << "Lanjut periksa calon berikutnya? (Y/T): ";
            cin >> lanjut;
        }
    }


    cout << "\nPencarian selesai" << endl;

    return 0;
}