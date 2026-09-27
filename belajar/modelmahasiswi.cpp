#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Tas {
    string namaTas;
    string merek;
    string warna;
    string bahan;
    int kapasitas;
    double hargaBeli;
    int tahunBeli;
    int jumlahKantong;
    string fiturPembeda;
    string kondisi;
};

int main() {

    Tas koleksi[5] = {
        {"Tas Kuliah", "Eiger", "Cream", "Polyester", 20, 350000, 2024, 6, "Ada Laptop Sleeve", "Baik"},
        {"Tas Camping", "Deuter", "Hijau Army", "Nylon", 50, 1250000, 2023, 8, "Waterproof", "Sangat Baik"},
        {"Tas HangOut", "Charles & Keith", "Hitam", "Kulit Sintetis", 8, 750000, 2024, 4, "Tali Rantai", "Baik"},
        {"Tas Flexing", "Dior", "Pink", "Kulit Asli", 10, 45000000, 2024, 5, "Original", "Sangat Baik"},
        {"Tas Kondangan", "Kate Spade", "Putih", "Kulit Sintetis", 7, 2800000, 2024, 3, "Tali Panjang", "Baik"}
    };

    cout << "=========================================" << endl;
    cout << "          KOLEKSI TAS MAHASISWI         " << endl;
    cout << "=========================================" << endl;

    for (int i = 0; i < 5; i++) {
        cout << endl;
        cout << "Tas ke-" << i + 1 << endl;
        cout << "Nama Tas        : " << koleksi[i].namaTas << endl;
        cout << "Merek           : " << koleksi[i].merek << endl;
        cout << "Warna           : " << koleksi[i].warna << endl;
        cout << "Bahan           : " << koleksi[i].bahan << endl;
        cout << "Kapasitas       : " << koleksi[i].kapasitas << " L" << endl;
        cout << "Harga Beli      : Rp " << fixed << setprecision(0)
             << koleksi[i].hargaBeli << endl;
        cout << "Tahun Beli      : " << koleksi[i].tahunBeli << endl;
        cout << "Jumlah Kantong  : " << koleksi[i].jumlahKantong << endl;
        cout << "Fitur Pembeda   : " << koleksi[i].fiturPembeda << endl;
        cout << "Kondisi         : " << koleksi[i].kondisi << endl;

        cout << "-----------------------------------------" << endl;
    }

    return 0;
}