#include <iostream>
#include <iomanip>

using namespace std;

int kendaraan, x;
int jenis, bulan;
double biayaDasar;
double denda, totalPembayaran;
double totalseluruhpembayaran;

int main() {

    totalseluruhpembayaran = 0; 

    cout << "---------------------------------------------------" << endl;
    cout << "Masukkan jumlah kendaraan yang ingin diproses: ";
    cin >> kendaraan;
    cout << "---------------------------------------------------" << endl;

    while (kendaraan <= 0) {
        cout << "Jumlah harus > 0 ya. Masukkan ulang: ";
        cin >> kendaraan;
    }

    x = 1;
    while (x <= kendaraan) {
        cout << "\n--- Kendaraan Ke-" << x << " ---" << endl;

        do {
            cout << "Pilih Jenis kendaraan (1 = motor, 2 = mobil): ";
            cin >> jenis;
            if (jenis != 1 && jenis != 2) {
                cout << "Pilihan tidak valid! Masukkan 1 untuk Motor atau 2 untuk Mobil.\n";
            }
        } while (jenis != 1 && jenis != 2);

        do {
            cout << "Masukkan jumlah bulan keterlambatan : ";
            cin >> bulan;
            if (bulan < 0) {
                cout << "Bulan tidak boleh negatif!\n";
            }
        } while (bulan < 0);

        if (jenis == 1) {
            biayaDasar = 150000;
        } else {
            biayaDasar = 350000;
        }

        denda = biayaDasar * 0.02 * bulan;
        totalPembayaran = biayaDasar + denda;
        
        totalseluruhpembayaran += totalPembayaran;

        cout << "--------------------------------------------------" << endl;
        cout << "Biaya Dasar        : Rp " << fixed << setprecision(0) << biayaDasar << endl;
        cout << "Denda              : Rp " << denda << endl;
        cout << "Total Bayar        : Rp " << totalPembayaran << endl;
        cout << "Status             : ";
        if (bulan > 12) {
            cout << "TERLAMBAT BERAT" << endl;
        } else if (bulan > 0) {
            cout << "Terlambat biasa" << endl;
        } else {
            cout << "Tepat waktu" << endl;
        }
        cout << "--------------------------------------------------" << endl;

       x = x + 1;
    }

    cout << endl;
    cout << "Total seluruh pembayaran yang harus dibayar = Rp " << totalseluruhpembayaran << endl;
    return 0;
}