
#include <iostream>
#include <ctype.h>

using namespace std;

int jumlahTransaksi;
long long nilaiTransaksi;
char locBaru, newDevice;
char ulang;

int main() {
    do {
        cout << "Masukan nilai transaksi : ";
        cin >> nilaiTransaksi;

        cout << "Masukan jumlah transaksi : ";
        cin >> jumlahTransaksi;

        cout << "Lokasi transaksi baru? (Y/T) : ";
        cin >> locBaru;

        cout << "Perangkat baru? (Y/T) : ";
        cin >> newDevice;

        locBaru = toupper(locBaru);
        newDevice = toupper(newDevice);

        while (locBaru != 'Y' && locBaru != 'T') {
            cout << "Input salah! Masukkan Y/T: ";
            cin >> locBaru;
            locBaru = toupper(locBaru);
        }

        while (newDevice != 'Y' && newDevice != 'T') {
            cout << "Input salah! Masukkan Y/T: ";
            cin >> newDevice;
            newDevice = toupper(newDevice);
        }

        if (nilaiTransaksi > 10000000 ||
            jumlahTransaksi > 5 ||
            (locBaru == 'Y' && newDevice == 'Y')) {
            cout << "\nStatus transaksi: BERISIKO" << endl;
        } else {
            cout << "\nStatus transaksi: NORMAL" << endl;
        }

        cout << "\nUlangi program? (Y/T): ";
        cin >> ulang;
        ulang = toupper(ulang);

    } while (ulang == 'Y');

    return 0;
}
