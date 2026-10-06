#include <iostream>
#include <string>

using namespace std;

string namaAngka(int angka) {
    switch (angka) {
        case 1: return "satu";
        case 2: return "dua";
        case 3: return "tiga";
        case 4: return "empat";
        case 5: return "lima";
        case 6: return "enam";
        case 7: return "tujuh";
        case 8: return "delapan";
        case 9: return "sembilan";
        default: return "";
    }
}

int main() {
    int angka;

    cout << "Masukkan angka (1 - 100): ";
    cin >> angka;

    if (angka < 1 || angka > 100) {
        cout << "Angka di luar jangkauan!" << endl;
        return 0;
    }

    if (angka == 100) {
        cout << "seratus" << endl;
    }
    else if (angka < 10) {
        cout << namaAngka(angka) << endl;
    }
    else if (angka == 10) {
        cout << "sepuluh" << endl;
    }
    else if (angka == 11) {
        cout << "sebelas" << endl;
    }
    else if (angka < 20) {
        int satuan = angka % 10;

        cout << namaAngka(satuan) << " belas" << endl;
    }
    else {
        int puluhan = angka / 10;
        int satuan = angka % 10;

        if (satuan == 0) {
            cout << namaAngka(puluhan) << " puluh" << endl;
        }
        else {
            cout << namaAngka(puluhan) << " puluh "
                 << namaAngka(satuan) << endl;
        }
    }

    return 0;
}