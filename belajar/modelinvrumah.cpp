#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// deskripsi
int main() {
    
    // kamus global
    string nama_barang;
    string merek;
    string tipe_model;
    string kondisi;

    char kode;
    int tahun_diperoleh;

    double harga_beli;
    double nilai_sekarang;

    bool masih_digunakan;

    
    double total_harga_beli = 0;
    double total_nilai_sekarang = 0;
    int total_unit = 0;

    
    cout << "===========================================" << endl;
    cout << "       PROGRAM INVENTARIS BARANG RUMAH     " << endl;
    cout << "===========================================" << endl;
    cout << endl;

    
    int n;

    cout << "Masukkan jumlah barang yang ingin dicatat: ";
    cin >> n;
    cout << endl;

    
    for (int i = 1; i <= n; i++) {
        cout << "--- Input Barang ke-" << i << " ---" << endl;

        cin.ignore();

        cout << "Nama Barang     : ";
        getline(cin, nama_barang);

        cout << "Merek           : ";
        getline(cin, merek);

        cout << "Tipe/Model      : ";
        getline(cin, tipe_model);

        cout << "Kode Barang     : ";
        cin >> kode;

        cout << "Tahun Diperoleh : ";
        cin >> tahun_diperoleh;

        cout << "Harga Beli (Rp) : ";
        cin >> harga_beli;

        cout << "Nilai Sekarang  : ";
        cin >> nilai_sekarang;

        cin.ignore();

        cout << "Kondisi Barang  : ";
        getline(cin, kondisi);

        cout << "Masih Digunakan (1=Ya, 0=Tidak): ";
        cin >> masih_digunakan;

        
        total_harga_beli += harga_beli;
        total_nilai_sekarang += nilai_sekarang;
        total_unit++;

        cout << endl;
    }

    
    cout << fixed << setprecision(0);

    cout << "===========================================" << endl;
    cout << "         RINGKASAN TOTAL NILAI HARTA       " << endl;
    cout << "===========================================" << endl;

    cout << "Total Unit Barang Dicatat  : "
         << total_unit << " unit" << endl;

    cout << "Total Harga Beli Awal      : Rp "
         << total_harga_beli << endl;

    cout << "Total Nilai Harta Sekarang : Rp "
         << total_nilai_sekarang << endl;

    cout << "===========================================" << endl;

    return 0;
}