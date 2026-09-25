#include <iostream>
#include <string>

using namespace std;

struct DataLari {
    string hari;
    string tanggal;
    string waktuMulai;
    string waktuSelesai;
    double jarak;
    string catatan;
};

// ganti waktu jam menit detik ke detik
int ubahKeDetik(string waktu) {
    int jam = stoi(waktu.substr(0, 2));
    int menit = stoi(waktu.substr(3, 2));
    int detik = stoi(waktu.substr(6, 2));

    return jam * 3600 + menit * 60 + detik;
}

// format menit detik
void tampilDurasi(int detik) {
    int menit = detik / 60;
    int sisaDetik = detik % 60;

    if (menit < 10)
        cout << "0";

    cout << menit << ":";

    if (sisaDetik < 10)
        cout << "0";

    cout << sisaDetik;
}

// format waktu lengkap jam menit detik
void tampilWaktu(int detik) {
    int jam = detik / 3600;
    detik = detik % 3600;

    int menit = detik / 60;
    int sisaDetik = detik % 60;

    if (jam < 10)
        cout << "0";
    cout << jam << ":";

    if (menit < 10)
        cout << "0";
    cout << menit << ":";

    if (sisaDetik < 10)
        cout << "0";
    cout << sisaDetik;
}

int main() {

    DataLari kegiatan[5] = {
        {"Senin", "1 Sep 2025", "07:10:00", "07:38:20", 2.5, "Cuaca cerah"},
        {"Selasa", "2 Sep 2025", "07:12:30", "07:41:15", 2.5, "Sedikit ramai"},
        {"Rabu", "3 Sep 2025", "07:05:45", "07:33:50", 2.5, "Lancar"},
        {"Kamis", "4 Sep 2025", "07:15:20", "07:44:10", 2.5, "Sedikit hujan"},
        {"Jumat", "5 Sep 2025", "07:08:10", "07:36:40", 2.5, "Lancar"}
    };

    int jumlahHari = 5;
    int totalDetik = 0;

    cout << "===============================================================\n";
    cout << "             LAPORAN KEGIATAN RUNNING NADIA\n";
    cout << "===============================================================\n\n";

    cout << "Hari\tMulai\t\tSelesai\t\tDurasi\t\tCatatan\n";
    cout << "---------------------------------------------------------------\n";

    for (int i = 0; i < jumlahHari; i++) {

        int mulai = ubahKeDetik(kegiatan[i].waktuMulai);
        int selesai = ubahKeDetik(kegiatan[i].waktuSelesai);

        int durasi = selesai - mulai;

        totalDetik += durasi;

        cout << kegiatan[i].hari << "\t"
             << kegiatan[i].waktuMulai << "\t"
             << kegiatan[i].waktuSelesai << "\t";

        tampilDurasi(durasi);

        cout << "\t\t"
             << kegiatan[i].catatan << endl;
    }

    cout << "---------------------------------------------------------------\n";

    cout << "Total waktu lari = ";
    tampilDurasi(totalDetik);
    cout << endl;

    // ngitung rata rata lari
    int rataRata = totalDetik / jumlahHari;

    cout << "\n================ HASIL PERHITUNGAN ================\n";

    cout << "Total waktu      : " << totalDetik << " detik\n";
    cout << "Jumlah hari      : " << jumlahHari << " hari\n";
    cout << "Rata-rata waktu  : " << rataRata << " detik\n";

    cout << "\nRata-rata lama berlari Nadia adalah ";
    tampilWaktu(rataRata);

    cout << " atau sekitar "
         << rataRata / 60 << " menit "
         << rataRata % 60 << " detik.\n";

    return 0;
}

// /t dan /n itu escape sequence yah hehe yang n itu newline yang t itu tab ini biar rapi aja   