#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Perangkat {
    string namaBarang;
    string merek;
    string seri;
    string warna;
    string fungsiUtama;

    int tahunBeli;
    int ram;
    int penyimpanan;

    double ukuranLayar;
    double hargaBeli;
};

int main() {

    Perangkat barang;
    int n;

    cout << "==========================================" << endl;
    cout << "       DATA PERANGKAT MAHASISWA           " << endl;
    cout << "==========================================" << endl;

    cout << "Jumlah perangkat: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        cout << endl;
        cout << "Data perangkat ke-" << i << endl;
        cout << "------------------------------------------" << endl;

        cin.ignore();

        cout << "Nama Barang       : ";
        getline(cin, barang.namaBarang);

        cout << "Merek             : ";
        getline(cin, barang.merek);

        cout << "Tipe/Seri         : ";
        getline(cin, barang.seri);

        cout << "Warna             : ";
        getline(cin, barang.warna);

        cout << "Tahun Beli        : ";
        cin >> barang.tahunBeli;

        cout << "Ukuran Layar      : ";
        cin >> barang.ukuranLayar;

        cout << "Harga Beli        : Rp ";
        cin >> barang.hargaBeli;

        cout << "RAM               : ";
        cin >> barang.ram;

        cout << "Penyimpanan       : ";
        cin >> barang.penyimpanan;

        cin.ignore();

        cout << "Fungsi Utama      : ";
        getline(cin, barang.fungsiUtama);

        cout << endl;
        cout << "==========================================" << endl;
        cout << "             DATA PERANGKAT              " << endl;
        cout << "==========================================" << endl;

        cout << "Nama Barang  : " << barang.namaBarang << endl;
        cout << "Merek        : " << barang.merek << endl;
        cout << "Tipe/Seri    : " << barang.seri << endl;
        cout << "Warna        : " << barang.warna << endl;
        cout << "Tahun Beli   : " << barang.tahunBeli << endl;
        cout << "Ukuran Layar : " << barang.ukuranLayar << " inch" << endl;
        cout << "Harga Beli   : Rp " << fixed << setprecision(0)
             << barang.hargaBeli << endl;
        cout << "RAM          : " << barang.ram << " GB" << endl;
        cout << "Penyimpanan  : " << barang.penyimpanan << " GB" << endl;
        cout << "Fungsi Utama : " << barang.fungsiUtama << endl;

        cout << "==========================================" << endl;
    }

    return 0;
}