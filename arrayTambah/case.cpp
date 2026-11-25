// // judul : tambahkan jumlah keseluruhan ukuran gelas

#include <iostream>

using namespace std;

// kamus
struct gelas {
    int ukuran;
};
int i;
int jumlah;
int jumlahSemuanya;
int besar, kecil;


// deskripsi
int main() {
    cout << "Masukkan jumlah gelas: ";
    cin >> jumlah;
    gelas gelas[jumlah];

    i = 0;
    while (i < jumlah) {
        cout << "Masukkan ukuran gelas ke-" << i + 1 << ": ";
        cin >> gelas[i].ukuran;

        if (gelas[i].ukuran <= 0) {
            cout << "Ukuran harus lebih dari 0!\n";
        } else {
            i = i + 1;
        }
    }

    cout << "\nJumlah keseluruhan ukuran gelas: ";
    jumlahSemuanya = 0;
    i = 0;
    while (i < jumlah) {
        jumlahSemuanya = jumlahSemuanya + gelas[i].ukuran;
        i = i + 1;
    }
    cout << jumlahSemuanya << endl;

    cout << "Menampilkan ukuran gelas: " << endl;
    i = 0;
    while (i < jumlah) {
        cout << "Gelas ke-" << i + 1 << ": " << gelas[i].ukuran << endl;
        i = i + 1;
    }

    cout << "menampilkan isi array" << endl;
    i = 0;
    while (i < jumlah) {
        cout << gelas[i].ukuran << endl;
        i = i + 1;
    }

    cout << "menentukan besar dan kecil" << endl;
    besar = gelas[0].ukuran;
    kecil = gelas[0].ukuran;

    i = 1;
    while (i < jumlah) {
        if (gelas[i].ukuran > besar) {
            besar = gelas[i].ukuran;
        }
        if (gelas[i].ukuran < kecil) {
            kecil = gelas[i].ukuran;
        }
        i = i + 1;
    }

    cout << "Gelas terbesar: " << besar << endl;
    cout << "Gelas terkecil: " << kecil << endl;

    return 0;
}

// kamus2

// float gelasA, gelasB, gelasC;
// int gelasXYZ[3];
// float totalVol;
// int totalVolXYZ;
// int x;
// int besar;
// int kecil;

// int main () {
//     gelasA = 50;
//     gelasB = 45;
//     gelasC = 60;
    
//     gelasXYZ[0] = gelasA;
//     gelasXYZ[1] = gelasB;
//     gelasXYZ[2] = gelasC;

//     totalVol = gelasA + gelasB + gelasC;
//     totalVolXYZ = gelasXYZ[0] + gelasXYZ[1] + gelasXYZ[2];

//     cout << "Total volume gelas: " << totalVol << endl;
//     cout << "Total volume gelas (array): " << totalVolXYZ << endl;

//     cout << "menampilkan isi" << endl;
//     cout << gelasA << endl;
//     cout << gelasB << endl;
//     cout << gelasC << endl;

//     cout << "menampilkan isi array" << endl;
//     x = 0;
//     while (x < 3) {
//         cout << gelasXYZ[x] << endl;
//         x = x + 1;
//     }
//     // menentukan gelas terbesar dan terkecil
//     besar = gelasXYZ[0];
//     kecil = gelasXYZ[0];
//     x = 1;
//     while (x < 3) {
//         if (gelasXYZ[x] > besar) {
//             besar = gelasXYZ[x];
//         }
//         if (gelasXYZ[x] < kecil) {
//             kecil = gelasXYZ[x];
//         }
//         x = x + 1;
//     }
//     cout << "Gelas terbesar: " << besar << endl;
//     cout << "Gelas terkecil: " << kecil << endl;
// }
