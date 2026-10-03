#include <iostream>

using namespace std;

struct Bilangan {
    int x, bilangan;
};

int main() {
    cout << "Masukkan jumlah bilangan: ";
}


// int main() {
//     const int jumlahSepatu = 5;
//     Sepatu sepatu[jumlahSepatu];

//     for (int i = 0; i < jumlahSepatu; i++) {
//         cout << "Masukkan ukuran sepatu ke-" << i + 1 << ": ";
//         cin >> sepatu[i].ukuran;

//         if (sepatu[i].ukuran <= 0) {
//             cout << "Ukuran harus lebih dari 0. Coba lagi.\n";
//             i--;
//         }
//     }

//     int ukuranTerbesar = sepatu[0].ukuran;
//     for (int i = 1; i < jumlahSepatu; i++) {
//         if (sepatu[i].ukuran > ukuranTerbesar) {
//             ukuranTerbesar = sepatu[i].ukuran;
//         }
//     }

//     cout << "\nDaftar ukuran sepatu:\n";
//     for (int i = 0; i < jumlahSepatu; i++) {
//         cout << "Sepatu ke-" << i + 1 << ": " << sepatu[i].ukuran << '\n';
//     }
//     cout << "Ukuran sepatu terbesar: " << ukuranTerbesar << '\n';

//     return 0;
// }