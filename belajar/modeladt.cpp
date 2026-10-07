#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


struct Barang {
    // kamus global
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

// deskripsi
int main() {
    
    Barang b1, b2;

    double total_harga_beli = 0;
    double total_nilai_sekarang = 0;

    
    cout << "===========================================" << endl;
    cout << "       PROGRAM INVENTARIS RUMAH (ADT)      " << endl;
    cout << "===========================================" << endl;
    cout << endl;

    
    cout << "--- Input Data Barang 1 ---" << endl;

    cout << "Nama Barang     : ";
    getline(cin, b1.nama);

    cout << "Merek           : ";
    getline(cin, b1.merek);

    cout << "Tipe/Model      : ";
    getline(cin, b1.tipe_model);

    cout << "Kode Barang     : ";
    cin >> b1.kode;

    cout << "Tahun Diperoleh : ";
    cin >> b1.tahun_diperoleh;

    cout << "Harga Beli (Rp) : ";
    cin >> b1.harga_beli;

    cout << "Nilai Sekarang  : ";
    cin >> b1.nilai_sekarang;

    cin.ignore();

    cout << "Kondisi Barang  : ";
    getline(cin, b1.kondisi);

    cout << "Masih Digunakan (1=Ya, 0=Tidak): ";
    cin >> b1.masih_digunakan;

    cout << endl;

    
    cin.ignore();

    cout << "--- Input Data Barang 2 ---" << endl;

    cout << "Nama Barang     : ";
    getline(cin, b2.nama);

    cout << "Merek           : ";
    getline(cin, b2.merek);

    cout << "Tipe/Model      : ";
    getline(cin, b2.tipe_model);

    cout << "Kode Barang     : ";
    cin >> b2.kode;

    cout << "Tahun Diperoleh : ";
    cin >> b2.tahun_diperoleh;

    cout << "Harga Beli (Rp) : ";
    cin >> b2.harga_beli;

    cout << "Nilai Sekarang  : ";
    cin >> b2.nilai_sekarang;

    cin.ignore();

    cout << "Kondisi Barang  : ";
    getline(cin, b2.kondisi);

    cout << "Masih Digunakan (1=Ya, 0=Tidak): ";
    cin >> b2.masih_digunakan;

    cout << endl;

    
    total_harga_beli =
        b1.harga_beli + b2.harga_beli;

    total_nilai_sekarang =
        b1.nilai_sekarang + b2.nilai_sekarang;

    
    cout << fixed << setprecision(0);

    cout << "===========================================" << endl;
    cout << "          RINGKASAN INVENTARIS ADT         " << endl;
    cout << "===========================================" << endl;

    cout << "1. " << b1.nama
         << " (" << b1.merek << " "
         << b1.tipe_model << ")"
         << " - Rp " << b1.nilai_sekarang << endl;

    cout << "2. " << b2.nama
         << " (" << b2.merek << " "
         << b2.tipe_model << ")"
         << " - Rp " << b2.nilai_sekarang << endl;

    cout << "-------------------------------------------" << endl;

    cout << "Total Nilai Beli Awal      : Rp "
         << total_harga_beli << endl;

    cout << "Total Nilai Harta Sekarang : Rp "
         << total_nilai_sekarang << endl;

    cout << "===========================================" << endl;

    return 0;
}

