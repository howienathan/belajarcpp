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

        Barang daftar[JUMLAH] = {
            {
                "Newbalance 480",
                "Newbalance",
                "480",
                "Baik",
                'A',
                2023,
                1800000,
                1200000,
                true
            },
            {
                "G-Shock",
                "Casio",
                "GA-2100",
                "Sangat Baik",
                'B',
                2024,
                1500000,
                1200000,
                true
            },
            {
                "Backpack",
                "Eiger",
                "Tactical 25L",
                "Baik",
                'C',
                2023,
                750000,
                500000,
                true
            },
            {
                "Smartphone",
                "Samsung",
                "Galaxy A54",
                "Sangat Baik",
                'D',
                2024,
                5500000,
                4200000,
                true
            }
        };

        double total_beli = 0;
        double total_sekarang = 0;

        cout << "==========================================" << endl;
        cout << "        INVENTARIS 4 BARANG PRIBADI       " << endl;
        cout << "==========================================" << endl;

        for (int i = 0; i < JUMLAH; i++) {

            double penyusutan = daftar[i].harga_beli - daftar[i].nilai_sekarang;

            cout << endl;
            cout << "Barang ke-" << i + 1 << endl;
            cout << "------------------------------------------" << endl;

            cout << "Nama Barang     : " << daftar[i].nama << endl;
            cout << "Merek           : " << daftar[i].merek << endl;
            cout << "Tipe/Model      : " << daftar[i].tipe_model << endl;
            cout << "Kode Barang     : " << daftar[i].kode << endl;
            cout << "Tahun Diperoleh : " << daftar[i].tahun_diperoleh << endl;
            cout << "Harga Beli      : Rp " << fixed << setprecision(0)
                << daftar[i].harga_beli << endl;
            cout << "Nilai Sekarang  : Rp " << daftar[i].nilai_sekarang << endl;
            cout << "Kondisi         : " << daftar[i].kondisi << endl;
            cout << "Masih Digunakan : "
                << (daftar[i].masih_digunakan ? "Ya" : "Tidak") << endl;
            cout << "Penyusutan      : Rp " << penyusutan << endl;

            total_beli += daftar[i].harga_beli;
            total_sekarang += daftar[i].nilai_sekarang;
        }

        double total_penyusutan = total_beli - total_sekarang;

        cout << endl;
        cout << "==========================================" << endl;
        cout << "              TOTAL                      " << endl;
        cout << "==========================================" << endl;

        cout << "Total Harga Beli     : Rp " << total_beli << endl;
        cout << "Total Nilai Sekarang : Rp " << total_sekarang << endl;
        cout << "Total Penyusutan     : Rp " << total_penyusutan << endl;

        cout << "==========================================" << endl;

        return 0;
    }