#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Barang {
    string nama;
    string merek;
    string tipe_model;
    string kondisi;
    char kode;
    int tahun_diperoleh;
    double harga_beli;
    double nilai_sekarang;
    bool masih_digunakan;
};

int main() {

    const int JUMLAH = 4;

    string kategori[JUMLAH] = {
        "Sepatu",
        "Jam Tangan",
        "Tas",
        "HP / Smartphone"
    };

    Barang daftar[JUMLAH];

    double total_beli = 0;
    double total_sekarang = 0;

    cout << "==========================================" << endl;
    cout << "       INVENTARIS BARANG PRIBADI         " << endl;
    cout << "==========================================" << endl;

    for (int i = 0; i < JUMLAH; i++) {

        cout << endl;
        cout << "Data " << i + 1 << " - " << kategori[i] << endl;
        cout << "------------------------------------------" << endl;

        cout << "Nama Barang     : ";
        getline(cin, daftar[i].nama);

        cout << "Merek           : ";
        getline(cin, daftar[i].merek);

        cout << "Tipe/Model      : ";
        getline(cin, daftar[i].tipe_model);

        cout << "Kode Barang     : ";
        cin >> daftar[i].kode;

        cout << "Tahun Diperoleh : ";
        cin >> daftar[i].tahun_diperoleh;

        cout << "Harga Beli      : Rp ";
        cin >> daftar[i].harga_beli;

        cout << "Nilai Sekarang  : Rp ";
        cin >> daftar[i].nilai_sekarang;

        cin.ignore();

        cout << "Kondisi         : ";
        getline(cin, daftar[i].kondisi);

        cout << "Masih Digunakan (1=Ya, 0=Tidak): ";
        cin >> daftar[i].masih_digunakan;

        cin.ignore();

        total_beli += daftar[i].harga_beli;
        total_sekarang += daftar[i].nilai_sekarang;
    }

    double total_penyusutan = total_beli - total_sekarang;

    cout << endl;
    cout << fixed << setprecision(0);

    cout << "==========================================" << endl;
    cout << "          RINGKASAN BARANG               " << endl;
    cout << "==========================================" << endl;

    for (int i = 0; i < JUMLAH; i++) {

        double penyusutan = daftar[i].harga_beli - daftar[i].nilai_sekarang;

        cout << endl;
        cout << i + 1 << ". " << kategori[i] << endl;
        cout << "Nama           : " << daftar[i].nama << endl;
        cout << "Merek          : " << daftar[i].merek << endl;
        cout << "Tipe/Model     : " << daftar[i].tipe_model << endl;
        cout << "Harga Beli     : Rp " << daftar[i].harga_beli << endl;
        cout << "Nilai Sekarang : Rp " << daftar[i].nilai_sekarang << endl;
        cout << "Penyusutan     : Rp " << penyusutan << endl;

        cout << "------------------------------------------" << endl;
    }

    cout << endl;
    cout << "Total Harga Beli     : Rp " << total_beli << endl;
    cout << "Total Nilai Sekarang : Rp " << total_sekarang << endl;
    cout << "Total Penyusutan     : Rp " << total_penyusutan << endl;

    cout << "==========================================" << endl;

    return 0;
}